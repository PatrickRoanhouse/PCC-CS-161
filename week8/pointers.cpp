// Pointers


#include <iostream>

int x;


int *xptr;

x=20;

xptr = &x; // address of x

//  x address 0x100 [ 20 ] 
// xptr adress 0x200 [0x100]

*xptr = 15;