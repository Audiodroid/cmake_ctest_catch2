
#include "catch2/catch_all.hpp"
#include "trompeloeil.hpp"

#include "Loader.h"

TEST_CASE ("When loading, then simple loader returns true", "Loader")
{
    bool successExpected = true;
    
    ///exercise
    Loader loader;
    std::vector<std::shared_ptr<Person>> persons;
    bool successActual = loader.load (persons);
    
    ///evaluate
    REQUIRE (successActual == successExpected);
}

TEST_CASE ("When loading, then persons vector is not empty", "Loader")
{
    ///outline
    bool personEmptyExpected = false;
    
    ///exercise
    Loader loader;
    std::vector<std::shared_ptr<Person>> persons;
    loader.load (persons);
    
    ///evaluate
    bool personEmptyActual = persons.empty();
    REQUIRE (personEmptyActual == personEmptyExpected);
}

TEST_CASE ("When loading, then person has data", "Loader")
{
    ///outline
    auto i = 0;
    auto firstnameExpected = "Marcel";
    auto lastnameExpected = "Roth";
    auto phonenumberExpected = "5424";
    
    ///exercise
    Loader loader;
    std::vector<std::shared_ptr<Person>> persons;
    loader.load (persons);
    
    ///evaluate
    auto firstnameActual = persons[i]->firstname;
    auto lastnameActual = persons[i]->lastname;
    auto phonenumberActual = persons[i]->phonenumber;
    
    REQUIRE (firstnameActual == firstnameExpected);
    REQUIRE (lastnameActual == lastnameExpected);
    REQUIRE (phonenumberActual == phonenumberExpected);
}

TEST_CASE ("When loading, then other person has other data", "Loader")
{
    ///outline
    auto i = 1;
    auto firstnameExpected = "Marco";
    auto lastnameExpected = "Ziemann";
    auto phonenumberExpected = "1215";
    
    ///exercise
    Loader loader;
    std::vector<std::shared_ptr<Person>> persons;
    loader.load (persons);
    
    ///evaluate
    auto firstnameActual = persons[i]->firstname;
    auto lastnameActual = persons[i]->lastname;
    auto phonenumberActual = persons[i]->phonenumber;
    
    REQUIRE (firstnameActual == firstnameExpected);
    REQUIRE (lastnameActual == lastnameExpected);
    REQUIRE (phonenumberActual == phonenumberExpected);
}
