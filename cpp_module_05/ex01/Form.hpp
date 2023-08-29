#pragma once
#include "Bureaucrat.hpp"

class Form
{

    private:
        std::string const _name;
        bool _signed;
        int const _gradeSign;
        int const _gradeExec;
    public:
        Form();
        ~Form();
        Form(std::string name, int gradeSign, int gradeExec);
        Form(Form const & src);
        Form & operator=(Form const & rhs);
        std::string getName() const;
        bool getSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;

        void beSigned(Bureaucrat & b);
        void setSigned(bool b);

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

std::ostream & operator<<(std::ostream & o, Form const & src);
