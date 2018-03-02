
#include <iostream>
#include "roman.hpp"

int main(void){

        // create roman numberal objects
        Roman num1("MCXIV");
        Roman num2("CCCLIX");
        Roman num3("MDCLXVI");

        // print object values
        std::cout << num1.getNumeral() << " : " << num1.getDigit() << std::endl;
        std::cout << num2.getNumeral() << " : " << num2.getDigit() << std::endl;
        std::cout << num3.getNumeral() << " : " << num3.getDigit() << std::endl;

        return 0;
}
