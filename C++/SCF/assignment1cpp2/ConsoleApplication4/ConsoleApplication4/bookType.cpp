#include <iostream>
#include "bookType.h"
BookType setInfo(BookType obj) {
	BookType input;
	string titleInput;
	string authorInput;
	string publisherInput;
	string ISBNinput;
	//Fix this for input breaking (double to string convesion)
	double priceInput;
	int stockInput;
	int i = 0;
	int t = 0;
	cout << "Set Title" << endl;
	cin >> titleInput;
	obj.setTitle(titleInput);
	cout << "Set Author(s) " << endl;
	while (i < 4)
	{
		cout << "Type in one to four Authors Names then press [Enter]" << endl << "(type [0] to skip)" << endl;
		cin.ignore();
		 getline(cin,authorInput);
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
	cout << "Set Publisher : " << endl;
	getline(cin, publisherInput);
	obj.setPublisher(publisherInput);
	cout << "Set ISBN # : " << endl;
	getline(cin, ISBNinput);
	obj.setISBN(ISBNinput);
	cout << "Set Price : " << endl;
	getline(cin, priceInput);
	obj.setPrice(priceInput);
	cout << "Set Stock : " << endl;
	//set up stringstream for an int...
	getline(cin, stockInput);
	obj.setStock(stockInput);

	return(obj);
}
BookType updateInfo(BookType obj) {
	BookType input;
	string titleInput;
	string authorInput;
	string publisherInput;
	string ISBNinput;
	double priceInput;
	int stockInput;
	int inputString;
	int i = 0;
	int t = 0;
	cout << "1. Update Title" << endl;
	cout << "2. Update Author(s)" << endl;
	cout << "3. Update Publisher" << endl;
	cout << "4. Update ISBN" << endl;
	cout << "5. Update Price" << endl;
	cout << "6. Update Stock" << endl;
	cout << "Type Here the press [Enter]";
	cin >> inputString;
	switch (inputString)
	{
	case 1: cout << "Update Title" << endl;
		cin >> titleInput;
		obj.setTitle(titleInput);
		break;
	case 2: 	cout << "Update Author(s) " << endl;
		while (i < 4)
		{
			cout << "Type in one to four Authors Names then press [Enter]" << endl << "(type [0] to skip)" << endl;
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
		break;
	case 3: cout << "Update Publisher : " << endl;
		cin >> publisherInput;
		obj.updatePublisher(publisherInput);
		break;
	case 4: cout << "Update ISBN # : " << endl;
		cin >> ISBNinput;
		obj.updateISBN(ISBNinput);
		break;
	case 5: cout << "Update Price : " << endl;
		cin >> priceInput;
		obj.updatePrice(priceInput);
		break;
	case 6: cout << "Update Stock : " << endl;
		cin >> stockInput;
		obj.updateStock(stockInput);
		break;
	}

	return(obj);

}
/*		cout << "Set Author(s) " << endl;

		while (i < 4)
		{
			cout << "Type in one to four Authors Names then press [Enter]" << endl << "(type [0] to skip)" << endl;
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
		cout << "Set Publisher : ";
		cin >> publisherInput;
		if (publisherInput == "0")
		{
			cout << "Set ISBN # : ";
			cin >> ISBNinput;
			if (ISBNinput == "0")
			{
				cout << "Set Price : ";
				cin >> priceInput;
				if (priceInput == 0)
				{
					cout << "Set Stock : ";
					cin >> stockInput;
					if (stockInput == 0)
					{
						return(obj);
					}
					else
						obj.updateStock(stockInput);
				}
				else
					obj.updatePrice(priceInput);
			}
			else
				obj.updateISBN(ISBNinput);

		}
		else
			obj.updatePublisher(publisherInput);
	}
/*	cout << "Set Publisher : ";
	cin >> publisherInput;
	if (publisherInput == "0")
	{
		cout << "Set ISBN # : ";
		cin >> ISBNinput;
		if (ISBNinput == "0")
		{
			cout << "Set Price : ";
			cin >> priceInput;
			if (priceInput == 0)
			{
				cout << "Set Stock : ";
				cin >> stockInput;
				if (stockInput == 0)
				{
					return(obj);
				}
				else
				obj.updateStock(stockInput);
			}
			else
			obj.updatePrice(priceInput);
		}
		else
		obj.updateISBN(ISBNinput);

	}
	else
	obj.updatePublisher(publisherInput);
/*	cout << "Set ISBN # : ";
	cin >> ISBNinput;
	obj.updateISBN(ISBNinput);
	cout << "Set Price : ";
	cin >> priceInput;
	obj.updatePrice(priceInput);
	cout << "Set Stock : ";
	cin >> stockInput;
	obj.updateStock(stockInput);*/
void searchTitle(string search, BookType obj) {
	obj.checkTitle(search);
}
void searchISBN(string search, BookType obj) {
	obj.checkISBN(search);
}
void searchPublisher(string search, BookType obj) {
	obj.checkPublisher(search);
}
int main() {
	BookType obj[10];
	bool quit = false;
	int selection;
	int bookChoice;
	string titleSearch;
	string ISBNSearch;
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
		int bookCount = 0;
		string leave;
		switch (selection) {
		case 1:
			while (bookCount < 10) {
				cout << "Enter 0 to Continue Adding to the list of Books, or 1 for End of List" << endl;
				cin >> leave;
				if (leave == "1")
				{
					break;
				}
				else {
					obj[i] = setInfo(obj[bookCount]);
				}
				bookCount++;
			}
			break;
		case 2: cout << "Which Book would you like to update? 1-10" << endl;
			cin >> bookChoice;
			obj[bookChoice - 1] = updateInfo(obj[bookChoice - 1]);
			break;
		case 3:
			cout << "Which Title are you searching for?" << endl;
			cin >> titleSearch;
			while (i < 10) {
				searchTitle(titleSearch, obj[i++]);
			}
			i = 0;
			break;
		case 4:
			cout << "Which ISBN are you searching for?" << endl;
			cin >> ISBNSearch;
			while (i < 10) {
				searchISBN(ISBNSearch, obj[i++]);
			}
			break;
		case 5:
			cout << "Exiting.." << endl;
			quit = true;
			break;
		default: break;
		};
		i = 0;
		int fun = 1;
		while (i < bookCount) {
			cout << "Book # : " << fun++ << endl;
			cout << "-----------------------" << endl;
			cout << "Title : " << obj[i].getTitle() << endl;
			cout << "Author : ";
			obj[i].getAuthor();
			cout << endl;
			cout << "Publisher : ";
			cout << obj[i].getPublisher();
			cout << endl;
			cout << "ISBN # : ";
			cout << obj[i].getISBN();
			cout << endl;
			cout << "Price : ";
			cout << obj[i].getPrice();
			cout << endl;
			cout << "Stock : ";
			cout << obj[i++].getStock();
			cout << endl;
			cout << "-----------------------" << endl;
		}
	}
	return (0);
}
