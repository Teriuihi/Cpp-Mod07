#include <iostream>
#include "whatever.hpp"

int main()
{
	std::cout << "\t--- My tests ---" << std::endl;
	int a = 1;
	int b = 2;
	std::cout << a << b << std::endl;
	swap<int>(a, b);
	std::cout << a << b << std::endl;
	std::cout << (a < b ? a : b) << min(a, b) << std::endl;
	std::cout << (a > b ? a : b) << max(a, b) << std::endl;
	std::cout << "\n\t--- Provided tests ---" << std::endl;
	//Provided main
	a = 2;
	b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}