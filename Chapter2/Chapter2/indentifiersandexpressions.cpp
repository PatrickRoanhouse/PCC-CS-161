//This program demos variables and expressions
/* Class: cs 161
Chapter 2 Topics
date : 09/24/2015
Author GD iyer

*/

#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14159

int main(){

	int length = 0, width = 0, area;
	double tax = 0, payrate = 0;
	char answer = 'y';
	string subject = "Computer Science";

	// calculate area

	area = length * width;

	//output the variables
	cout << "Area =" << area << endl;
	cout << "Character =" << answer << endl;
	cout << "The String is " << subject << endl;
	
	// output on expressions
	cout << "15 / 7 = " << 15 / 7 << endl;
	cout << "5.0 + 3.5 / 2 " << 5.0 + 3.5 / 2 << endl;
	
	//one way to write 4/ 3 would be 4.0 / 3 to get the right answer which is implicite casting
	cout << "Volume = " << (4.0 / 3) * PI * radius * radius * radius << endl;
	
	//or use static_cast<double>(varible) which is 
	cout << "Volume = " << static_cast<double>(4) / 3 * PI * radius * radius * radius << endl;
	cout << "34.5 / 6.5" << 34.5 / 6.5 << endl;

	//string function
	cout << "Length of my string subject is: " subject.length() << endl;
	

	return 0;
}