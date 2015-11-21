/* 

Name: Patrick Roanhouse
PCC CS 161

Assignment 3

A fare calculator for a Washington State Ferries for drivers and passangers



Source : http://www.cplusplus.com/ for information on 


*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



int main()
{
	
	char carStatus = 'y';
	char seniorDriver = 'n';
	int Passagers = 0;
	char vehicleHeight = 'n';
	double vehicleLength = 0.0;
	
	int adults = 0;
	int senior = 0;
	int youth = 0;

	int bikes = 0;

	double adultFare = 12.95, seniorFare = 6.45, youthFare = 6.45, bikeFare = 2.00;
	
	
	double carLengthOneNorm = 36.05, carLengthOneSen = 29.55;
	double carLengthTwoNorm = 45.00, carLengthTwoSen = 38.50;
	double carHeightOneSurcharge = 35.80, carHeightTwoSurcharge = 44.75;
	double carTypeThree = 69.60, carTypeThreeOver = 138.95, carTypeFour = 185.95, carTypeFive = 232.95;

	double totalFare = 0.0;
	
	


	// input section
	cout << "Welcome to Patrick Roanhouse's Fare Calculator.\n";
	cout << "Are you driving a vehicle onto the ferry? (y/n): ";
	cin >> carStatus;
	if (tolower(carStatus) == 'y')
	{
		cout << "Is the driver a senior citizen (65 or over) or disabled? (y/n): ";
		cin >> seniorDriver;
		cout << "How many adults (age 19 – 64): in your group? ";
		cin >> adults;
		cout << "How many senior citizens (65 or older), or disabled persons in your group? ";
		cin >> senior;
		cout << "How many youth (5-18) in your group? ";
		cin >> youth;
		cout << "Is your vehicle over 7 feet, 6 inches in height? (y/n): ";
		cin >> vehicleHeight;
		cout << "How long is your vehicle in feet?: ";
		cin >> vehicleLength;
		if(vehicleLength >= 50)
		{
		cout << "\n\nYour vehicle is prohibted from the Washington State Ferries.\n\n" << "\n\nThank you for using Patrick Roanhouse's Fare Calculator\n\n";
		
		return 0;	
		}
		cout << "How many people in your group are traveling with a bicycle? ";
		cin >> bikes;


	}
	else 
	{
		cout << "How many adults (age 19 – 64): in your group? ";
		cin >> adults;
		cout << "How many senior citizens (65 or older), or disabled persons in your group? ";
		cin >> senior;
		cout << "How many youth (5-18) in your group? ";
		cin >> youth;
		cout << "How many people in your group are traveling with a bicycle? ";
		cin >> bikes;
	}

	//logic for calculations

	if(tolower(carStatus) == 'y')
	{
		if(tolower(seniorDriver) == 'y')
		{
			if(tolower(vehicleHeight) == 'y')
			{
				if(vehicleLength < 14)
				{
					totalFare = carLengthOneSen + carHeightOneSurcharge + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 14) && (vehicleLength < 22))
				{
					totalFare = carLengthTwoSen + carHeightTwoSurcharge + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 22) && (vehicleLength < 30))
				{
					totalFare = carTypeThreeOver + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 30) && (vehicleLength < 40))
				{
					totalFare = carTypeFour + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 40) && (vehicleLength < 50))
				{
					totalFare = carTypeFive + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
			}
			else //car is lower than 7 feet 4 inches
			{
				if(vehicleLength < 14)
				{
					totalFare = carLengthOneSen + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 14) && (vehicleLength < 22))
				{
					totalFare = carLengthTwoSen + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 22) && (vehicleLength < 30))
				{
					totalFare = carTypeThreeOver + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 30) && (vehicleLength < 40))
				{
					totalFare = carTypeFour + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 40) && (vehicleLength < 50))
				{
					totalFare = carTypeFive + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
			}
		}
		else // Not a senior citizen driver
		{
			if(tolower(vehicleHeight) == 'y')
			{
				if(vehicleLength < 14)
				{
					totalFare = carLengthOneNorm + carHeightOneSurcharge + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 14) && (vehicleLength < 22))
				{
					totalFare = carLengthTwoNorm + carHeightTwoSurcharge + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 22) && (vehicleLength < 30))
				{
					totalFare = carTypeThreeOver + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 30) && (vehicleLength < 40))
				{
					totalFare = carTypeFour + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 40) && (vehicleLength < 50))
				{
					totalFare = carTypeFive + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
			}
			else // car is lower than 7 feet 4 inches
			{
				if(vehicleLength < 14)
				{
					totalFare = carLengthOneNorm + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 14) && (vehicleLength < 22))
				{
					totalFare = carLengthTwoNorm + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 22) && (vehicleLength < 30))
				{
					totalFare = carTypeThree + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 30) && (vehicleLength < 40))
				{
					totalFare = carTypeFour + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
				else if((vehicleLength > 40) && (vehicleLength < 50))
				{
					totalFare = carTypeFive + (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
				}
			}
		}

	}
	else // just people no car
	{
		totalFare = (adults * adultFare) + (senior * seniorFare) + (youth * youthFare) + (bikes * bikeFare);
	}
	cout<<setprecision(2)<<fixed;
	cout << "\n\nYour total fare is $" << totalFare << "\n\nThank you for using Patrick Roanhouse's Fare Calculator\n\n";


	return 0;

}