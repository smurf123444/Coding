#include <iostream>
#include <sstream>
#include <string>
/*

Each object of the class bookType can hold the following
information about a book: title, up to four authors, publisher,
ISBN, price, and number of copies in stock. To keep track of the
number of authors, add another member variable.

*/
/*
Include the member functions to perform the various operations on
objects of type bookType. For example, the usual operations that
can be performed on the title are to show the title, set the title, and
check whether a title iAs the same as the actual title of the book.
Similarly, the typical operations that can be performed on the
number of copies in stock are to show the number of copies in
stock, set the number of copies in stock, update the number of
copies in stock, and return the number of copies in stock. Add
similar operations for the publisher, ISBN, book price, and authors.
Add the appropriate constructors and a destructor (if one is needed).
*/
using namespace std;
class BookType {
private:
public:
	string title;
	string authors[4] = { "", "", "", "" };
	int authorCount;
	string publisher;
	string ISBN;
	double price;
	int stock;
	BookType() {
		title = "";
		publisher = "";
		ISBN = "";
		price = 00.00;
		stock = 00;
		authorCount = 0;
	}
	bool checkTitle(string input) {
		if (input == title)
		{
			return (true);
		}
		else
		{
			return (false);
		}
	}
	void showTitle()
	{
		cout << title;
	}
	void updateTitle(string set)
	{
		title = set;
	}
	void setTitle(string set)
	{
		title = set;
	}
	string getTitle()
	{
		return (title);
	}
	void checkAuthor(string input, int select) {
		if (input == authors[select])
		{
			cout << "Correct author" << endl;
		}
		else
		{
			cout << "Incorrect author" << endl;
		}
	}
	void showAuthor()
	{
		int i = 0;
		while (i < authorCount)
			cout << authors[i++];
	}
	void updateAuthor(string set, int select)
	{
		authors[select] = set;
	}
	void setAuthor(string set, int select)
	{
		int i = 0;
		do
		{

			if (set[i] == ' ') {
				i++;
			}
			else {
				authors[select] = set;
				i++;
			}
		} while (i < set.length());

	}
	void getAuthor()
	{
		int i = 0;
		while (i < authorCount)
		{
			if (authors[i] == "0")
			{
				i++;
			}
			else
			{
				cout << authors[i++];
				if (i != authorCount - 1)
				{
					cout << ", ";
				}
			}
		}
	}
	void showPublisher()
	{
		cout << publisher;
	}
	void checkPublisher(string input) {
		if (input == publisher)
		{
			cout << "Correct publisher" << endl;
		}
		else
		{
			cout << "Incorrect publisher" << endl;
		}
	}
	void updatePublisher(string set)
	{
		publisher = set;
	}
	void setPublisher(string set)
	{
		publisher = set;
	}
	string getPublisher()
	{
		return (publisher);
	}
	void showISBN() {
		cout << ISBN;
	}
	bool checkISBN(string input) {
		if (input == ISBN)
		{
			return (true);
		}
		else
		{
			return (false);
		}
	}
	void updateISBN(string set)
	{
		ISBN = set;
	}
	void setISBN(string set)
	{
		ISBN = set;
	}
	string getISBN()
	{
		return (ISBN);
	}
	void showPrice() {
		cout << price;
	}
	void updatePrice(double set)
	{
		price = set;
	}
	void setPrice(double set)
	{
		price = set;
	}
	double getPrice()
	{
		return (price);
	}
	void showStock()
	{
		cout << stock;
	}
	void updateStock(int set)
	{
		stock = set;
	}
	void setStock(int set)
	{
		stock = set;
	}
	int getStock()
	{
		return (stock);
	}
};
