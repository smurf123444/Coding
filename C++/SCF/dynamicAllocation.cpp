#include <iostream>
//dynamic memory allocation
int calcAverage(int sum, int size)
{
	int answer = 0;
	answer = sum / size;
	return (answer);
}
int main() {
	//Declare variables
	int size, i = 0, gradeSum = 0;
	int answer = 0;
	//ask for amount of students
	std::cout << "Enter the amount of students to grade." << std::endl;
	std::cin >> size;
	//declare dynamic ptr
	int *iptr = nullptr;
	//make it the amount of input.
	iptr = new int[size];
	while (i < size) {
		//Enter the # for grade
		std::cout << "Enter the grade #" << i << ": " << std::endl;
		std::cin >> iptr[i];
		//Grade sum = grade + it self
		gradeSum = gradeSum + iptr[i++];
		//get answer of calcAverage
		answer = calcAverage(gradeSum, size);
		//Display answer
		std::cout << "Average of the " << size << " Scores : " << answer << std::endl;
	}

	delete [] iptr;
	return (0);
}
