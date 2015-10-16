/* This Program reads measurment in feet and inches from the user
and converts to all inches
Date: 09/ 29/2015
*/

#include <iostream>
#include <string>

using namespace std;

//constants
const int INCHES_PER_FOOT = 12;
const double CONVERSION_FACTOR_CMS = 2.54;

int main()
{
	int feet_in = 0, inches_in = 0, inches_out = 0;
	double cms_out = 0;
	string name;
	char answer;
	
	//output a prompt to the user with input
	cout << "This program will convert measurment\n from feet and inches to inches and then cms.\n\n\n";
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Enter measurement in feet and inches" << endl << "Feet: ";
	cin >> feet_in;
	cout << "Inches: ";
	cin >> inches_in;
	cout << "\n\n";
	
	//conversion
	inches_out = (feet_in * INCHES_PER_FOOT) + inches_in;
	cms_out = inches_out * CONVERSION_FACTOR_CMS;

	//output to user
	cout << "Measurement in inches = " << inches_out << " in\n\n";
	cout << "Measurement in centimeters = " << cms_out << " cm\n\n";
	cout << "Thank you " << name << " for using my program!" << endl;


	return 0;
}