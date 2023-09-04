#include "ScalarConverter.hpp"

int main()
{

    ScalarConverter::convert("0");
    ScalarConverter::convert("nan");
    ScalarConverter::convert("nanf");
    ScalarConverter::convert("0.33f");
}