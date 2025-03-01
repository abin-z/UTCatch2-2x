#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include "add.h"

TEST_CASE("testadd", "[add]")
{
  REQUIRE(add(0, 0) == 0);
  REQUIRE(add(0.0, 0.0) == 0);
  REQUIRE(add(1, 2) == 3);
  REQUIRE(add(-4, -1) == -5);
  REQUIRE(add(-4.2, static_cast<double>(1)) == -3.2);
}

TEST_CASE("testadd2", "[add]")
{
  REQUIRE(add(-3.14, static_cast<double>(1)) == -2.14);
}