#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>


class  ScalarConverter
{
    private:
        // std::string _str;
        // static char _char;
        // static int _int;
        // static float _float;
        // static double _double;
        // static bool _isChar;
        // static bool _isInt;
        // static bool _isFloat;
        // static bool _isDouble;
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter& operator=(const ScalarConverter &copy);
    public:
        static bool _checkInt(std::string _str, int &x);
        static bool _checkChar(std::string _str, char &c);
        static bool _checkFloat(std::string _str, float &f);
        static bool _checkDouble(std::string _str , double &d);

        static void _printChar(std::string _str);
        static void _printInt(std::string _str);
        static void _printFloat(std::string _str);
        static void _printDouble(std::string _str);


        // void _printAll();
       static void convert(std::string str);
};




#endif