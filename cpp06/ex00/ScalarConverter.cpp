#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){

}

ScalarConverter::~ScalarConverter(){

}

ScalarConverter::ScalarConverter(const ScalarConverter &copy){
    *this = copy;
    
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy){
        (void)copy;
        return (*this);
}


void ScalarConverter::convert(std::string &literal)
{

    if (literal.length() == 1 && isprint(literal[0]) && !std::isdigit(literal[0]))
    {
        convToChar(literal[0]);
        return ;
    }
    if (literal[literal.length() - 1] == 'f')
        literal[literal.length() - 1] = '\0';
    if (literal == "nan" || literal == "nanf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }
    if (literal == "inf" || literal == "+inf" || literal == "inff" || literal == "+inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf" << std::endl;
        return;
    }
    if (literal == "-inf" || literal == "-inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return;
    }
    char* end = NULL;
    errno = 0;
    double value = std::strtod(literal.c_str(), &end);
    if (*end != '\0' || errno != 0) {
        std::cout << "Conversion error: Invalid literal" << std::endl;
        return;
    }
    convToInt(value);
    convToFloat(value);
    convToDouble(value);
}

void ScalarConverter::convToChar(char c){

        
    int     i = static_cast<int>(c);
    float   f = static_cast<float>(c);
    double  d = static_cast<double>(c);

    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f"<<std::endl;
    std::cout << "double: " << d << std::endl;
    return ;
}


void ScalarConverter::convToInt(double value){

    if (value < 127 && value >= 32)
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    else
        std::cout << "char: Not displayable" << std::endl;

    if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    else 
        std::cout << "int: impossible" << std::endl;
}

void ScalarConverter::convToFloat(double value){
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
}

void ScalarConverter::convToDouble(double value){
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "double: " << value << std::endl;
}


