/* Name: Patrick Roanhouse
Lab 5, Question 3
PCC CS 161

The following employees in a company are up for a special pay increase. 
You are given a file, say EmployeeData.txt, with the following data:

Miller Andrew 65789.87 5
Green Sheila 75892.56 6
Sethi Amit 74900.50 6.1
Alex Hooks 66345.45 7.2
Maria Miller 75345.50 6.7
Marga Harrison 80450.95 5.5

Each input line consists of an employee’s last name, first name, current salary, 
and percent pay increase. For example, in the first input line, the last name of 
the employee is Miller, the first name is Andrew, the current salary is 65789.87, 
and the pay increase is 5%. Write a program that reads data from the specified file 
and stores the output in the file EmployeeOutput.dat. If the percent pay increase 
is greater than or equal to 6%, then add $1000.00 to the updated salary. For each 
employee, the data must be output in the following form: 

firstName lastName updatedSalary. 

Format the output of decimal numbers to two decimal places. Make sure you use a 
while loop to read until EOF. Your program should work if I change the number of 
lines in the input file.

*/
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std; 


int main()
{
	ifstream in_data;
	ofstream out_data;
	string last_name = "";
	string first_name = "";
	double salary = 0;
	double raise_percentage = 0;
	double update_salary = 0;
	
	// opening the input and output files
	in_data.open("EmployeeData.txt");
	out_data.open("EmployeeOutput.dat");
	
	cout << fixed << setprecision(2);
	out_data << fixed << setprecision(2); 
	
	// Lets user know what is going on
	cout << "\nThis program reads data from a text file EmployeeData.txt\n";
	cout << "It contains a list of employee's first names, last names, salaries, and % of pay increase \n";
	cout << "It calculates what the new increase salary and If the percent pay increase is \ngreater than or equal to 6%, an extra $1000.00 is added to the updated salary \nthen it stores that information in another file called EmployeeOutput.dat\n\n" ;
		
	// Check the file opened successfully.
	if ( !in_data.is_open())
	{
		cout << "Unable to open input file." << endl;
		exit(1);
	}
	
	// This section reads and echo's the file one line at a time.
	while (in_data.peek() != EOF)
	{
		in_data >> last_name >> first_name >> salary >> raise_percentage;
		cout << endl << first_name << " " << last_name << " has an old salary of $" << salary;
		update_salary = salary * ((1 + raise_percentage) / 100) + salary;
		if (raise_percentage >= 6.0)
		{
			update_salary += 1000.00;
			
			cout << endl << "With a " << raise_percentage << "% pay increase plus $1000 bonus their new salary is $" << update_salary << endl;
			//cout << "\n\nWriting data to new file ->" << endl << endl;
			out_data << last_name << " " << first_name << " " << update_salary << endl;
		}
		else 
		{
		cout << endl << "With a " << raise_percentage << "% pay increase their new salary is $" << update_salary << endl ;
		//cout << "\n\nWriting data to new file ->" << endl << endl;
		out_data << last_name << " " << first_name << " " << update_salary << endl;
		
		}	
	}
	cout << "\nemployee data complete processing complete > check file EmployeeOutput.dat to see recorded information";
	cout << endl << endl;
	
	return 0;
}