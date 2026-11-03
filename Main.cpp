#include <iostream>
#include "Gameboard.h"
#include "Point.h"
#include "TestSuite.h"

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

	Point validPoint{};
	Point invalidPoint{ -1, 2 };
	g.getContent(validPoint);
	//g.getContent(invalidPoint);

	g.fillRow(0, 3);
	g.setContent(validPoint, 1);
	g.setContent(1, 1, 2);
	g.printToConsole();

	std::cout << g.getContent(validPoint) << '\n'; // 1
	std::cout << g.getContent(2, 0) << '\n'; // 3
	std::cout << g.getContent(1, 1) << '\n'; // 2
	std::cout << g.isRowCompleted(0) << '\n'; // 1
	std::cout << g.isRowCompleted(1) << '\n'; // 0
	
	g.fillRow(2, 2);
	g.printToConsole();
	g.copyRowIntoRow(2, 1);
	g.printToConsole();
	
	g.removeRow(1);
	g.printToConsole();
	
	g.removeRow(9);
	g.printToConsole();

	g.fillRow(0, 1);
	g.fillRow(4, 1);
	
	g.printToConsole();

	std::vector<int> arr{ 3, 2 }; // should get sorted and remove rows 2 & 3
	g.removeRows(arr);

	g.printToConsole();

	for (const auto& element : arr)
	{
		std::cout << element << ' ';
	}
	std::cout << '\n';

	std::vector<int> completedRows{ g.getCompletedRowIndices()};

	for (const auto& element : completedRows)
	{
		std::cout << element << ' ';
	}
	std::cout << '\n';

	g.printToConsole();

	int x{ g.removeCompletedRows() };
	g.printToConsole();
	std::cout << x << '\n';

	std::vector<Point> locs{ Point(0,0), Point(0,1) };
	std::cout << g.areAllLocsEmpty(locs) << '\n';
	
	g.fillRow(0, 1);
	//g.printToConsole();
	std::cout << g.areAllLocsEmpty(locs) << '\n';

	TestSuite::runTestSuite();

	return 0;
}