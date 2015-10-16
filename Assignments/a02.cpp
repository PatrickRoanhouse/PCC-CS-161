/* 

Name: Patrick Roanhouse
PCC CS 161

Assignment 2

Write a program to evaluate the fuel consumption of a car. The mileage at 
the start and end of the journey should be read, and also the fuel level 
in the tank at the start and end of the journey. Calculate fuel used, miles 
travelled, and hence the overall fuel consumption in miles travelled per 
gallon of fuel.

In many countries using the metric system, car fuel consumptions are 
measured in liters of fuel required to travel 100 kilometers. Modify your 
solution so that the output now specifies the distance travelled in 
kilometers as well as in miles, and the fuel consumed in liters as well 
as in gallons, and the consumption in liters per 100 kilometers as well 
as in miles per gallon. Use const for the conversion factors between miles 
and kilometers, and gallons and liters.

Source : http://www.cplusplus.com/ for information on iomanip


*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



int main()
{
	const double mile_to_kms = 1.609;
	const double gallon_to_liters = 3.785;
	
	double starting_mileage = 0.0,
			ending_mileage = 0.0,
			miles_traveled = 0.0,
			fuel_at_start_gallon = 0.0,
			fuel_at_end_gallon = 0.0,
			fuel_used_gallon = 0.0,
			miles_per_gallon = 0.0,
			kms_traveled = 0.0,
			liter_used = 0.0,
			liter_per_hundredkms = 0.0;
			
	// input
	cout << "Enter starting mileage: ";
	cin >> starting_mileage;
	cout << "Enter ending mileage: ";
	cin >> ending_mileage;
	cout << "Enter fuel at start in gallons: ";
	cin >> fuel_at_start_gallon;
	cout << "Enter fuel at end in gallons: ";
	cin >> fuel_at_end_gallon;

	//calculations 

	miles_traveled = ending_mileage - starting_mileage;
	fuel_used_gallon = fuel_at_start_gallon - fuel_at_end_gallon;
	miles_per_gallon = miles_traveled / fuel_used_gallon;
	
	//metric conversation calculations
	kms_traveled = miles_traveled * mile_to_kms;
	liter_used = fuel_used_gallon * gallon_to_liters;
	liter_per_hundredkms = liter_used / (kms_traveled / 100.0);


	// output 
	cout.precision(2);
	cout << fixed << endl;
	cout << "Number of miles travled = " << miles_traveled << " miles\n"; 
	cout << "Fuel used = " << fuel_used_gallon << " gallons\n";
	cout << "Miles per gallon of fuel = " << miles_per_gallon << endl << endl;
	cout << "Number of kilometers travelled = " << kms_traveled << " kms\n";
	cout << "Fuel used = " << liter_used << " liters\n";
	cout << "liters per 100kms = " << liter_per_hundredkms << endl;
	
	return 0;
}