#pragma once

#include "catch2/catch_all.hpp"
#include "trompeloeil.hpp"

#include "Output.h"

class OutputMock : public Output
{
public:
    MAKE_MOCK1 (print, void (const std::string& str), override);
};
