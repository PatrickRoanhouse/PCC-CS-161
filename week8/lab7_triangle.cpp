/* Name: Patrick Roanhouse
Lab 7, question 1
PCC CS 161

Define an enumeration type, triangleType that has the values scalene, isosceles, equilateral, and noTriangle. Write a function, triangleShape that takes as parameters three numbers, each of which represents the length of a side of a triangle. The function should return the shape of the triangle. (Note: In a triangle, the sum of the lengths of any two sides is greater than the length of the third side.)

*/

#include <iostream>


using namespace std; 


typedef double side;
enum triangleType {scalene, isosceles, equilateral, noTriangle} shape;
triangleType triangleShape(side&, side&, side&, triangleType&);

int main() {
	side a;
	side b;
	side c;
	int type;
	
	cout << "Enter in three numbers, to see what type of triangle they may or may not form." << endl << endl;
	cout << "Enter side A: ";
	cin >> a;

	cout << "Enter side B: ";
	cin >> b;

	cout << "Enter side C: ";
	cin >> c;


	type = triangleShape(a, b, c, shape);


	switch(type) {
		case noTriangle:
			cout << endl << "This does not represent a triangle." << endl;
			break;
		case equilateral:
			cout << endl << "This is an equilateral triangle." << endl;
			break;
		case isosceles:
			cout << endl << "This is an isosceles triangle." << endl;
			break;
		case scalene:
			cout << endl << "This is a scalene triangle." << endl;
			break;
		}
		return 0;
}


triangleType triangleShape(side& a, side& b, side& c, triangleType& shape) {

	if (a <= 0 || b <= 0 || c <= 0) 
	{
			cout << "Cannot have a negative side for a triangle." << endl;
			exit(1);
	}
	else if (a == b && b == c && a == c)
	{
		return equilateral;
	}
	else if (a == b || b == c || c == a)
	{
		return isosceles;
	}
	else if (a != b && b != c && c != a)
	{
		return scalene;
	}
	else if (a + b < c || b + c < a || a + c < b)
	{					
		return noTriangle;
	}
	return noTriangle;
}