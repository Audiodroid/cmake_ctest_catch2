
#include "catch2/catch_all.hpp"
#include "trompeloeil.hpp"

#include "Loader.h"

TEST_CASE ("When Loading, then returns true", "Loader")
{
    bool successExpected = true;
    
    Loader loader;
    std::vector<std::shared_ptr<Person>> persons;
    bool successActual =loader.load (persons);
    
    REQUIRE (successActual == successExpected);
}

TEST_CASE ("When Loading, then persons vector not empty", "Loader")
{
    bool personEmptyExpected = false;
    
    Loader loader;
    std::vector<std::shared_ptr<Person>> persons;
    loader.load (persons);
    
    bool personEmptyActual = persons.empty();
    REQUIRE (personEmptyActual == personEmptyExpected);
}

TEST_CASE ("When loading then person has data", "Loader")
{
    auto firstnameExpected = "marcel";
    auto lastnameExpected = "roth";
    auto phonenumberExpected = "5424";
    
    Loader loader;
    std::vector<std::shared_ptr<Person>> persons;
    loader.load (persons);
    
    auto firstnameActual = persons[0]->firstname;
    auto lastnameActual = persons[0]->lastname;
    auto phonenumberActual = persons[0]->phonenumber;
    
    REQUIRE (firstnameActual == firstnameExpected);
    REQUIRE (lastnameActual == lastnameExpected);
    REQUIRE (phonenumberActual == phonenumberExpected);
}
