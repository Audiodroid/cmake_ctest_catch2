#pragma once

#include <iostream>
#include <string>

class Output
{
public:
    Output() = default;

    virtual void print(const std::string& str)
    {
        std::cout << str << std::endl;
        ++_numLinesWritten;
    }

    virtual int numLinesWritten() const
    {
        return _numLinesWritten;
    }

private:
    int _numLinesWritten {0};
};