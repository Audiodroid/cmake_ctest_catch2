#include "Output.h"
#include "HelloWorld.h"

int main (int argc, char **argv)
{
    Output output;
    HelloWorld helloWorld(output);
    
    auto str = helloWorld.createString();
    helloWorld.displayString(str);

    return 0;
}

