/* 
Name: Patrick Roanhouse
Date: 10/01/2015
PCC CS 161 Computer Science 1
Inclase Problem Chapter 2 #25

A room has one door, two windows, and a built-in bookshelf and it needs to be painted. 
Suppose that one gallon of paint can paint 120 square feet. 
Write the program that prompts the user to input the lengths and widths
of the door, each window, the bookshelf; and the length, width, and height
of the room (in feet). The program outputs the amount of paint needed to paint the walls 
of the room.

*/

#include <iostream>
using namespace std;

int main()
{
	// varibles

	// wall varibles
	int number_of_wall = 4;
	double wall_x = 0.0; //width
	double wall_y = 0.0 ;//height


	// window varibles
	int number_of_window = 2;
	double window_x = 0.0; //width
	double window_y = 0.0; //height


	// bookshelf varibles
	int number_of_bookshelf = 1;
	double bookshelf_x = 0.0; //width
	double bookself_y = 0.0; //height

	// door varibles
	int number_of_door = 1;
	double door_x = 0.0; //width
	double door_y = 0.0; //height


	// totals
	double total_sqft = 0.0;
	double sqft_per_gallon_of_paint = 120.0;
	double number_of_gallon = 0.0;
	int rounded_gallon = 0;

	//input
	cout << "We are painting a room, we need some info from you.\nWe know you have 1 door, 2 windows of the same size, and 1 bookshelf.\n What wee need is the dimensions of them.\n We also need to dimension of the equal sized walls.\n please enter them below as prompted.\n";
	cout << "****************************************************************************\n";
	cout << "Wall Width in feet: ";
	cin >> wall_x;
	cout << "Wall Height in feet: ";
	cin >> wall_y;
	cout << "****************************************************************************\n";
	cout << "Window width in feet: ";
	cin >> window_x;
	cout << "Window Height in feet:";
	cin >> window_y;
	cout << "****************************************************************************\n";
	cout << "Door Width in feet: ";
	cin >> door_x;
	cout << "Door height in feet: ";
	cin >> door_y;
	cout << "****************************************************************************\n";
	cout << "Bookshelf Width in feet: ";
	cin >> bookshelf_x;
	cout << "Bookself Height in feet: ";
	cin >> bookself_y;
	cout << "****************************************************************************\n";

	// calculation
	total_sqft = (number_of_wall * ( wall_x * wall_y)) - ( (number_of_door * (door_x * door_y)) + (number_of_window * (window_x * window_y)) + (number_of_bookshelf * (bookshelf_x * bookself_y)));


	number_of_gallon = total_sqft / sqft_per_gallon_of_paint;

	rounded_gallon = number_of_gallon + 0.5;

	// 
	cout << "Number of sqft is: " << total_sqft << endl;

	cout << "Number of Gallons needed is: " << rounded_gallon << endl;


	return 0;
}



