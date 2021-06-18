#include "Whatever.hpp"

int main( void ) {

	std::cout << std::endl;
	int a = 2;
	int b = 3;

	std::cout << "\ta = " << a << ", b = " << b << std::endl;
	swap( a, b );
	std::cout << "swap( a, b ) : " << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

// ------------------------------------

	std::cout << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "\tc = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << "swap( c, d ) : " << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	// ------------------------------------

	std::cout << std::endl;
	Awesome e(15);
	Awesome f(42);

	std::cout << "\te = " << e << ", f = " << f << std::endl;
	swap(e, f);
	std::cout << "swap( e, f ) : " << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	
	return 0;
}