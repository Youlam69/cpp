#ifndef _Fixed_HPP_
#define _Fixed_HPP_

#include <iostream>
#include <cmath>


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
 		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;

		void setRawBits( int const raw );

		Fixed(const int value);
		Fixed(const float value);

	private	:
		int value;
		static const int fractional_bits = 8;

		//	DataType	attributes.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif
