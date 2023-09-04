#include "ScalarConverter.hpp"

int main(int ac, char **av )
{
    if( ac != 2)
        return 0;
    

        ScalarConverter::convert(std::string(av[1]));
    //     std::cout << std::endl;
    // ScalarConverter::convert("H");
    //     std::cout << std::endl;


    // ScalarConverter::convert("1458756846846848978.2");
    //     std::cout << std::endl;

    // ScalarConverter::convert("-");
}