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
class BookType {
private:
public:
	std::string title;
	int i;
	std::string authors[4];
	int authorCount;
	std::string publisher;
	std::string ISBN;
	double price;
	int stock;
	BookType() {
		title = "";
		i = 0;
		while (i < 4) {
		authors[i++] = "";
		}
		publisher = "";
		ISBN = "";
		price = 00.00;
		stock = 00;
		authorCount = 0;
	}
	bool checkTitle(std::string input) {
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
		std::cout << title;
	}
	void updateTitle(std::string set)
	{
		title = set;
	}
	void setTitle(std::string set)
	{
		title = set;
	}
	std::string getTitle()
	{
		return (title);
	}
	void checkAuthor(std::string input, int select) {
		if (input == authors[select])
		{
			std::cout << "Correct author" << std::endl;
		}
		else
		{
			std::cout << "Incorrect author" << std::endl;
		}
	}
	void showAuthor()
	{
		int i = 0;
		while (i < authorCount)
			std::cout << authors[i++];
	}
	void updateAuthor(std::string set, int select)
	{
		authors[select] = set;
	}
	void setAuthor(std::string set, int select)
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
				std::cout << authors[i++];
				if (i != authorCount - 1)
				{
					std::cout << ", ";
				}
			}
		}
	}
	void showPublisher()
	{
		std::cout << publisher;
	}
	void checkPublisher(std::string input) {
		if (input == publisher)
		{
			std::cout << "Correct publisher" << std::endl;
		}
		else
		{
			std::cout << "Incorrect publisher" << std::endl;
		}
	}
	void updatePublisher(std::string set)
	{
		publisher = set;
	}
	void setPublisher(std::string set)
	{
		publisher = set;
	}
	std::string getPublisher()
	{
		return (publisher);
	}
	void showISBN() {
		std::cout << ISBN;
	}
	bool checkISBN(std::string input) {
		if (input == ISBN)
		{
			return (true);
		}
		else
		{
			return (false);
		}
	}
	void updateISBN(std::string set)
	{
		ISBN = set;
	}
	void setISBN(std::string set)
	{
		ISBN = set;
	}
	std::string getISBN()
	{
		return (ISBN);
	}
	void showPrice() {
		std::cout << price;
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
		std::cout << stock;
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
