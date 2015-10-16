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

	
	string name;
	char option, senior;
	double fare;

	cout << "Please enter your name: ";
	//getline(cin, name);
	cin.getline(name, 31, '\n');
	cout << "are you driving a vehicle (y/n): ";
	cin.get(option);
	cin.ignore(100, '\n');
	cout << "are you a senior citizen? ";
	cin.get(senior);
	cin.ignore(100, '\n');
	cout << "Please enter the fare: ";
	cin >> fare;
	cin.ignore(100, '\n');

	cout.precision(2);
	cout << fixed << endl;
	cout << "you entered: " << name << ", " << option << ", " << senior << ", and " << fare << endl;

	return 0;
}