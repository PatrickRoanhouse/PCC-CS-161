/* This Program demos the mod operator and the ignore function
Date: 09/ 29/2015
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//varibles
	int numerator = 0, denominator = 0, wholePart = 0, fractPart = 0;

	cout << "This program converts improper fraction to mixed number" << endl;

	//user input
	cout << "Please enter improper fraction (x / y):";
	cin >> numerator;
	cin.ignore(10, '/');
	cin >> denominator;
	
	//convert
	wholePart = numerator / denominator;
	fractPart = numerator % denominator;
	
	//output
	cout << "Your mixed number is " << wholePart << " " << fractPart << "/" << denominator << endl;

	return 0;



}