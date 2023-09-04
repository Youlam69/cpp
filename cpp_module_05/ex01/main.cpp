#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form form("chahadat lmou3a9", 1, 150);
        Bureaucrat hamid("hamid", 2);
        hamid.signForm(form);
        hamid.incrementGrade();
        hamid.signForm(form);
        hamid.decrementGrade();
        hamid.signForm(form);
        std::cout << form << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}