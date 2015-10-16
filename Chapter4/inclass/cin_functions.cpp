/* 

Name: Patrick Roanhouse
PCC CS 161

cin functions like get, peek, putback

*/

#include <iostream>


using namespace std;


int main()
{

	
	char ch;

	cout << "Enter a few characters: ";
	cin.get(ch);
	cout << "You Entered: " << ch << endl;

	//peek function
	ch = cin.peek();
	cout << "now, ch = " << ch << endl;
	// read from the input
	cin.get(ch);
	cout << "now ch = " << ch << endl;
	//putback function
	cin.putback(ch);
	// read from input
	cin.get(ch);
	cout << "now, ch = " << ch << endl;

	return 0;
}