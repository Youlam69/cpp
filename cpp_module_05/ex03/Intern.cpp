#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(Intern const &obj)
{
    *this = obj;
}
Intern::~Intern(){}

Intern &Intern::operator= (const Intern &obj)
{
    (void)obj;
        return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string tab[3] = {"robotomy request", "presidential pardon", "shrubbery creation"}; 
    int i;
    for( i = 0; i < 3; i++)
    {
        if (formName == tab[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            break ;
        }
    }

    switch (i)
    {
        case 0:
            return (new RobotomyRequestForm(target));
        case 1:
            return (new PresidentialPardonForm(target));
        case 2:
            return (new ShrubberyCreationForm(target));
        default:
            std::cout << "Intern can't create " << formName << " because it doesn't exist" << std::endl;
            return (NULL);
    }
}