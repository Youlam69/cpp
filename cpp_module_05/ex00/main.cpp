#include "Bureaucrat.hpp"

int main()
{
    try
    {
        {
            Bureaucrat b("b", 1);
                std::cout << b ;
            b.decrementGrade();
                std::cout << b ;
            b.incrementGrade();
                std::cout << b ;
              b.incrementGrade();
                std::cout << b ;
        }

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}