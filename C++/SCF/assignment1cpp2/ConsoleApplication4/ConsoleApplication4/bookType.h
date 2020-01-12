#include <iostream>
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
check whether a title is the same as the actual title of the book.
Similarly, the typical operations that can be performed on the
number of copies in stock are to show the number of copies in
stock, set the number of copies in stock, update the number of
copies in stock, and return the number of copies in stock. Add
similar operations for the publisher, ISBN, book price, and authors.
Add the appropriate constructors and a destructor (if one is needed).
*/
using namespace std;
class BookType{
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
	void checkTitle(string input){
		if(input == title)
		{
			cout << "Correct title" << endl;
		}
		else
		{
			cout << "Incorrect title" << endl;
		}
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
	void setAuthor(string set, int select)
	{
		authors[select] = set;
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
				if (i != authorCount-1)
				{
					cout << ", ";
				}
			}
		}
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
	void setPublisher(string set)
	{
		publisher = set;
	}
	string getPublisher()
	{
		return (publisher);
	}
	void checkISBN(string input) {
		if (input == ISBN)
		{
			cout << "Correct ISBN" << endl;
		}
		else
		{
			cout << "Incorrect ISBN" << endl;
		}
	}
	void setISBN(string set)
	{
		ISBN = set;
	}
	string getISBN()
	{
		return (ISBN);
	}
	void checkPrice(double input) {
		if (input == price)
		{
			cout << "Correct Price" << endl;
		}
		else
		{
			cout << "Incorrect Price" << endl;
		}
	}
	void setPrice(double set)
	{
		price = set;
	}
	double getPrice()
	{
		return (price);
	}
	void checkStock(int input) {
		if (input == stock)
		{
			cout << "Correct Stock" << endl;
		}
		else
		{
			cout << "Incorrect Stock" << endl;
		}
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
