/*

Name: Patrick Roanhouse
PCC CS 161

Assignment 5

Write a program that mimics a calculator in a shopping cart.  Your program must display a simple menu to the user with the following choices:
(a)Add an item to the cart.
(t)Running total.
(q)Quit.

If the choice is (a), you must let the user add an item by name (any text with spaces).  Then you must ask for the price of the item (read in double), and then display the total so far immediately.  That would be the running total.  Then display the menu again.
If the choice is (t), give them the total so far, then display the menu again.
If the choice is (q), then give them the total and quit the program.

1. You must use loops, since this is an exercise in loops.
2. No global variables. All variables must be inside main().
3. You must be able to read text with spacers, so use getline() for the string data type.
4. The menu must display continuously after every turn, until the user enters ‘q’ to quit.
5. There is no need to store the past items.  All you need to do is to maintain a running total, to output to the user.

Source : http://www.cplusplus.com/ for basic iomanip formating help, http://www.stackexchange.com for system() information to pause the screen between certain menu choices.


*/

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

char menu(double total);


int main()
{

	double price = 0;
	double total = 0;
	string item = "";
	char menuOption = 'M';
	bool quit = 0;

	cout << "Welcome to\n";

	while (quit != 1)
	{

		switch (menuOption)
		{
		case 'A':
			cout << "Enter item name: ";
			getline(cin.ignore(100, '\n'), item);

			cout << "Enter Price: ";
			cin >> price;

			total = total + price;

			cout << endl << left << setw(40) << "-------------------------------------------------------";
			cout << endl << right << setw(50) << fixed << setprecision(2) << "Running Total $" << total;
			cout << endl << left << setw(40) << "-------------------------------------------------------";
			cout << endl;
			// system( "read -n 1 -s -p \"Press any key to continue...\"" );
			cout << endl;
			menuOption = menu(total);
			break;
		case 'T':
			cout << endl << right << setw(50) << fixed << setprecision(2) << "Running Total $" << total;
			cout << endl << left << setw(40) << "-------------------------------------------------------";
			// system( "read -n 1 -s -p \"Press any key to continue...\"" );
			cout << endl;
			menuOption = menu(total);
			break;
		case 'Q':
			cout << endl << right << setw(50) << fixed << setprecision(2) << "Final Total $" << total << endl;
			cout << endl << left << setw(40) << "-------------------------------------------------------";
			quit = 1;
			break;
		case 'M':
			menuOption = menu(total);
			break;
		default:
			cout << endl << left << setw(50) << "--- Invalid option ----";
			cout << endl << left << setw(40) << "-------------------------------------------------------";
			cout << endl;
			// system( "read -n 1 -s -p \"Press any key to continue...\"" );
			cout << endl;

			menuOption = menu(total);



		}


	}

	return 0;

}

char menu(double total)
{
	char menuOption = 'M';


	cout << endl << left << setw(40) << "Roanhouse Shopping Cart";
	cout << endl << left << setw(40) << "------------------------------------------------------";
	cout << endl;
	cout << endl << left << setw(40) << "(A) Add an item to the cart";
	cout << endl << left << setw(40) << "(T) Running total";
	cout << endl << left << setw(40) << "(Q) Quit";
	cout << endl;
	// cout << endl << right << setw(50) << fixed << setprecision(2) << "Running Total $"<< total;
	cout << endl << left << setw(40) << "-------------------------------------------------------";
	cout << endl;
	cout << "Enter a option: ";
	cin >> menuOption;

	menuOption = toupper(menuOption);

	cout << endl << left << setw(40) << "-------------------------------------------------------";
	cout << endl;

	return menuOption;
}