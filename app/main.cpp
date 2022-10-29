
#include <iostream>
#include <sstream>

#include "Addressbook.h"
#include "Person.h"
#include "Loader.h"

int main()
{
    std::cout << "Enter a first and last name without space e.g. joepublic: ";
    std::string name;
    std::cin  >> name;
    
    Loader loader;
    Addressbook addressbook;
    if(! addressbook.init (loader))
        std::cout << "could not load addressbook!" << std::endl;
    
    std::string phonenumber = addressbook.getPhonenumberByName (name);
    std::cout << "phonenumber: " << phonenumber << std::endl;
    
    return 0;
}

