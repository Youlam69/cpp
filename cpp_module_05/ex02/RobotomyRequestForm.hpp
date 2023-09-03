#ifndef _RobotomyRequestForm_HPP_
#define _RobotomyRequestForm_HPP_
// #include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include <fstream>

#include <iostream>
class AForm;
class Bureaucrat;

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	RobotomyRequestForm : public AForm
{
	public	:
		RobotomyRequestForm ();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm (RobotomyRequestForm const &obj);
		~RobotomyRequestForm ();
		RobotomyRequestForm &operator= (const RobotomyRequestForm &obj);
		void	execute(Bureaucrat const & executor) const;	

	private	:
		std::string _target;
		
		
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
