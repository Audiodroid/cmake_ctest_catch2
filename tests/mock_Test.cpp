
#include "catch2/catch_all.hpp"
#include "trompeloeil.hpp"

#include "Output.h"
#include "HelloWorld.h"

using namespace trompeloeil;

class OutputMock : public Output
{
public:
    MAKE_MOCK1 (print, void (const std::string& str), override);
};

TEST_CASE ("When mocking, then I can call the mock and it returns the mocked value", "mocking")
{
    ///outline

    
    ///prepare
    OutputMock output;
    REQUIRE_CALL(output, print("hello world"));
    
    ///exercise
    HelloWorld helloWorld(output);
    
    auto str = helloWorld.createString();
    helloWorld.displayString(str);
        
    ///evaluate

}
