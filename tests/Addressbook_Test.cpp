
#include <string>

#include "catch2/catch_all.hpp"
#include "../src/Addressbook.h"

TEST_CASE("getPhonenumberByName", "[Category]")
{
    auto name = "";
    auto phonenumberExpected = "";
    
    ///OUTLINE
    SECTION("When name is empty, then returns empty phonenumber")
    {
        name = "";
        phonenumberExpected = "";
    }

    SECTION("When name is unknown, then returns empty phonenumber")
    {
        name = "Unknown Name";
        phonenumberExpected = "";
    }
    
    SECTION("When name is known, then returns phonenumber")
    {
        name = "Joe Public";
        phonenumberExpected = "0123456789";
    }

    SECTION("When name is in reverse, then returns phonenumber")
    {
        name = "Public, Joe";
        phonenumberExpected = "0123456789";
    }

    SECTION("When lastname is different, then returns different phonenumber")
    {
        name = "Joe Private";
        phonenumberExpected = "9876543210";
    }
    
    ///EXERCISE
    Addressbook addressbook;
    std::string phonenumberActual = addressbook.getPhonenumberByName (name);
    
    ///EVALUTE
    REQUIRE (phonenumberActual == phonenumberExpected);
}
