#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cstdlib>


class  ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter& operator=(const ScalarConverter &copy);
        
        static bool _checkInt(std::string _str, int &x);
        static bool _checkChar(std::string _str, char &c);
        static bool _checkFloat(std::string _str, float &f);
        static bool _checkDouble(std::string _str , double &d);
        static bool _check_nan(std::string _str);

        static void _printChar(std::string _str);
        static void _printInt(std::string _str);
        static void _printFloat(std::string _str);
        static void _printDouble(std::string _str);
    public:


       static void convert(std::string str);
};




#endif