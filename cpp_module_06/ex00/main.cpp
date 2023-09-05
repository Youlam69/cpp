#include "ScalarConverter.hpp"

int main(int ac, char **av )
{
    try
    {
        if( ac != 2)
        {
            std::cout << "expected 1 argument " << "got " << ac - 1 << std::endl;
            return 0;
        }
            ScalarConverter::convert(std::string(av[1]));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        exit(1);
    }
}