#include <iostream>
#include "listType.h"
int main() {
	double i = 0, l = 0;
	listType<double> A;
	listType<char> B;

	A.insertAt(5.2, 0);
	A.insertAt(6.3, 1);
	A.insertAt(7.5, 2);
	A.insertAt(8.1, 3);
	A.insertAt(9.9, 4);
	A.print();
	system("pause");
	return (0);

}