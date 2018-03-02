/*
        Roman Definitions
*/

#ifndef ROMAN_CPP
#define ROMAN_CPP

#include "roman.hpp"

Roman::Roman(){
        numeral = "";
        digit = 0;
}

Roman::Roman(std::string n){
        numeral = n;
        digit = convertNumeral(n);
}

unsigned int Roman::getNumValue(char c){
        switch(toupper(c)){
                case 'I':
                        return 1;
                case 'V':
                        return 5;
                case 'X':
                        return 10;
                case 'L':
                        return 50;
                case 'C':
                        return 100;
                case 'D':
                        return 500;
                case 'M':
                        return 1000;
                default:
                        return -1;
        }
}

unsigned int Roman::convertNumeral(std::string n){
        unsigned int result = 0;
        for(unsigned int i = 0; i < n.length(); i++){
                unsigned int char1 = getNumValue(n[i]); // get current character value
                if(i+1 < n.length()){ // avoid out of bounds
                        unsigned int char2 = getNumValue(n[i+1]); // get next characters value
                        if(char1 >= char2){ // next value is smaller
                                result += char1; // append value to results
                        } else {        // next value smaller
                                result += (char2-char1); // subtract first value from second
                                i++;                    // skip next char.      case: IV == 4
                        }
                } else {        // last character reached
                        result += char1;
                        i++;
                }
        }
        return result;
}

std::string Roman::getNumeral(){
        return numeral;
}

unsigned int Roman::getDigit(){
        return digit;
}

#endif
