#ifndef _ShrubberyCreationForm_HPP_
#define _ShrubberyCreationForm_HPP_

#include <fstream>

#include <iostream>
class AForm;

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ShrubberyCreationForm : public AForm
{
	public	:
		ShrubberyCreationForm ();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm (ShrubberyCreationForm const &obj);
		~ShrubberyCreationForm ();
		ShrubberyCreationForm &operator= (const ShrubberyCreationForm &obj);
		
		void	execute(Bureaucrat const & executor) const;	

	private	:
		std::string _target;
		
		
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
