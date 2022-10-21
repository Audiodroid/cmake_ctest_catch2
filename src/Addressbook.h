
#pragma once

#include <string>
#include <vector>
#include <memory>

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

class Addressbook
{
    
public:
    Addressbook (const std::vector<std::shared_ptr<Person>>& persons);
    std::string getPhonenumberByName (const std::string& name) const;
    
private:
    const std::vector<std::shared_ptr<Person>>& persons;
};
