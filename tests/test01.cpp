#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include "add.h"

// 第一个测试用例，标签为 [add]，用于测试 add 函数的多种情况
TEST_CASE("testadd", "[add]")
{
  REQUIRE(add(0, 0) == 0);
  REQUIRE(add(0.0, 0.0) == 0);
  REQUIRE(add(1, 2) == 3);
  REQUIRE(add(-4, -1) == -5);
}

// 第二个测试用例
TEST_CASE("testadd2")
{
  // 测试负数与浮动值加法
  REQUIRE(add(-3.14, static_cast<double>(1)) == -2.14);
}

// 第三个测试用例，标签为 [add]，测试基本整数加法
TEST_CASE("testadd3", "[add]")
{
  int a = 9;
  int b = 1;
  int ret = add(a, b);  // 调用 add 函数进行加法
  REQUIRE(ret == 11);  // 确保返回值为 11
}
