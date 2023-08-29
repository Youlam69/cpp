#include "Bureaucrat.hpp"

void hiloll()
{
    system("leaks bureaucrat");
}
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
            Bureaucrat *b2 = &b;
                std::cout << *b2 ;
                // delete b2;
            // atexit(hiloll);
            // b.incrementGrade();
            //     std::cout << b ;
                // delete b;
        }

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}