
#include <iostream>
#include "Output.h"
#include "HelloWorld.h"

HelloWorld::HelloWorld(Output& output)
: _output(output)
{

}

std::string HelloWorld::createString()
{
    return "hello world";
}

void HelloWorld::displayString(const std::string& str)
{
    _output.print(str);
}