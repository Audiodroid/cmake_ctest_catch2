
#pragma once

#include <string>
#include <vector>
#include <memory>

class Loader;
class Person;

class Addressbook
{
    
public:
    Addressbook();
    bool init(Loader& loader);
    std::string getPhonenumberByName (const std::string& name) const;
    
private:
    std::vector<std::shared_ptr<Person>> persons;
};
