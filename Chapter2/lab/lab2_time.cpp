/* 
Name: Patrick Roanhouse
Lab 2 Program 3
CS - 161

This program prompts the user to input the elapsed time for an event in seconds. 
The program then outputs the elapsed time in hours, minutes, and seconds.

*/

//Source: My mind, Logic is fun this way

#include <iostream>
using namespace std;

int main()
{

	int event_time_input = 0, 
		trunk_minutes = 0, 
		trunk_hours = 0, 
		seconds = 0, 
		minutes = 0, 
		hours = 0;
	
	float time_minutes = 0.0, 
		  time_hours = 0.0;

	// input section
	cout << "Enter in time of event in seconds: ";
	cin >> event_time_input;

	// Calculations:
	// seconds
	trunk_minutes = (event_time_input / 60);
	time_minutes = static_cast<float>(event_time_input) / 60;
	seconds = (time_minutes - trunk_minutes) * 60;

	// minutes
	trunk_hours = trunk_minutes / 60;
	time_hours = static_cast<float>(trunk_minutes) / 60;
	minutes = (time_hours - trunk_hours) * 60;
	
	// hours
	hours = trunk_hours;
	
	/* 
	// Testing
	cout << event_time_input << endl;
	cout << trunk_minutes << endl;
	cout << time_minutes << endl;
	cout << seconds << endl;
	cout << trunk_hours << endl;
	cout << time_hours << endl;
	cout << minutes << endl;
	*/

	// Output
	cout << hours << ":" << minutes << ":" << seconds << endl;

	return 0;
}