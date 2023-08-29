#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeSign(150), _gradeExec(150){}
Form::Form( Form const & src ) : _name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec){}
Form::~Form(){}
Form & Form::operator=( Form const & rhs )
{
	if(this != &rhs){
		Form *b =  new Form(rhs);
	}
	else
		return *this;
}

Form::GradeTooHighException::GradeTooHighException() : std::runtime_error("Grade too hi") {}
Form::GradeTooLowException::GradeTooLowException() : std::runtime_error("Grade too low") {}
std::string Form::getName() const {return (this->_name);}

void Form::beSigned(Bureaucrat & b)
{
	if (b.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		b.signForm(*this);
}

bool Form::getSigned() const {return (this->_signed);}
int Form::getGradeSign() const {return (this->_gradeSign);}
int Form::getGradeExec() const {return (this->_gradeExec);}	


std::ostream & operator<<(std::ostream & o, Form const & src)
{
	o << "Name : " << src.getName() << std::endl << "Signed : " << src.getSigned() << std::endl << "GradeSign : " << src.getGradeSign() << std::endl << "GradeExe : " << getGradeExec() << std::endl;
}

void Form::setSigned(bool b) {this->_signed = b;}