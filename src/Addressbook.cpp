
#include "Addressbook.h"

Addressbook::Addressbook (const std::vector<std::shared_ptr<Person>>& persons)
    : persons (persons)
{

}

std::string Addressbook::getPhonenumberByName (const std::string& name) const
{
    std::vector<std::shared_ptr<Person>> filtered;
    for (std::shared_ptr<Person> person : persons)
    {
        if(name.find (person->firstname) != std::string::npos)
            filtered.push_back(person);
    }
    
    std::vector<std::shared_ptr<Person>> match;
    for (std::shared_ptr<Person> person : filtered)
    {
        if(name.find (person->lastname) != std::string::npos)
            match.push_back (person);
    }
    
    if(match.empty())
        return "";
    
    return match[0]->phonenumber;
}
