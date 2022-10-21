
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

    SECTION("When firstname is different, then returns different phonenumber")
    {
        name = "Jane Public";
        phonenumberExpected = "1111111111";
    }
    
    ///PREPARE
    std::vector<std::shared_ptr<Person>> persons;
    std::shared_ptr<Person> person;
    
    person = std::make_shared<Person> ("Joe", "Public", "0123456789");
    persons.push_back (person);
    
    person = std::make_shared<Person> ("Joe", "Private", "9876543210");
    persons.push_back (person);
    
    person = std::make_shared<Person> ("Jane", "Public", "1111111111");
    persons.push_back (person);
    
    ///EXERCISE
    Addressbook addressbook(persons);
    std::string phonenumberActual = addressbook.getPhonenumberByName (name);
    
    ///EVALUTE
    REQUIRE (phonenumberActual == phonenumberExpected);
}
