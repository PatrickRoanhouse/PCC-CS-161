// this program demos dynamic pointers

#include <iostream>

using namespace std;

int main()
{
	int *xptr;
	//dynamic memory
	xptr = new int;
	*xptr = 15;
	cout << "*xptr = " << *xptr << endl;
	cout << "address of xptr = " << &xptr << endl;
	
	//deallocate the memory
	delete xptr;
	
	return 0;
	
}