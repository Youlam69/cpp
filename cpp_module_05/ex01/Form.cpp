#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _signed(false), _gradeSign(150), _gradeExec(150){}
Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec){
	if (gradeSign < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : _name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec){
	if (src._gradeSign < 1)
		throw Form::GradeTooHighException();
	else if (src._gradeSign > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(){}

Form & Form::operator=( Form const & rhs ){
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

Form::GradeTooHighException::GradeTooHighException() : std::runtime_error("Grade too high") {}
Form::GradeTooLowException::GradeTooLowException() : std::runtime_error("Grade too low") {}
std::string Form::getName() const {return (this->_name);}

void Form::beSigned(Bureaucrat & b){

	if (b.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		setSigned(true);	
}

bool Form::getSigned() const {return (this->_signed);}
int Form::getGradeSign() const {return (this->_gradeSign);}
int Form::getGradeExec() const {return (this->_gradeExec);}	


std::ostream & operator<<(std::ostream & o, Form const & src){
		o << "Name : " << src.getName() << std::endl << "Signed : " << src.getSigned() << std::endl << "GradeSign : " << src.getGradeSign() << std::endl << "GradeExe : " << src.getGradeExec() << std::endl;
	return o;
}

void Form::setSigned(bool b) {
		if (this->_signed == true)
			throw (std::runtime_error("Form already signed"));
		else
			this->_signed = b;
}
