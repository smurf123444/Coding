#include <iostream>
#include "linkedList.h"
#include "orderedLinkedList.h"
#include <string>
#include <sstream>
int main()
{
	orderedLinkedList<int> obj;
	obj.insert(3);
	obj.insert(4);
	obj.insert(1);
	obj.findKthElement(2);
	obj.deleteKthElement(2);
	obj.findKthElement(2);

	return (0);

}