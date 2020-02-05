#include <iostream>
#include "rectangleType.h"
#include <string>
#include <sstream>
int main()
{
	rectangleType obj[4];

	int i = 0;
	int length = 0, width = 0;
	std::string lengthString = "", widthString = "";
	while (i < 2)
	{
		std::cout << std::endl;
		std::cout << "Set the Length for Object with length and width parameters " << ++i << std::endl;
		i--;
		std::cout << "Length : " << std::endl;
		std::getline(std::cin, lengthString);
		std::stringstream(lengthString) >> length;
		std::cout << "Width : " << std::endl;
		std::getline(std::cin, widthString);
		std::stringstream(widthString) >> width;
		obj[i++].setDimension(length, width);
	}
	while (i < 4)
	{
		std::cout << std::endl;
		std::cout << "Set the rectangle objects with default constructor" << std::endl;
		obj[i++].rectangleType::rectangleType();
	}

	obj[0].operator+(obj[2]);
	obj[1].operator+(obj[2]);


	return (0);

}