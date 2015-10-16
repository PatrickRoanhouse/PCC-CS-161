/* 

Name: Patrick Roanhouse
PCC CS 161

demos input output and how to use the cin.ignore()

*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main()
{

	
	int num = 0;
	cout << "enter a number: ";
	cin >> num;

	if (num == 0)
	{
		cout << "your number is zero!" << endl;
	}
	else if ( num % 2 == 0)
	{
		cout << "your number is even!" << endl;
	}
	else
	{
		cout << "your number is odd!" << endl;
	}

	return 0;
}