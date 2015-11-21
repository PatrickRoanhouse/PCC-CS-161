/* Name: Patrick Roanhouse
Lab 5, Question 1
PCC CS 161

a program that reads a set of integers and then finds and prints the sum of the even and odd integers.

*/
#include <iostream>
#include <cmath>

using namespace std; 


int main()
{
	int num = 0, evenSum = 0, oddSum = 0;
	
	cout << "enter a series of intergers (enter 0 to quit): ";
	cin >> num;
	do
	{
		if(num%2 == 0)
		{
			evenSum += num;
		}
		else
		{
			oddSum += num;
		}
		cin >> num;
	}while(num != 0);
	
	cout << "Sum of ODD numbers = " << oddSum << endl;
	cout << "Sum of EVEN numbers = " << evenSum << endl;
	return 0;
}