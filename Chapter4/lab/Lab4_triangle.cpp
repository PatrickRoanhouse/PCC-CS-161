/* Name: Patrick Roanhouse
Lab 4, Question 2
PCC CS 161

a program that prompts the user to enter the lengths of three sides of a triangle and 
then outputs a message indicating whether the triangle is a right triangle. 
Assuming the user does not know the hypotenuse. program checks all 3 sides to verify
that it is a right-angled triangle.

*/
#include <iostream>
#include <cmath>

using namespace std; 


int main()
{

	double side_one = 0.0, side_two = 0.0, side_three = 0.0;
	double hypotenuse_one = 0.0, hypotenuse_two = 0.0, hypotenuse_three = 0.0;
	double one_two = 0.0, one_three = 0.0, two_three = 0.0; 
	
	//entry
	cout << "Enter measurement of of a triangle to find if it is a right triangle.\n\n";
	cout << "Enter measurement of side one: ";
	cin >> side_one;
	cout << "Enter measurement of side two: ";
	cin >> side_two;
	cout << "Enter measurement of side three: ";
	cin >> side_three;
	
	//Calculations to test each sides
	two_three = (pow(side_three,2) + pow(side_two,2));
	one_three = (pow(side_one,2) + pow(side_three,2));
	one_two = (pow(side_one,2) + pow(side_two,2));

	hypotenuse_one = pow(side_one,2);
	hypotenuse_two = pow(side_two,2);
	hypotenuse_three = pow(side_three,2);
	

	// logical testing

	if( one_two == hypotenuse_three )
	{
		cout << "\nYour sides are part of a right-angled triangle.\n" << endl;
	}
	else if( one_three == hypotenuse_two )
	{
		cout << "\nYour sides are part of a right-angled triangle.\n" << endl;
	}
	else if( two_three == hypotenuse_one )
	{
		cout << "\nYour sides are part of a right-angled triangle.\n" << endl;
	}
	else
	{
		cout << "\nYour sides are NOT a right-angled triangle.\n" << endl;
	}
	
	return 0;
}