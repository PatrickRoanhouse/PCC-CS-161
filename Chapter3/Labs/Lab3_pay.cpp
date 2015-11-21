/* Name: Patrick Roanhouse
Lab 3, Question 2
PCC CS 161


Three employees in a company are up for a special pay increase. 
You are given a file, say Ch3_Ex6Data.txt, with the following data:

Miller Andrew 65789.87 5
Green Sheila 75892.56 6
Sethi Amit 74900.50 6.1

Each input line consists of an employee’s last name, first name, current salary, 
and percent pay increase. For example, in the first input line, the last name 
of the employee is Miller, the first name is Andrew, the current salary is 65789.87, 
and the pay increase is 5%. Write a program that reads data from the specified file 
and stores the output in the file Ch3_Ex6Output.dat. For each employee, the data must 
be output in the following form: first_name last_name updatedSalary. Format the output 
of decimal numbers to two decimal places.

*/
#include <iostream>
#include <fstream>
#include <string>
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
	in_data.open("Ch3_Ex6Data.txt");
	out_data.open("Ch3_Ex6Output.dat");


	// format precision to two decimal places
	cout << fixed << setprecision(2);
	out_data << fixed << setprecision(2);

	// Lets user know what is going on
	cout << "\nThis program reads data from a text file Ch3_Ex6Data.txt\n";
	cout << "It contains three employee's first names, last names, salaries, and % of pay increase\n";
	cout << "It calculates what the new increase salary then stores the information & output in another file named Ch3_Ex6Output.dat.\n\n";

	// first employee
	cout << "Reading data from old file…\n\n";
	in_data >> last_name >> first_name >> salary >> raise_percentage;
	cout << endl << first_name << " " << last_name << " has an old salary of $" << salary;
	update_salary = salary * ((1 + raise_percentage) / 100) + salary;
	cout << endl << "With a " << raise_percentage << "% pay increase their new salary is $" << update_salary ;
	cout << "\n\nWriting data to new file ->" << endl << endl;
	out_data << first_name << " " << last_name << " " << update_salary << endl;
	
	// second employee
	in_data >> last_name >> first_name >> salary >> raise_percentage;
	cout << endl << first_name << " " << last_name << " has an old salary of $" << salary;
	update_salary = salary * ((1 + raise_percentage) / 100) + salary;
	cout << endl << "With a " << raise_percentage << "% pay increase their new salary is $" << update_salary ;
	cout << "\n\nWriting data to new file ->" << endl << endl;
	out_data << first_name << " " << last_name << " " << update_salary << endl;
	
	// third employee
	in_data >> last_name >> first_name >> salary >> raise_percentage;
	cout << endl << first_name << " " << last_name << " has an old salary of $" << salary;
	update_salary = salary * ((1 + raise_percentage) / 100) + salary;
	cout << endl << "With a " << raise_percentage << "% pay increase their new salary is $" << update_salary ;
	cout << "\n\nWriting data to new file ->" << endl << endl;
	out_data << first_name << " " << last_name << " " << update_salary << endl;
	
	// close files

	in_data.close(); // closes input file
	out_data.close(); // closes output file

	return 0;
}