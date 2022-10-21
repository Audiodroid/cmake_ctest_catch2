
#include <string>

#include "catch2/catch_all.hpp"

struct Addressbook
{
    std::string getPhonenumberByName(const std::string& name)
    {
        if(name == "Joe Public")
            return "0123456789";
            
        return "";
    }
};

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

    ///EXERCISE
    Addressbook addressbook;
    std::string phonenumberActual = addressbook.getPhonenumberByName (name);
    
    ///EVALUTE
    REQUIRE (phonenumberActual == phonenumberExpected);
}
