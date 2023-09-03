#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("default") {}
PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target) {}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj): AForm(obj), _target(obj._target) {}
PresidentialPardonForm	&PresidentialPardonForm::operator= (const PresidentialPardonForm &obj)
{
    if (this != &obj)
    {
        this->_target = obj._target;
    }
    return (*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    else if (this->getSigned() == false)
        throw std::runtime_error("Form not signed");
    else
    {
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    }

}
