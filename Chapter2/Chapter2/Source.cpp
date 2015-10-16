/*
Name: Patrick Roanhouse
Lab 2 Program 1
CS - 161

The point of this program is to round a number from a decimal float number to an interger.
My method is adding 0.5 to the user input it will increase it to the next interger
Example 4.5 + 0.5 = 5.0 when you then implicit casting it to an interger it then just becomes 5.
Or it will keep it the lowest interger if you have say example 4.3 +.5 is only 4.7 which
when cast is just 4.

*/

//Source: My mind, Logic is fun this way

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double user_input = 0.0;
	int math_round = 0, rounding = 0;

	cout << "Type a decimal number in: ";
	cin >> user_input;

	if (user_input < 0.0)
	{
		rounding = user_input - 0.5;

		cout << user_input << " rounds to " << rounding << endl;
	}
	else if (user_input == 0.0)
	{

		cout << " You entered 0 for your number. Why do you do this to me?" << endl;

	}
	else if (user_input > 0.0)
	{
		rounding = user_input + 0.5;

		cout << user_input << " rounds to " << rounding << endl;
	}
	return 0;
}