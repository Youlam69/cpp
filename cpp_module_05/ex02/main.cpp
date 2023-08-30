#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{

    try
    {
        AForm AForm("shahadat lwafat", 1, 150);
        Bureaucrat obama("obama", 2);
        obama.signAForm(AForm);
        obama.incrementGrade();
        obama.signAForm(AForm);
        obama.decrementGrade();
        obama.signAForm(AForm);
        std::cout << AForm << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}