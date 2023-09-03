
#ifndef _PresidentialPardonForm_HPP_
#define _PresidentialPardonForm_HPP_
#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include <fstream>

#include <iostream>
class AForm;

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	PresidentialPardonForm : public AForm
{
	public	:
		PresidentialPardonForm ();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm (PresidentialPardonForm const &obj);
		~PresidentialPardonForm ();
		PresidentialPardonForm &operator= (const PresidentialPardonForm &obj);

		void	execute(Bureaucrat const & executor) const;	
	private	:
		std::string _target;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
