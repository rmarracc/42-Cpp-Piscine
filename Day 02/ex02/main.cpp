#include "Fixed.class.hpp"
#include <iostream>
int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed c(-50);
Fixed d;
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;
std::cout << c << std::endl;
std::cout << c + b << std::endl;
std::cout << a - b << std::endl;
std::cout << b / a << std::endl;
std::cout << a * b * c << std::endl;
std::cout << (int)(a == b) << std::endl;
std::cout << (int)(a != b) << std::endl;
std::cout << (int)(a >= b) << std::endl;
std::cout << (int)(a <= b) << std::endl;
std::cout << (int)(a > b) << std::endl;
std::cout << (int)(a < b) << std::endl;
std::cout << d << std::endl;
std::cout << --d << std::endl;
std::cout << d << std::endl;
std::cout << d-- << std::endl;
std::cout << d << std::endl;
return 0;
}
