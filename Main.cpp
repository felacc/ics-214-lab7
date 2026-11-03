#include <iostream>
#include "Gameboard.h"

int main()
{
	Gameboard g{};
	g.printToConsole();
	std::cout << "(1,2) = true: " << g.isValidPoint(1, 2) << '\n';
	std::cout << "(10,19) = true: " << g.isValidPoint(10, 19) << '\n';
	std::cout << "(0,0) = true: " << g.isValidPoint(0, 0) << '\n';
	std::cout << "(-1,2) = false: " << g.isValidPoint(-1, 2) << '\n';
	std::cout << "(1,-2) = false: " << g.isValidPoint(1, -2) << '\n';
	std::cout << "(11,2) = false: " << g.isValidPoint(11, 2) << '\n';
	std::cout << "(1,20) = false: " << g.isValidPoint(1, 20) << '\n';
	
	return 0;
}