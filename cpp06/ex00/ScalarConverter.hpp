#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
#include <cctype>
#include <string>
#include <iomanip>

class ScalarConverter{

    public:
       static void    convert(std::string &literal);
   
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);

        static void convToChar(char c);
        static void convToInt(double value);
        static void convToFloat(double value);
        static void convToDouble(double value);
};








#endif