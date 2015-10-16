/* 

Name: Patrick Roanhouse
PCC CS 161

Assignment 1

Program: Reads the radius of a sphere and outputs the sphere's volume. The formula for a volume of a sphere is as follows:
volume = 4/3 π r^3


Source : http://www.cplusplus.com/ for information on cmath, iomanip


*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double pi = 3.14159265359;

int main()
{

	double radius = 0, volume = 0;


	cout << "Enter Radius of Sphere: ";
	cin >> radius;

	volume = ((4/3.0) * pi) * (pow(radius, 3));

	cout.precision(2);
	cout << fixed;
	cout << "A sphere with a radius of " << radius << " has a volume of " << volume << endl;

	return 0;
}