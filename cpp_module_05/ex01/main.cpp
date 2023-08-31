#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

    try
    {
        Form form("shahadat lwafat", 1, 150);
        Bureaucrat obama("obama", 2);
        obama.signForm(form);
        obama.incrementGrade();
        obama.signForm(form);
        obama.decrementGrade();
        obama.signForm(form);
        std::cout << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}