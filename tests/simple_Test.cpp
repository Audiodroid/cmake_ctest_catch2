#include "catch2/catch_all.hpp"
#include "trompeloeil.hpp"

using namespace trompeloeil;

TEST_CASE("When I multiple a number with itself then I get the sqr value", "[simple]")
{
    ///outline
    auto x = 2;
    auto expected = 4;
    
    ///prepare
    ///...

    ///exercise
    auto actual = x * x;
    
    ///evaluate
    REQUIRE(actual == expected);
}
