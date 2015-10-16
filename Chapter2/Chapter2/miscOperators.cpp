/* This Program demos compound assignment statements
and increments and decrement operators
Date: 09/ 29/2015
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x = 100, y = 12, z = 10;
	
	// simple assignment statement
	z = z * x;
	cout << "z = " << z << endl;
	

	//compound assignment statement 
	z *= x;
	cout << "z = " << z << endl;
	
	x /= (y + 5);
	cout << "x = " << x << endl;

	// increment and deincrement ops
	y++;
	cout << "y = " << y << endl;
	cout << "++y = " << ++y << endl;			// x is 5, and y is 17
	cout << "y = " << y << endl;	

	x = x + y++;
	cout << "x = x + y++ is " << x << endl;		// x is 22, and y is 18
	x += ++y;
	cout << "x = x + y++ is " << x << endl;		// x
	x += --y;
	cout << "x = x + --y is " << x << endl;


	//
	return 0;
}