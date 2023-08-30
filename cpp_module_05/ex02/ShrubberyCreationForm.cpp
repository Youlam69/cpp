#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm : Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm : Destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator= (const ShrubberyCreationForm &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
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
