
#pragma once

#include <string>

class Person
{
public:
    
    Person (std::string firstname, std::string lastname, std::string phonenumber) :
            firstname (firstname), lastname (lastname), phonenumber (phonenumber)
    {
        
    }
    
    std::string firstname;
    std::string lastname;
    std::string phonenumber;
};