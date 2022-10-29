
#include "Addressbook.h"
#include "Person.h"
#include "Loader.h"

Addressbook::Addressbook()
{

}

bool Addressbook::init (Loader& loader)
{
    return loader.load (persons);
}

std::string Addressbook::toLower (const std::string& str)
{
    std::string strLow;
    for(char c : str)
        strLow += tolower (c);
    
    return std::move (strLow);
}

std::string Addressbook::getPhonenumberByName (const std::string& name) const
{
    std::string nameLow = toLower (name);
    
    std::vector<std::shared_ptr<Person>> filtered;
    for (std::shared_ptr<Person> person : persons)
    {
        std::string firstnameLow = toLower (person->firstname);
        if(nameLow.find (firstnameLow) != std::string::npos)
            filtered.push_back (person);
    }
    
    std::vector<std::shared_ptr<Person>> match;
    for (std::shared_ptr<Person> person : filtered)
    {
        std::string lastnameLow = toLower (person->lastname);
        if(nameLow.find (lastnameLow) != std::string::npos)
            match.push_back (person);
    }
    
    if (match.empty())
        return "";
    
    return match[0]->phonenumber;
}

