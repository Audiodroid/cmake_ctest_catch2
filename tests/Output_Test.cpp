
#include "catch2/catch_all.hpp"
#include "trompeloeil.hpp"

#include "Output.h"

using namespace trompeloeil;

TEST_CASE("When print() is called once, then numWrittenLines() returns 1", "Output")
{
    ///outline
    std::string oneLine = "one line that we print";
    int numLinesWrittenExpected = 1;

    ///prepare
    Output output;
    
    ///exercise
    output.print(oneLine);
    auto numLinesWrittenActual = output.numLinesWritten();

    ///evaluate
    REQUIRE(numLinesWrittenExpected == numLinesWrittenActual);
}
