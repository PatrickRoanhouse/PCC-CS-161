/* 

Name: Patrick Roanhouse
PCC CS 161

Assignment 6

Write functions to do the following.  Do not change the function signature.  Please write the functions, using the given function signature and specifications.  Finally write the main program to test the functions using a menu.
 
1. Write a function that reads positive numbers from the user, and returns the largest number and outputs it.  The function signature should be

int largest();

The function does not take any parameters.  So, you can read all your input in the function.  It returns an int, which is the largest number to main.  Use a loop to read the numbers until the user enters -1 to quit.  As you read, keep track of the largest number.  When the user enters -1, stop reading and return the largest number to the main function.  Do NOT use an array for this program.

2. Write a function that takes as a parameter an integer, and returns the number of odd, even and zero digits.  This should be a void function since a function cannot return 3 values.  Here is your function signature:
void numberCount(int number, int &oddCount, int &evenCount, int &zeroCount);

So, if the user enters 34873045, the number of odd digits is 4, even digits is 3, and zeros is 1.  You must use integers, do not use strings.

3. The main function must display a simple menu as follows:
Welcome to my program! Please choose one of the following:
(a) Find the largest of a list of positive numbers (-1 to quit).
(b) Given a positive number, display the number of even, odd and zero digits in the number.
(c) quit this program.
Based on what the user picks, use a switch or an if statement and output the corresponding answer.  This menu should be in a loop so it continues to display after each turn until the user enters ‘c’ to quit.


Source : http://www.cplusplus.com/ for basic iomanip formating help, http://www.stackexchange.com for system() information to pause the screen between certain menu choices.


*/

#include <iostream>

using namespace std;

//function prototypes
int largest();
void numberCount(int number, int &oddCount, int &evenCount, int &zeroCount);
char menu();



int main()
{
	char menuOption = ' ';
	int largestNumber = 0;
	int number = 0;
	int oddCount = 0;
	int evenCount = 0;
	int zeroCount = 0;
	
	cout << "Welcome, to this program!" << endl << endl;
	while (menuOption != 'c')
	{
		menuOption = menu();
		switch (tolower(menuOption))
		{
			case 'a':
				largestNumber = largest();
				cout << endl << "Largest number entered is: " << largestNumber << endl << endl ;
				break;
			case 'b': 
				cout << endl << "Enter a number: ";
				cin >> number;
				numberCount(number, oddCount, evenCount, zeroCount);
				cout << endl << "In " << number << " the number of odd digits is " << oddCount << ", even digits is " << evenCount << ", and zeros is " << zeroCount << endl << endl;
				// clears the counters for when a new number is entered 
				oddCount = 0;
				evenCount = 0;
				zeroCount = 0;
				break;
			case 'c':
				cout << endl << "Thank you!" << endl;
				exit(1);
				break;
			default:
				cout << endl << "Not an option, try again" << endl << endl;
				break;
		}
	}	
 return 0;	
}


// displays menu and choose option text
char menu()
{
	char menuOption = ' ';
	cout << "----- Menu ----" << endl;
	cout << "(a) Find the largest number in a list of positive numbers." << endl;
	cout << "(b) Given a positive number, display the number of even, odd and zero digits in the number." << endl;
	cout << "(c) c quits the program."<< endl;
	cout<< "Choose an option: ";
	cin >> menuOption;
	
	return menuOption;
		
}

// counts the number of odd even and zeros numbers in a number entered by the user and passes them by reference 
void numberCount(int number, int &oddCount, int &evenCount, int &zeroCount)
{
	int digit = 0;
	
	while (number > 0) 
	{
		// sees if the first digit is even, odd or zero
       	digit= number % 10;

        if (digit == 0) {
            zeroCount++;
        }
        else if (digit % 2 == 1) {
            oddCount++;
        }
        else {
            evenCount++;
        }
		//decrements the numbers to a decimal to give us the next value to test if even odd or zero
        number /= 10;
    }
}

int largest()
{
	int number = 0, largest = 0;
	
	do { 
			cout << "Please enter a number. Enter -1 to quit: ";
			cin >> number;
			if (number > largest)
			{
				largest = number;
			}
	}while(number!= -1);
	
	return largest;
		
}	

