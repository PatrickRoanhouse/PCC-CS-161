/* Name: Patrick Roanhouse
Lab 3, Question 1
PCC CS 161


Consider the following program in which the statements are in the incorrect order. 
Rearrange the statements so that the program prompts the user to input the height
and the radius of the base of a cylinder and outputs the volume and surface area
of the cylinder. Format the output to two decimal places.

#include <iomanip> #include <cmath> int main()
{}
double height;
cout << "Volume of the cylinder = "
<< PI * pow(radius, 2.0)* height << endl; cout << "Enter the height of the cylinder: "; cin >> radius;
cout << endl;
return 0;
double radius;
cout << "Surface area: "
<< 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
<< endl;
cout << fixed << showpoint << setprecision(2);
cout << "Enter the radius of the base of the cylinder: "; cin >> height;
cout << endl;
#include <iostream>
const double PI = 3.14159;

*/
#include <iostream>
#include <iomanip> 
#include <cmath> 

using namespace std; // wasn't in orginal program had to add to make it compile since

const double PI = 3.14159;

int main()
{
	double height;
	double radius;


	cout << "Enter the radius of the base of the cylinder: ";
	cin >> radius;
	cout << "Enter the height of the cylinder: ";
	cin >> height;

	cout << fixed << showpoint << setprecision(2);
	cout << "Volume of the cylinder = " << PI * pow(radius, 2.0)* height << endl;  
	cout << endl;
	cout << "Surface area : " << (2 * PI * radius * height) + (2 * PI * pow(radius, 2.0)) << endl;

	return 0;
}