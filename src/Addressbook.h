
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

class Loader
{
    public:
    virtual bool load(std::vector<std::shared_ptr<Person>>& persons)
    {
        ///TODO load from file or load from sqlite3 or the cloud or ....
        return true;
    }
};

class Addressbook
{
    
public:
    Addressbook();
    bool init(Loader& loader);
    std::string getPhonenumberByName (const std::string& name) const;
    
private:
    std::vector<std::shared_ptr<Person>> persons;
};
