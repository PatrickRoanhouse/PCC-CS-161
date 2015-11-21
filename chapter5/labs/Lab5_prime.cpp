/* Name: Patrick Roanhouse
Lab 5, Question 2
PCC CS 161

a program that prompts the user to input a positive integer. 
It then outputs a message indicating whether the number is a prime number.

*/
#include <iostream>
#include <cmath>

using namespace std; 


int main()
{
	int num = 0;
	int x = 0;
	int count = 0;
		
	
	cout << "Enter in a number to find if it is prime: ";
	cin >> num;
	
 	for(x=1;x<= num ;x++)
  	{
   	 	if(num % x == 0)
   	 	{
			count++;
   	 	}
	}
  	if(count==2)
	{
		cout << num << " is prime!!!" << endl;
	}
	
	else
	{
		cout << num << " is not prime :(" << endl;
	}
 	return 0;
	
}