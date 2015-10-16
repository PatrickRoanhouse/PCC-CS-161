/* Name: Patrick Roanhouse
Lab 4, Question 1
PCC CS 161

a program that prompts the user to input an integer between 0 and 35. 
If the number is less than or equal to 9, the program should output the number;
otherwise, it should output A for 10, B for 11, C for 12...and Z for 35. 
(Hint: Use the cast operator, static_cast<char>( ), for numbers >= 10.)



*/
#include <iostream>

using namespace std; 


int main()
{

	int user_num;
	
	do{
		cout << "Enter a number between 0 and 35 (enter 36 to exit):";
		cin >> user_num;
		cout << endl;

		if (user_num <= 9) // numbers who loves numbers!
		{
			cout << user_num << endl;
		}
		else if (user_num >= 10 && user_num <= 35) //if higher that 9 you get a letter!
		{
			cout << static_cast<char>('A' + (user_num - 10)) << endl;
		}	
		else if (user_num < 0 || user_num > 36) /// prevents stupid user error
		{
			cout << "You have entered an incompatible number." << endl;
		}
	}while(user_num != 36);
	
	cout << "GoodBye!" << endl;	
	
	return 0;
}