/* 
Name: Patrick Roanhouse
Lab 2 Program 2
CS - 161

This program prompts the user to enter five test scores 
of a decimal value and then prints the average test score.

*/

//Source: My mind, Logic is fun this way

#include <iostream>
using namespace std;

int main()
{


	double test_one = 0.0, 
			test_two = 0.0, 
			test_three = 0.0, 
			test_four = 0.0, 
			test_five = 0.0, 
			test_average = 0.0;

	//input
	cout << "enter in five test scores with a space between them to get your average test score: \n";
	cin >> test_one >> test_two >> test_three >> test_four >> test_five;


	// calculation 
	test_average = (test_one + test_two + test_three + test_four + test_five) / 5;


	//output
	cout << "Test Average: " << test_average << endl;

	return 0;

}

