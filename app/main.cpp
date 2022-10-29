
#include <iostream>
#include <sstream>

#include "Addressbook.h"
#include "Person.h"
#include "Loader.h"

int main (int argc, char **argv)
{
    Loader loader;
    Addressbook addressbook;
    if(! addressbook.init (loader))
        std::cout << "could not load addressbook!" << std::endl;
    
    std::string name;
    while (true)
    {
        std::cout << "Enter a first and last name without space e.g. joepublic: ";
        std::cin >> name;
        if (name.find ("end") != std::string::npos)
            return 0;
        
        auto phonenumber = addressbook.getPhonenumberByName (name);
        std::cout << "phonenumber: " << phonenumber << std::endl;
    }
    
    return 0;
}

