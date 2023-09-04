#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>


class  ScalarConverter
{
private:
    std::string _str;
    char _char;
    int _int;
    float _float;
    double _double;
    bool _isChar;
    bool _isInt;
    bool _isFloat;
    bool _isDouble;

    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter& operator=(const ScalarConverter &copy);
    public:

        void _checkChar(std::string _str);
        void _checkInt(std::string _str);
        void _checkFloat(std::string _str);
        void _checkDouble(std::string _str);
        void _printChar();
        void _printInt();
        void _printFloat();
        void _printDouble();
        void _printAll();
       static void convert(std::string str);
};




#endif