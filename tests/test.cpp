#include <catch2/catch_test_macros.hpp>

#include "sum.h"

TEST_CASE("Sum function works correctly", "[sum]") {
    REQUIRE(sum(3, 4) == 7);
    REQUIRE(sum(-1, 1) == 0);
    REQUIRE(sum(0, 0) == 0);
    REQUIRE(sum(-5, -5) == -10);
}
