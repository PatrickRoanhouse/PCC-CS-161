/* Name: Patrick Roanhouse
Extra Credit, Prime Number with Bool function
PCC CS 161

a program that prompts the user to input a positive integer. 
It then outputs a message indicating whether the number is a prime number.

*/
#include <iostream>
#include <cmath>

using namespace std; 

//function prototype
bool isPrime(int num);

int main()
{
	int num = 0;
	bool prime = 1;
		
	
	cout << "Enter in a number to find if it is prime: ";
	cin >> num;
	
	prime = isPrime(num);
 
  	if(prime==1)
	{
		cout << num << " is prime!!!" << endl;
	}
	
	else
	{
		cout << num << " is not prime :(" << endl;
	}
 	return 0;
	
}

bool isPrime(int num)
{
	int num2 = num;
	int count = 0;
	int x = 0;
	bool prime = 1;
	
 	for(x=1;x<= num2 ;x++)
  	{
   	 	if(num2 % x == 0)
   	 	{
			count++;
   	 	}
	}
	
	if (count > 2)
		prime = 0;
	else
		prime = 1;
	
	return prime;
	
}