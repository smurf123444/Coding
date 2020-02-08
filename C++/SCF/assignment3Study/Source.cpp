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
	i = 0;
	while (i < 2)
	{
		std::cout << std::endl;
		std::cout << "Length of Rectangle # " << ++i <<std::endl;
		i--;
		std::cout << obj[i].getLength() << std::endl;
		std::cout << std::endl;
		std::cout << "Width of Rectangle # " << ++i << std::endl;
		i--;
		std::cout << obj[i++].getWidth() << std::endl;
	}
	obj[0]++;
	std::cout << std::endl;
	std::cout << "Increment of Length of Rectangle # " << 1 << std::endl;
	std::cout << obj[0].getLength() << std::endl;
	std::cout << std::endl;
	std::cout << "Increment of Width of Rectangle # " << 1 << std::endl;
	std::cout << obj[0].getWidth() << std::endl;
	obj[1]--;
	std::cout << std::endl;
	std::cout << "Decrement of Length of Rectangle # " << 2 << std::endl;
	std::cout << obj[1].getLength() << std::endl;
	std::cout << std::endl;
	std::cout << "Decrement of Width of Rectangle # " << 2 << std::endl;
	std::cout << obj[1].getWidth() << std::endl;
	obj[0] = obj[0] - obj[1];
	std::cout << std::endl;
	std::cout << "Subtraction of Length of Rectangle # 1 & " << 2 << std::endl;
	std::cout << obj[0].getLength() << std::endl;
	std::cout << std::endl;
	std::cout << "Subtraction of Width of Rectangle # 1 & " << 2 << std::endl;
	std::cout << obj[0].getWidth() << std::endl;
	if (obj[0] != obj[1])
	{
		std::cout << "Rectangles do not equal." << std::endl;
	}
	if (obj[0] < obj[1])
	{
		std::cout << "Rectangle 1 is less then recctangle 2" << std::endl;
	}
	else
	{
		std::cout << "Rectangle 2 is less then recctangle 1" << std::endl;
	}
	/*
	std::cout << "Before : " << std::endl;
	std::cout << obj[0].getLength() << std::endl;
	std::cout << obj[0].getWidth() << std::endl;
	++obj[0];
	std::cout << "After : " << std::endl;
	std::cout << obj[0].getLength() << std::endl;
	std::cout << obj[0].getWidth() << std::endl;
	std::cout << "Before : " << std::endl;
	std::cout << obj[0].getLength() << std::endl;
	std::cout << obj[0].getWidth() << std::endl;
	--obj[0];
	std::cout << "After : " << std::endl;
	std::cout << obj[0].getLength() << std::endl;
	std::cout << obj[0].getWidth() << std::endl;
	std::cout << "Before : " << std::endl;
	std::cout << obj[0].getLength() << std::endl;
	std::cout << obj[0].getWidth() << std::endl;
	obj[0] = obj[0] - obj[0];
	std::cout << "After : " << std::endl;
	std::cout << obj[0].getLength() << std::endl;
	std::cout << obj[0].getWidth() << std::endl;
	if (obj[0] < obj[1])
	{
		std::cout << "Worked!" << std::endl;
	}
	//obj[1].operator+(obj[2]);
	*/

	return (0);

}