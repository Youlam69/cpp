#pragma once
#include <string>
#include <iostream>
#include <exception>

class AForm;

class Bureaucrat
{ 
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        void setGrade(int grade);
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const & src);

        Bureaucrat& operator=(Bureaucrat const & src);

        std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();
        void signAForm(AForm & f);

        class GradeTooHighException : public std::runtime_error {
                public:
                    GradeTooHighException();
        };
        class GradeTooLowException : public std::runtime_error {
                public:
                    GradeTooLowException();
        };
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);