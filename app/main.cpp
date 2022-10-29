
#include <iostream>
#include <sstream>

#include "Addressbook.h"
std::string csv =
"marcel, roth, 5452,\n\
marco, ziehmann, 1215,\n\
guenter, bracht, 1219\n\
";

int main()
{
    std::istringstream f(csv);
        std::string line;
        while (std::getline(f, line)) {
            std::cout << line << std::endl;
        }
    return 0;
}

void run()
{
    std::string name;
    std::cin  >> name;
    
    Loader loader;
    Addressbook addressbook;
    if(! addressbook.init (loader))
        std::cout << "could not load addressbook!" << std::endl;
    
    std::string phonenumber = addressbook.getPhonenumberByName (name);
    std::cout << "hello, " << name << std::endl;

}
