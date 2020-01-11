#include <iostream>
using namespace std;
class bookType{
	private:
	public:
		string title;
		string authors[4];
		string publisher;
		int stock;
	void checkTitle(bookType title){
		if(title.title == title)
		{
			cout << "Correct title" << endl;
		}
		else
		{
			cout << "Incorrect title" << endl;
		}
	}
};
