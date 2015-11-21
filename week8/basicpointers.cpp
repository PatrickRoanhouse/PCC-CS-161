//this porogram demos basic pointers

#include <iostream>

using namespace std;

int main()
{
	int x = 0, *xptr;
	double y = 0, *yptr;
	
	xptr = &x;
	yptr = &y;
	
	*xptr = 15;
	*yptr = 12.5;
	
	// x = 0x100 [ 0 ] y = 0x200 [ 0 ]
	// *xptr = 0x300 [ ] yptr = 0x400 [ ]
	
	cout << "x = " << x << endl;
	cout << "address of x = " << &x << endl; // &x means "address of x" in output
	cout << "*xptr = " << *xptr << endl;
	cout << "xptr = " << xptr << endl;
	cout << "xptr's address = " << &xptr << endl;
	
	cout << "y = " << y << endl;
	cout << "address of y = " << &y << endl; // &y means "address of y" in output
	cout << "*yptr = " << *yptr << endl;
	cout << "yptr = " << yptr << endl;
	cout << "yptr's address = " << &yptr << endl;
	
	return 0;
	
}
