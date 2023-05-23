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
		Fixed(const int value);
		Fixed(const float value);
		~Fixed ();
		Fixed &operator= (const Fixed &obj);
 		
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );


	private	:
		int value;
		static const int fractional_bits = 8;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
