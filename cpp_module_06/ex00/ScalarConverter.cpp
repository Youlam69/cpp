#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &copy){*this = copy;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &copy)
{
    // if (this != &copy)
    // {
    //     _str = copy._str;
    //     _char = copy._char;
    //     _int = copy._int;
    //     _float = copy._float;
    //     _double = copy._double;
    //     _isChar = copy._isChar;
    //     _isInt = copy._isInt;
    //     _isFloat = copy._isFloat;
    //     _isDouble = copy._isDouble;
    // }
    // if (this != &copy)
        return (*this = copy);
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
    // int ref = 0;
    for(int i = 0; i < _str.length(); i++)
    {
        if (i == 0 && (_str[i] == '-' || _str[i] == '+'))
            continue;
        if (!isdigit(_str[i]))
        {
            return false;
        }
    }
    if( INT_MAX < std::atol(_str.c_str()) || INT_MIN > std::atol(_str.c_str()))
        return false;
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
        if (isprint(_int))
            std::cout << "'" << static_cast<char>(_int) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    else if(_checkFloat(_str, _float ))
    {
        if (isprint(_float))
            std::cout << "'" << static_cast<char>(_float) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    else if(_checkDouble(_str, _double ))
    {
        if (isprint(_double))
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
    for(int i = 0; i < _str.length(); i++)
    {
        if (i == 0 && (_str[i] == '-' || _str[i] == '+'))
            continue;
        if (_str[i] == '.')
            ref++;
        if(!isdigit(_str[i]) && _str[i] != '.')
        {
            if(_str[i] == 'f' && i == _str.length() - 1)
                break;
            return false;
        }
    }
    if (ref == 1)
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
    
    for(int i = 0; i < _str.length(); i++)
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
        d = std::atof(_str.substr(0, _str.length() - 1).c_str());
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
    {
        if (x > std::numeric_limits<int>::max() || x < std::numeric_limits<int>::min())
            std::cout << "impossible" << std::endl;
        else
            std::cout << x << std::endl;
    }
    else if(_checkDouble(_str, d))
    {
        if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
            std::cout << "impossible" << std::endl;
        else
            std::cout << static_cast<int>(d) << std::endl;
    }
    else if(_checkFloat(_str, f) )
    {
        if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
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
    if ( _checkChar(_str, _char))
        std::cout << static_cast<float>(_char) << "f" << std::endl;
    else if ( _checkInt(_str, _int))
        std::cout << static_cast<float>(_int) << "f" << std::endl;
    else if (_checkFloat(_str, _float))
        std::cout << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
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
    if (_checkChar(_str, _char))
        std::cout << static_cast<double>(_char) << "0" << std::endl;
    else if (_checkInt(_str, _int))
        std::cout << static_cast<double>(_int) << "0" << std::endl;
    else if (_checkFloat(_str, _float))
        std::cout << std::fixed << std::setprecision(1) << static_cast<double>(_float) << std::endl;
    else if (_checkDouble(_str, _double))
        std::cout << std::fixed << std::setprecision(1) << _double << std::endl;
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