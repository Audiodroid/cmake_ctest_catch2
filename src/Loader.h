
#pragma once

#include <vector>
#include <sstream>
#include <memory>

#include "Person.h"

class Loader
{
public:
    
    void getCommaSeparatedStrings (const std::string& str, std::vector<std::string>& v)
    {
        std::stringstream ss(str);
         
        while (ss.good()) {
            std::string substr;
            getline(ss, substr, ',');
            v.push_back(substr);
        }
    }
    
    virtual bool load (std::vector<std::shared_ptr<Person>>& persons)
    {
        std::vector<std::string> v;
        
        std::istringstream f(csv);
        std::string line;
        while (std::getline (f, line)) {
            
            getCommaSeparatedStrings (line, v);
            
            std::shared_ptr<Person> person =
                std::make_shared<Person> (v[0], v[1], v[2]);
            
            persons.push_back (person);
        }
        
        return true;
    }
    
private:
    
    std::string csv =
"marcel,roth,5424,\n\
marco,ziemann,1215,\n\
guenter,bracht,1219\n\
";

};
