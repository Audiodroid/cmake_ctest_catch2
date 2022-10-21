
#pragma once

struct Addressbook
{
    std::string getPhonenumberByName(const std::string& name)
    {
        if(name == "Joe Public")
            return "0123456789";
            
        return "";
    }
};
