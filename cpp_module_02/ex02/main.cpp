
#include "Fixed.hpp"

int main( void ) {


Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

    // Fixed c;
    a = Fixed(3.14f);
    // Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));
    // a(Fixed(3.14f));
    // b.(Fixed( 5.05f ) * Fixed( 2 ));
    std::cout << a.getvalue() << std::endl;
    std::cout << "b        = " << b << std::endl;
    std::cout << "a        = " << a << std::endl;
    
    // std::cout << "a++      " << ++a   << std::endl;
    // std::cout << "getvalue " << a.getvalue() << std::endl;
    std::cout << "a + b    = " << a + b   << std::endl;
    std::cout << "a * b    = " << a * b   << std::endl;
    std::cout << "a - b    = " << a - b   << std::endl;
    std::cout << "a / b    = " << a / b   << std::endl;
    std::cout << "(a > b)    " << (a > b) << std::endl;
    std::cout << "(a < b)    " << (a < b) << std::endl;
    std::cout << "(a <= b)   " << (a <= b)<< std::endl;
    std::cout << "(a >= b)   " << (a >= b)<< std::endl;
    std::cout << "(a != b)   " << (a != b)<< std::endl;
    std::cout << "(a == b)   " << (a == b)<< std::endl;
    std::cout << "min(a, b)  " << Fixed::min(a, b) << std::endl;
    std::cout << "min(a, b)  " << Fixed::max(a, b) << std::endl;

    return 0;
}
