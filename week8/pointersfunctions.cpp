//this porogram demos basic pointers in functions 

#include <iostream>

using namespace std;


void swap (int *xptr, int *yptr);

int main()
{
	int x =10, y = 25;
	
	cout << "In main, before function call: \n";
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	swap(&x,&y);
	cout << "In main, after function call: \n";
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	
	return 0;
	
}

// function to swap 2 numbers
void swap (int *xptr, int *yptr)
{
	int temp = 0;
	temp = *xptr;
	*xptr = *yptr;
	*yptr = temp;
	
}