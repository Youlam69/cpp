#ifndef _Fixed_HPP_
#define _Fixed_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Fixed
{
	public	:
		Fixed ();
		Fixed (Fixed const &obj);
		~Fixed ();
		Fixed &operator= (const Fixed &obj);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private	:
		int value;
		static const int fractional_bits = 8;

		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
