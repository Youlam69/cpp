#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeSign(150), _gradeExec(150){}
AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec){
	if (gradeSign < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSign > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm(){}

AForm & AForm::operator=( AForm const & rhs ){
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

AForm::GradeTooHighException::GradeTooHighException() : std::runtime_error("Grade too hi") {}
AForm::GradeTooLowException::GradeTooLowException() : std::runtime_error("Grade too low") {}
std::string AForm::getName() const {return (this->_name);}

void AForm::beSigned(Bureaucrat & b){

	if (b.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
	else
		setSigned(true);	
}

bool AForm::getSigned() const {return (this->_signed);}
int AForm::getGradeSign() const {return (this->_gradeSign);}
int AForm::getGradeExec() const {return (this->_gradeExec);}	


std::ostream & operator<<(std::ostream & o, AForm const & src){
		o << "Name : " << src.getName() << std::endl << "Signed : " << src.getSigned() << std::endl << "GradeSign : " << src.getGradeSign() << std::endl << "GradeExe : " << src.getGradeExec() << std::endl;
	return o;
}

void AForm::setSigned(bool b) {
		if (this->_signed == true)
			throw (std::runtime_error("AForm already signed"));
		else
			this->_signed = b;
}
