#ifndef _Intern_HPP_
#define _Intern_HPP_

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include <fstream>

#include <iostream>
class AForm;
class Bureaucrat;

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Intern
{
	public	:
		Intern ();
		Intern (Intern const &obj);
		~Intern ();
		Intern &operator= (const Intern &obj);

        AForm   *makeForm(std::string formName, std::string target);
        		// void	execute(Bureaucrat const & executor) const;	

	private	:
		
		
};

#endif