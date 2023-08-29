#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    setGrade(grade); 
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name) {
    setGrade(src._grade);
}

void Bureaucrat::setGrade(int grade) {
    _grade = grade;
    if( grade < 1 )
        throw GradeTooHighException();
    else if( grade > 150 )
        throw GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & src) {
    Bureaucrat *newBureaucrat = new Bureaucrat(src);
    return *newBureaucrat;
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::decrementGrade() {
    setGrade(++_grade);
}


void Bureaucrat::incrementGrade() {
    setGrade(--_grade);
}



Bureaucrat::GradeTooHighException::GradeTooHighException() : std::runtime_error("Grade too high") {}
Bureaucrat::GradeTooLowException::GradeTooLowException() : std::runtime_error("Grade too low") {}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src) {
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return o;
}