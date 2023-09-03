#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("default") {}
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target) {}
RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj): AForm(obj), _target(obj._target) {}


void  RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else if (this->getSigned() == false)
		throw std::runtime_error("Form not signed");
	else
    {
        std::cout << "ra9 ta9 ma9" << std::endl;
        srand(time(NULL));
        if(!(rand() % 2))
            std::cout << this->_target << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->_target << " has not been robotomized successfully" << std::endl;
    }

}
