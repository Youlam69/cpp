#pragma once
#include <exception>
#include <string>
#include <iostream>

class Bureaucrat;
class AForm
{

    private:
        std::string const _name;
        bool _signed;
        int const _gradeSign;
        int const _gradeExec;
    public:
        AForm();
        ~AForm();
        AForm(std::string name, int gradeSign, int gradeExec);
        AForm(AForm const & src);
        AForm & operator=(AForm const & rhs);
        std::string getName() const;
        bool getSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;

        void beSigned(Bureaucrat & b);
        void setSigned(bool b);

		virtual void execute(Bureaucrat const & executor) const = 0;	

        class GradeTooHighException : public std::runtime_error
        {
            public:
                GradeTooHighException();
        };
        class GradeTooLowException : public std::runtime_error
        {
            public:
                GradeTooLowException();
        };
};

std::ostream & operator<<(std::ostream & o, AForm const & src);
