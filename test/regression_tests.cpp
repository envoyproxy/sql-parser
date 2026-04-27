/*
 * regression_tests.cpp
 *
 * Regression tests for envoyproxy/envoy#36471.
 */

#include "thirdparty/microtest/microtest.h"

#include "SQLParser.h"
#include "sql_asserts.h"

using namespace hsql;

// Verifies that `delta` is a usable identifier. It used to be a dead reserved
// token (declared in bison_parser.y / sql_keywords.txt but referenced by no
// grammar rule), so any INSERT mentioning a `delta` column failed to parse.
TEST(DeltaIsAValidIdentifier) {
  SQLParserResult result;
  SQLParser::parse(
      "INSERT INTO pgbench_history (tid, bid, aid, delta) VALUES (1, 2, 3, 4);",
      &result);

  ASSERT(result.isValid());
  ASSERT_EQ(result.size(), 1);
  ASSERT_EQ(result.getStatement(0)->type(), kStmtInsert);

  const InsertStatement* stmt = (const InsertStatement*) result.getStatement(0);
  ASSERT_STREQ(stmt->tableName, "pgbench_history");
  ASSERT_NOTNULL(stmt->columns);
  ASSERT_EQ(stmt->columns->size(), 4);
  ASSERT_STREQ(stmt->columns->at(0), "tid");
  ASSERT_STREQ(stmt->columns->at(1), "bid");
  ASSERT_STREQ(stmt->columns->at(2), "aid");
  ASSERT_STREQ(stmt->columns->at(3), "delta");
}

// Stresses the failed-parse cleanup path: when an ident_commalist contains a
// reserved keyword, Bison's error recovery invokes the <str_vec> %destructor
// on the partial vector. The destructor used to call `delete` on the strdup'd
// char* elements (UB: mixing free/delete). Under tcmalloc + sized
// deallocation that UB poisoned the freelist and crashed after a few hundred
// iterations.
//
// This test is deterministic only under AddressSanitizer, where the very first
// mismatched delete is reported as `alloc-dealloc-mismatch`. In release builds
// the test will usually pass either way; the value is in catching regressions
// once CI runs it under ASAN.
TEST(RepeatedFailedInsertParseDoesNotCorruptHeap) {
  // SELECT is a hard reserved keyword in any plausible future of this grammar,
  // so this stays a parse-error case independent of keyword-list churn.
  const char* kBad =
      "INSERT INTO t (a, b, c, SELECT) VALUES (1, 2, 3, 4);";

  for (int i = 0; i < 1000; ++i) {
    SQLParserResult result;
    SQLParser::parse(kBad, &result);
    ASSERT_FALSE(result.isValid());
  }
}
