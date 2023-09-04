#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &copy){*this = copy;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &copy)
{
    if (this != &copy)
    {
        this->_str = copy._str;
        this->_char = copy._char;
        this->_int = copy._int;
        this->_float = copy._float;
        this->_double = copy._double;
        this->_isChar = copy._isChar;
        this->_isInt = copy._isInt;
        this->_isFloat = copy._isFloat;
        this->_isDouble = copy._isDouble;
    }
    return (*this);
}

void ScalarConverter::_checkChar(std::string _str)
{
    if (_str.length() == 1 && !isdigit(_str[0]))
    {
        this->_char = _str[0];
        this->_isChar = true;
    }
    else
        this->_isChar = false;
}

void ScalarConverter::_checkInt(std::string _str)
{
    for(int i = 0; i < _str.length(); i++)
    {
        if (i == 0 && (_str[i] == '-' || _str[i] == '+'))
            continue;
        if (!isdigit(_str[i]))
        {
            this->_isInt = false;
            return;
        }
    }
    this->_int = std::atoi(_str.c_str());
}

void ScalarConverter::_checkFloat(std::string _str)
{
    int ref = 0;
    
    for(int i = 0; i < _str.length(); i++)
    {
        if (i == 0 && (_str[i] == '-' || _str[i] == '+'))
            continue;
        else if (_str[i] == '.')
            ref++;
        else if(!isdigit(_str[i]) && _str[i] != '.' && _str[_str.length() - 1] != 'f')
        {
            this->_isFloat = false;
            return;
        }
    }
    if (ref == 1)
        this->_float = std::atof(_str.c_str());
    else
        this->_isFloat = false;
}

void ScalarConverter::_checkDouble(std::string _str)
{
    int ref = 0;
    
    for(int i = 0; i < _str.length(); i++)
    {
        if (i == 0 && (_str[i] == '-' || _str[i] == '+'))
            continue;
        else if (_str[i] == '.')
            ref++;
        else if(!isdigit(_str[i]) && _str[i] != '.')
        {
            this->_isDouble = false;
            return;
        }
    }
    if (ref == 1)
        this->_double = std::atof(_str.c_str());
    else
        this->_isDouble = false;
}


