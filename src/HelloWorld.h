#pragma once

#include <string>
#include "Output.h"

class HelloWorld
{

public:
    HelloWorld(Output& output);
    std::string createString();
    void displayString(const std::string& str);

private:
    Output& _output;
};