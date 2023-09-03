#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj): AForm(obj), _target(obj._target)
{
	if (this != &obj)
		*this = obj;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator= (const ShrubberyCreationForm &obj)
{
	if (this != &obj)
	{
		this->_target = obj._target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else if (this->getSigned() == false)
		throw std::runtime_error("Form not signed");
	else
	{
		std::ofstream ofs;
		if(ofs.good())
		{
			ofs.open(this->getName() + "_shrubbery");
			ofs << "       _-_" << std::endl;
			ofs << "    /~~   ~~\\" << std::endl;
			ofs << " /~~         ~~\\" << std::endl;
			ofs << "{               }" << std::endl;
			ofs << " \\  _-     -_  /" << std::endl;
			ofs << "   ~  \\\\ //  ~" << std::endl;
			ofs << "_- -   | | _- _" << std::endl;
			ofs << "  _ -  | |   -_" << std::endl;
			ofs << "      // \\\\" << std::endl;
			ofs.close();
		}
		else
			throw std::runtime_error("File Error");

	}
}
