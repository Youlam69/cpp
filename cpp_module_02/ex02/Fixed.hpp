# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
// # include <cmath>
# include <stdbool.h>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class Fixed 
{
    public:

        Fixed();
        Fixed(const Fixed& obj);
        Fixed(const int _value);
        Fixed(const float _value);
        ~Fixed();

        int     getvalue(void) const;
        int		getRawBits(void) const;
        void	setRawBits(int const raw);
        float	toFloat(void) const;
        int		toInt(void) const;

        // assgin op overload: =
        Fixed&	operator=(const Fixed& other);
    
        // comparison operators: >, <, >=, <=, ==, !=
        bool	operator>(const Fixed& other)  const;
        bool	operator<(const Fixed& other)  const;
        bool	operator>=(const Fixed& other) const;
        bool	operator<=(const Fixed& other) const;
        bool	operator==(const Fixed& other) const;
        bool	operator!=(const Fixed& other) const;
        
        
        // arithmetic operators: +, -, *, /
        Fixed   operator+(const Fixed& obj2);
        Fixed   operator-(const Fixed& obj2);
        Fixed   operator*(const Fixed& obj2);
        Fixed   operator/(const Fixed& obj2);


        // increment/decrement operators
        Fixed   operator++(int);
        Fixed   operator++();
        Fixed   operator--(int);
        Fixed   operator--(); 

        // (min/max) operators
        static Fixed& min(Fixed& obj1, Fixed& obj2);
        static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
        static Fixed& max(Fixed& obj1, Fixed& obj2);
        static const Fixed& max(const Fixed& obj1, const Fixed& obj2);

    private:
        int value;
        static const int fractionalBits = 8;

};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

# endif
