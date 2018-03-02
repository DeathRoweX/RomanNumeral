/*
        Roman Declarations
*/

#ifndef ROMAN_HPP
#define ROMAN_HPP

#include <string>

class Roman{
private:
        std::string numeral;
        unsigned int digit;
        unsigned int getNumValue(char c);
        unsigned int convertNumeral(std::string n);

public:
        Roman();
        Roman(std::string n);
        std::string getNumeral();
        unsigned int getDigit();
};

#endif
~                 
