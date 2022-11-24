#include "Whatever.hpp"

int main( void )
{
	int a = 1;
	int b = 5;

	std::cout << "-----------INT----------" << std::endl;
	::swap<int>( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << min<int>( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << max<int>( a, b ) << std::endl;

	std::cout << std::endl << "-----------STRING----------" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap<std::string &>(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min<std::string &>( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max<std::string &>( c, d ) << std::endl;

	std::cout << std::endl << "-----------CHAR----------" << std::endl;
	char e = 'a';
	char f = 'z';

	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( a, z ) = " << ::min<char>(e, f) << std::endl;
	std::cout << "max( a, z ) = " << ::max<char>(e, f) << std::endl;
    return 0;
}
