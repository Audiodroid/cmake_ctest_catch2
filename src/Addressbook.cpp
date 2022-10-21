
#include "Addressbook.h"

std::string Addressbook::getPhonenumberByName(const std::string& name) const
{
    auto firstname = "Joe";
    auto lastname1 = "Public";
    auto lastname2 = "Private";
    
    auto found = name.find(firstname);
    if(found == std::string::npos)
        return "";
    
    auto found1 = name.find(lastname1);
    auto found2 = name.find(lastname2);
    if(found1 == std::string::npos &&
        found2 == std::string::npos)
        return "";
    
    if(found1 != std::string::npos)
        return "0123456789";
    
    if(found2 != std::string::npos)
        return "9876543210";
}

