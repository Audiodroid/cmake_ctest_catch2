
#include "catch2/catch_all.hpp"
#include "trompeloeil.hpp"

#include "OutputMock.h"
#include "HelloWorld.h"

using namespace trompeloeil;

TEST_CASE ("When createString and displayString is called, then helloWorld calls print('hello world') from Output", "HelloWorld")
{
    ///outline
    OutputMock output;
    REQUIRE_CALL(output, print("hello world"));
    
    ///prepare
    HelloWorld helloWorld(output);
    
    ///exercise  
    auto str = helloWorld.createString();
    helloWorld.displayString(str);
        
    ///evaluate
    ///see above, call required
}
