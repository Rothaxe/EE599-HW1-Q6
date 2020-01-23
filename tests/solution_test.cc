#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FactorialTest, HandleInteger) {
  Solution solution;
  int actual1 = solution.Factorial(5);
  int expected1 = 120;

  int actual2 = solution.FactorialRecursive(12);
  int expected2 = 479001600;

  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
}

TEST(FactorialTest, HandleZero) {
  Solution solution;
  int actual1 = solution.Factorial(0);
  int expected1 = 1;

  int actual2 = solution.FactorialRecursive(0);
  int expected2 = 1;

  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
}

TEST(FactorialTest, ShouldFail) {
  Solution solution;
  int actual1 = solution.Factorial(-5);
  int expected1 = 1;

  int actual2 = solution.FactorialRecursive(-22);
  int expected2 = 1;

  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
}