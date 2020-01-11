#include <iostream>
#include "bookType.h"
int main (){
	bookType obj[2];

	obj[0].title = "test";
	obj[1].title = "test";
	obj[0].checkTitle(obj[1]);
	return (0);
}
