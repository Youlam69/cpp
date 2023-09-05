#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &copy){*this = copy;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &copy)
{
    if (this != &copy)
        return (*this = copy);
    return *this;
}

bool ScalarConverter::_check_nan(std::string _str)
{
    if (_str == "nan" || _str == "nanf" || _str == "+inf" || _str == "-inf" || _str == "+inff" || _str == "-inff")
        return true;
    else
        return false;
}

bool ScalarConverter::_checkChar(std::string _str, char &c)
{
    if (_str.length() == 1 && !isdigit(_str[0]))
    {
        c = _str[0];
        return true;
    }
    else
        return false;
}

bool ScalarConverter::_checkInt(std::string _str, int &x)
{
    for(int i = 0; i < static_cast<int>(_str.length()); i++)
    {
        if (i == 0 && (_str[i] == '-' || _str[i] == '+'))
            continue;
        if (!isdigit(_str[i]))
            return false;
    }
    if( INT_MAX < std::atol(_str.c_str()) || INT_MIN > std::atol(_str.c_str()))
        return false; // i should throw error here
    else
        x =  std::atoi(_str.c_str());
    return true;
}

void ScalarConverter::_printChar(std::string _str)
{
    std::cout << "char: ";
    char _char;
    int _int;
    double _double;
    float _float;
    if (_checkChar(_str, _char))
    {
        if (isprint(_char))
            std::cout << "'" << _char << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    else if (_checkInt(_str, _int))
    {
        if(_int< -128 || _int > 127)
            std::cout << "impossible" << std::endl;
        else if (isprint(_int))
            std::cout << "'" << static_cast<char>(_int) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    else if(_checkFloat(_str, _float ))
    {
        if(_float < 0 || _float > 127)
            std::cout << "impossible" << std::endl;
        else if (isprint(_float))
            std::cout << "'" << static_cast<char>(_float) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    else if(_checkDouble(_str, _double ))
    {
        if(_double < 0 || _double > 127)
            std::cout << "impossible" << std::endl;
        else if (isprint(_double))
            std::cout << "'" << static_cast<char>(_double) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}


bool ScalarConverter::_checkFloat(std::string _str, float &f)
{
    int ref = 0;
    int flt = 0;
    for(int i = 0; i < static_cast<int>(_str.length()); i++)
    {
        if (i == 0 && (_str[i] == '-' || _str[i] == '+'))
            continue;
        if (_str[i] == '.')
            ref++;
        if (_str[i] == 'f')
            flt++;
        if(!isdigit(_str[i]) && _str[i] != '.')
        {
            if(_str[i] == 'f' && i == static_cast<int>(_str.length() - 1))
                break;
            return false;
        }
    }
    if (ref == 1 && flt == 1 && _str[_str.length() - 1] == 'f')
    {
        f = std::atof(_str.substr(0, _str.length() - 1).c_str());
        return  true;
    }
    else
        return false;
}

bool ScalarConverter::_checkDouble(std::string _str, double &d)
{
    int ref = 0;
    
    for(int i = 0; i < static_cast<int>(_str.length()); i++)
    {
        if (i == 0 && (_str[i] == '-' || _str[i] == '+'))
            continue;
        if (_str[i] == '.')
            ref++;
        if(!isdigit(_str[i]) && _str[i] != '.')
            return false;
    }
    if (ref != 1)
        return false;
    else
        d = std::strtod(_str.c_str(), NULL);
    return true;
}


void ScalarConverter::_printInt(std::string _str)
{
    std::cout << "int: ";
    int x;
    char c;
    double d;
    float f;

    if (_checkChar(_str, c))
        std::cout << static_cast<int>(c) << std::endl;
    else if (_checkInt(_str, x))
            std::cout << x << std::endl;
    else if(_checkDouble(_str, d))
    {
        if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::lowest())
            std::cout << "impossible" << std::endl;
        else
            std::cout << static_cast<int>(d) << std::endl;
    }
    else if(_checkFloat(_str, f) )
    {
        if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::lowest())
            std::cout << "impossible" << std::endl;
        else
            std::cout << static_cast<int>(f) << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

void ScalarConverter::_printFloat(std::string _str)
{
    std::cout << "float: ";
    char _char;
    int _int;
    float _float;
    double _double;
    if(_check_nan(_str))
    {
        if( _str == "nan" || _str == "nanf")
            std::cout << "nanf" << std::endl;
        else if (_str == "+inf" || _str == "+inff")
            std::cout << "+inff" << std::endl;
        else if (_str == "-inf" || _str == "-inff")
            std::cout << "-inff" << std::endl;
        else
            std::cout << "impossible" << std::endl;
    }
    else if ( _checkChar(_str, _char))
    {
        if (_char > std::numeric_limits<float>::max() || _char < std::numeric_limits<float>::lowest())
            std::cout << "impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << static_cast<float>(_char) << "f" << std::endl;
    }
    else if ( _checkInt(_str, _int))
    {
        if (_int > std::numeric_limits<float>::max() || _int < std::numeric_limits<float>::lowest())
            std::cout << "impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << static_cast<float>(_int) << "f" << std::endl;
    }  
    else if (_checkFloat(_str, _float))
    {
        if (_float > std::numeric_limits<float>::max() || _float < std::numeric_limits<float>::lowest())
            std::cout << "impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
    }
    else if (_checkDouble(_str, _double))
    {
        if (_double > std::numeric_limits<float>::max() || _double < std::numeric_limits<float>::lowest())
            std::cout << "impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << static_cast<float>(_double) << "f" << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

void ScalarConverter::_printDouble(std::string _str)
{
    std::cout << "double: ";
    char _char;
    int _int;
    float _float;
    double _double;
    if (_check_nan(_str))
    {
        if(_str == "nan" || _str == "nanf")
            std::cout << "nan" << std::endl;
        else if (_str == "+inf" || _str == "+inff")
            std::cout << "+inf" << std::endl;
        else if (_str == "-inf" || _str == "-inff")
            std::cout << "-inf" << std::endl;
        else
            std::cout << "impossible" << std::endl;
    }
    else if (_checkChar(_str, _char))
        std::cout << std::fixed << std::setprecision(1) << static_cast<double>(_char) << std::endl;
    else if (_checkInt(_str, _int))
        std::cout << std::fixed << std::setprecision(1) << static_cast<double>(_int) << std::endl;
    else if (_checkDouble(_str, _double))
    {
        if (_double > std::numeric_limits<double>::max())
            std::cout << "impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << _double << std::endl;
    }
    else if (_checkFloat(_str, _float))
        std::cout << std::fixed << std::setprecision(1) << static_cast<double>(_float) << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

void ScalarConverter::convert(std::string str)
{
    _printInt(str);
    _printChar(str);
    _printFloat(str);
    _printDouble(str);
}


// void ScalarConverter::_printChar(std::string _str)
// {
//     std::cout << "char: ";
//     char _char;
//     int _int;
//     if (_checkChar(_str, _char))
//     {
//         if (isprint(_char))
//             std::cout << "'" << _char << "'" << std::endl;
//         else
//             std::cout << "Non displayable" << std::endl;
//     }
//     else if (_checkInt(_str, _int))
//     {
//         if (isprint(_int))
//             std::cout << "'" << static_cast<char>(_int) << "'" << std::endl;
//         else
//             std::cout << "Non displayable" << std::endl;
//     }
//     else
//         std::cout << "impossible" << std::endl;
// }