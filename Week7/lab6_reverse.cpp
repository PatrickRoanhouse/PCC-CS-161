/* Name: Patrick Roanhouse
Lab 6, Question 2
PCC CS 161

Write a function, reverseDigit that takes an integer as a parameter and returns the number with its digits reversed. For example, the value of reverseDigit(12345) is 54321; the value of reverseDigit (5600) is 65; the value of reverseDigit (7008) is 8007; and the value of reverseDigit (-532) is -235.

*/
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std; 


int reverseDigit(int digit);

int main()
{
	
	
	int digit= 0;
	int rDigit = 0;
	
	cout << "Enter a Digit:\n";
	cin >> digit;
	
	rDigit = reverseDigit(digit);
	
	cout << "Some might say " << rDigit << " is the reverse of " << digit << "\n";
	
	
 	return 0;
	
}

int reverseDigit(int digit)
{
	int remainder = 0;
	int reverse = 0;
	
	while(digit != 0) 
	{
		remainder = digit%10;
		reverse = reverse*10 + remainder;
	    digit/=10;
	}
	return reverse;
}