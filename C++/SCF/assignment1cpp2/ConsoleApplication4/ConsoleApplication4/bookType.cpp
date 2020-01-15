#include <iostream>
#include "bookType.h"
using namespace std;
BookType setInfo(BookType obj) {
	BookType input;
	string titleInput;
	string authorInput;
	string publisherInput;
	string ISBNinput;
	//Fix this for input breaking (double to string convesion)
	double priceInput;
	string priceString;
	string stockString;
	int stockInput;
	int i = 0;
	int t = 0;
	std::cout << "Set Title" << std::endl;
	std::getline(cin, titleInput);
	obj.setTitle(titleInput);
	std::cout << "Set Author(s) " << std::endl;
	while (i < 4)
	{
		std::cout << "Type in one to four Authors Names then press [Enter]" << std::endl << "(type [0] to skip)" << std::endl;
		std::getline(cin, authorInput);
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
	std::cout << "Set Publisher : " << std::endl;
	std::getline(cin, publisherInput);
	obj.setPublisher(publisherInput);
	std::cout << "Set ISBN # : " << std::endl;
	std::getline(cin, ISBNinput);
	obj.setISBN(ISBNinput);
	std::cout << "Set Price : " << std::endl;
	std::getline(cin, priceString);
	stringstream(priceString) >> priceInput;
	obj.setPrice(priceInput);
	std::cout << "Set Stock : " << std::endl;

	//set up stringstream for an int...
	std::getline(cin, stockString);
	stringstream(stockString) >> stockInput;
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
	string priceString;
	string stockString;
	int stockInput;
	int inputInt;
	string inputString;
	int i = 0;
	int t = 0;
	std::cout << "1. Update Title" << std::endl;
	std::cout << "2. Update Author(s)" << std::endl;
	std::cout << "3. Update Publisher" << std::endl;
	std::cout << "4. Update ISBN" << std::endl;
	std::cout << "5. Update Price" << std::endl;
	std::cout << "6. Update Stock" << std::endl;
	std::cout << "Type Here the press [Enter]" << std::endl;
	std::getline(cin, inputString);
	stringstream(inputString) >> inputInt;
	switch (inputInt)
	{
	case 1: std::cout << "Update Title" << std::endl;
		std::getline(cin, titleInput);
		obj.setTitle(titleInput);
		break;
	case 2: 	std::cout << "Update Author(s) " << std::endl;
		while (i < 4)
		{
			std::cout << std::endl;
			std::cout << "Type in one to four Authors Names then press [Enter]" << std::endl << "(type [0] to skip)" << std::endl;
			std::getline(cin, authorInput);
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
	case 3: std::cout << "Update Publisher : " << std::endl;
		std::getline(cin, publisherInput);
		obj.updatePublisher(publisherInput);
		break;
	case 4: std::cout << "Update ISBN # : " << std::endl;
		std::getline(cin, ISBNinput);
		obj.updateISBN(ISBNinput);
		break;
	case 5: std::cout << "Update Price : " << std::endl;
		std::getline(cin, priceString);
		stringstream(priceString) >> priceInput;
		obj.updatePrice(priceInput);
		break;
	case 6: std::cout << "Update Stock : " << std::endl;
		std::getline(cin, stockString);
		stringstream(stockString) >> stockInput;
		obj.updateStock(stockInput);
		break;
	default: break;
	}

	return(obj);

}
/*		std::cout << "Set Author(s) " << std::endl;

		while (i < 4)
		{
			std::cout << "Type in one to four Authors Names then press [Enter]" << std::endl << "(type [0] to skip)" << std::endl;
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
		std::cout << "Set Publisher : ";
		cin >> publisherInput;
		if (publisherInput == "0")
		{
			std::cout << "Set ISBN # : ";
			cin >> ISBNinput;
			if (ISBNinput == "0")
			{
				std::cout << "Set Price : ";
				cin >> priceInput;
				if (priceInput == 0)
				{
					std::cout << "Set Stock : ";
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
/*	std::cout << "Set Publisher : ";
	cin >> publisherInput;
	if (publisherInput == "0")
	{
		std::cout << "Set ISBN # : ";
		cin >> ISBNinput;
		if (ISBNinput == "0")
		{
			std::cout << "Set Price : ";
			cin >> priceInput;
			if (priceInput == 0)
			{
				std::cout << "Set Stock : ";
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
/*	std::cout << "Set ISBN # : ";
	cin >> ISBNinput;
	obj.updateISBN(ISBNinput);
	std::cout << "Set Price : ";
	cin >> priceInput;
	obj.updatePrice(priceInput);
	std::cout << "Set Stock : ";
	cin >> stockInput;
	obj.updateStock(stockInput);*/
bool searchTitle(string search, BookType obj) {
	if (obj.checkTitle(search) == true)
	{
		return (true);
	}
	else
	{
		return (false);
	}

}
bool searchISBN(string search, BookType obj) {
	if (obj.checkISBN(search) == true) {
		return (true);
	}
	else
	{
		return (false);
	}


}

int main() {
	BookType obj[10];
	bool quit = false;
	int selection;
	string selectionString;
	int bookChoice;
	string bookChoiceString;
	string titleSearch;
	string ISBNSearch;
	int bookCount = 0;
	int i = 0, q = 0, fun = 1;
	std::cout << ">>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "Welcome to Assignment 1 for CPP 2 SCF!" << std::endl;
	while (!quit) {
		std::cout << "Select one of the following options" << std::endl;
		std::cout << "1. Enter Book Information" << std::endl;
		std::cout << "2. Update Book Information" << std::endl;
		std::cout << "3. Search Title" << std::endl;
		std::cout << "4. Search ISBN" << std::endl;
		std::cout << "5. Exit" << std::endl;
		std::cout << std::endl;
		if (obj[0].title.empty())
		{
			std::cout << "NO BOOKS HAVE BEEN ADDED YET." << std::endl;
		}
		std::cout << std::endl;
		std::cout << "Type Here then press [Enter]: ";
		std::cout << std::endl;
		std::getline(cin, selectionString);
		stringstream(selectionString) >> selection;


		string leave = "";
		bool found = false;
		switch (selection) {
		case 1:
			while (bookCount < 10) {
				fun = bookCount;
				if (leave == "1")
				{
					break;
				}

				else {
					std::cout << std::endl;
					std::cout << " BOOK #" << ++fun << std::endl;
					std::cout << std::endl;
					obj[bookCount] = setInfo(obj[bookCount]);
				}
				std::cout << "Type Anything to Continue Adding to the list of Books, or 1 to save & return to Menu" << std::endl;
				std::cout << " Then click [Enter]" << std::endl;
				std::getline(cin, leave);
				bookCount++;
			}
			break;
		case 2: std::cout << "Which Book would you like to update? 1-10" << std::endl;
			std::getline(cin, bookChoiceString);
			stringstream(bookChoiceString) >> bookChoice;
			if (bookChoice <= bookCount) {
				obj[bookChoice - 1] = updateInfo(obj[bookChoice - 1]);
			}
			else {
				std::cout << std::endl;
				std::cout << "Book " << bookChoiceString << " does not exist yet. Try it in first..." << std::endl;
				std::cout << "-----------------------" << std::endl;
			}
			while (i < bookCount) {
				std::cout << "Book # : " << fun++ << std::endl;
				std::cout << "-----------------------" << std::endl;
				std::cout << "Title : " << obj[i].getTitle() << std::endl;
				std::cout << "Author : ";
				obj[i].getAuthor();
				std::cout << std::endl;
				std::cout << "Publisher : ";
				std::cout << obj[i].getPublisher();
				std::cout << std::endl;
				std::cout << "ISBN # : ";
				std::cout << obj[i].getISBN();
				std::cout << std::endl;
				std::cout << "Price : ";
				std::cout << obj[i].getPrice();
				std::cout << std::endl;
				std::cout << "Stock : ";
				std::cout << obj[i++].getStock();
				std::cout << std::endl;
				std::cout << "-----------------------" << std::endl;
			}
			i = 0, fun = 1;
			break;
		case 3:
			std::cout << "Which Title are you searching for?" << std::endl;
			std::getline(cin, titleSearch);

			while (i < 10) {
				if (searchTitle(titleSearch, obj[i++]) == true)
				{
					found = true;
					q = i;
				}
			}
			if (found == true)
			{
				std::cout << std::endl;
				std::cout << "Found at book " << q << std::endl;
				std::cout << std::endl;
			}
			i = 0;
			break;
		case 4:
			std::cout << "Which ISBN are you searching for?" << std::endl;
			std::getline(cin, ISBNSearch);
			while (i < 10) {
				if (searchISBN(ISBNSearch, obj[i++]) == true)
				{
					found = true;
					q = i;
				}
			}
			if (found == true)
			{
				std::cout << std::endl;
				std::cout << "Found at book " << q << std::endl;
				std::cout << std::endl;
			}
			i = 0;
			break;
		case 5:
			std::cout << "Exiting.." << std::endl;
			quit = true;
			break;
		default: break;
		};

	}
	i = 0;
	fun = 1;
	while (i < bookCount) {
		std::cout << "Book # : " << fun++ << std::endl;
		std::cout << "-----------------------" << std::endl;
		std::cout << "Title : " << obj[i].getTitle() << std::endl;
		std::cout << "Author : ";
		obj[i].getAuthor();
		std::cout << std::endl;
		std::cout << "Publisher : ";
		std::cout << obj[i].getPublisher();
		std::cout << std::endl;
		std::cout << "ISBN # : ";
		std::cout << obj[i].getISBN();
		std::cout << std::endl;
		std::cout << "Price : ";
		std::cout << obj[i].getPrice();
		std::cout << std::endl;
		std::cout << "Stock : ";
		std::cout << obj[i++].getStock();
		std::cout << std::endl;
		std::cout << "-----------------------" << std::endl;
	}
	return (0);
}
