
#include <iostream>
#include "bookType.h"
BookType setInfo(BookType obj) {
	BookType input;
	string titleInput;
	string authorInput;
	int i = 0;
	int t = 0;
	cout << "Set Title" << endl;
	cin >> titleInput;
	obj.setTitle(titleInput);
	cout << "Set Author(s) " << endl;
	while (i < 4)
	{
		cout << "Type in one to four Authors Names then press [Enter]" << endl << "(type [0] or leave blank if none exist)" << endl;
		cin >> authorInput;
		obj.setAuthor(authorInput, i);
		if (authorInput == "" || authorInput == "0")
		{
			authorInput = "";
			i = 4;
		}
		i++;
		t++;
	}
	obj.authorCount = t;
	return(obj);
}
int main() {
	BookType obj[10];
	bool quit = false;
	int selection;
		cout << ">>>>>>>>>>>>>>>>>>>>>>>" << endl;
		cout << "Welcome to Assignment 1 for CPP 2 SCF!" << endl;
		while (!quit) {
			cout << "Select one of the following options" << endl;
			cout << "1. Enter Book Information" << endl;
			cout << "2. Update Book Information" << endl;
			cout << "3. Search Title" << endl;
			cout << "4. Search ISBN" << endl;
			cout << "5. Exit" << endl;
			cout << endl;
			cout << "Type Here then press [Enter]: ";
			cin >> selection;
			switch (selection) {
			case 1: obj[0] = setInfo(obj[0]);
				break;
			default: break;
			};
			cout << "Title : " << obj[0].getTitle() << endl;
			cout << "Author : ";
			obj[0].getAuthor();
			cout << endl;
	}
	return (0);
}