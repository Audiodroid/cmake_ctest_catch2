#include "catch2/catch_all.hpp"
#include "trompeloeil.hpp"

using namespace trompeloeil;

struct Mock
{
    MAKE_MOCK0 (func, bool());
};

TEST_CASE ("When mocking, then I can call the mock and it returns the mocked value", "mocking")
{
    ///outline
    auto expected = true;
    
    ///prepare
    Mock mock;
    ALLOW_CALL(mock, func())
        .RETURN(expected);
    
    ///exercise
    auto actual = mock.func();
        
    ///evaluate
    REQUIRE(actual == expected);
}
