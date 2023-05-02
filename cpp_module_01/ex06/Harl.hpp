#ifndef _Harl_HPP_
#define _Harl_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Harl
{
	private	:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public	:
		void complain( std::string level );

		//	DataType	attributes.
};


#endif
