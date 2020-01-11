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
void searchTitle(string search, BookType obj) {
	obj.checkTitle(search);
}
int main() {
	BookType obj[10];
	bool quit = false;
	int selection;
	int bookChoice;
	string titleSearch;
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
			int i = 0;
			string leave;
			switch (selection) {
			case 1: 
				while (i < 10) {
					cout << "Enter 0 to Continue Adding to the list of Books, or 1 for End of List" << endl;
					cin >> leave;
					if (leave == "1")
					{
						i = 10;
					}
					else {
						obj[i] = setInfo(obj[i]);
					}
					i++;
				}
				break;
			case 2: cout << "Which Book would you like to update? 1-10" << endl;
				cin >> bookChoice;
				obj[bookChoice - 1] = setInfo(obj[bookChoice - 1]);
				break;
			case 3: cout << "Which Title are you searching for?" << endl;
				cin >> titleSearch;
				while (i < 10) {
					searchTitle(titleSearch, obj[i++]);
				}
				break;
			case 4:

				break;
			case 5:
				cout << "Exiting.." << endl;
				quit = true;
				break;
			default: break;
			};
			i = 0;
			int fun = 1;
			while (i < 10) {
				cout << "# " << fun++ << endl;
				cout << "Title : " << obj[i].getTitle() << endl;
				cout << "Author : ";
				obj[i++].getAuthor();
				cout << endl;
			}
	}
	return (0);
}
