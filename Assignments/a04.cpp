/* 

Name: Patrick Roanhouse
PCC CS 161

Assignment 4

The Oregon Department of Education has commissioned a study to determine if Males or Females score better on a particular test. They also want to study if Community College or University students score better. Researchers have created a data file (scores.txt), which contains the scores attained by the student sample. 

The first column is the student’s name, 
the second column is the student’s gender (M for male, and F for female), 
the third column indicates Community College (CC) or 4 year (UN), 
the last column specifies the score. 

Your assignment is to prompt the user to enter the filename with the path on disk.  If the file does not exist in the specified location, your program should exit with a suitable error message.
No global variables. All variables must be inside main().

The first thing your program should do is output to the screen a copy of the data read in from the disk file.  This is known as “echoing” the input data.

Your program should then calculate and display the average score for males, females, community college students, and university students. Display your results to two places of decimals, and write your program to automatically list your four calculated averages one to a line, along with a suitable label for each result.

Finally, your program should calculate and display to two places of decimals the overall average score for all of the students surveyed. (Note: Mathematically, this is NOT the average of the four averages you calculated previously).

Source : http://www.cplusplus.com/ for information on file reading and writing and echoing data from file


*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;


int main()
{
	
	string inputFilename;
	ifstream inputFile;
	
	string studentName = "";
	char gender;
	string school = "";
	double score = 0;
	
	int maleCount = 0;
	int femCount = 0;
	int ccCount = 0;
	int uniCount = 0;
	int totalCount = 0;
	
	double maleScore = 0;
	double femScore = 0;
	double ccScore = 0;
	double uniScore = 0;
	double totalScore = 0;
	
	double maleAvg = 0;
	double femAvg = 0;
	double ccAvg = 0;
	double uniAvg = 0;
	double totalAvg = 0;
	
	// Informing user of purpose of program
	cout << "The Oregon Department of Education has commissioned a study to determine if Males or Females score better on a particular test. They also want to study if Community College or University students score better. Researchers have created a data file (scores.txt), which contains the scores attained by the student sample. \n\nPlease enter in the file name and location of scores.txt \n\n";
	
	// opening the input file by user input
	while(!inputFile.is_open()) 
	{
		cout << "Input filename: ";
		getline (cin, inputFilename);
		inputFile.open(inputFilename.c_str(),ios::in | ios::binary);
		// entry correction if data file is not correct
		if ( !inputFile.is_open())
		{

			cout << "\n\nUnable to open input file. Try again \n\n" << endl;
		}
	}
	
	cout << endl << endl;
	
	//echoing the input from the file
	cout << left << setw(24) << "Student Name" << setw(10) << "gender" << setw(10) << "school" << setw(10) << "score" << endl;
	cout << "-----------------------------------------------------"<< endl;
	
	while (!inputFile.eof())
	{
		// copy line from file and then echos it
		inputFile >> studentName >> gender >> school >> score;
		cout << left << setw(24) << studentName << setw(10) << gender << setw(10) << school << setw(10) << score << endl;
		
		// compares for gender
		if(gender == 'M')
		{
			// increases male score and total score as well as count
			maleScore = score + maleScore;
			totalScore = score + totalScore;
			maleCount++;
			totalCount++;
			
			if (school == "CC")
			{
				// if community college totals score as well as count
				ccScore = score + ccScore;
				ccCount++;
			}
			else if (school == "UN")
			{
				// if university totals score
				uniScore = score + uniScore;
				uniCount++;
			}
		}
		else if(gender == 'F')
		{
			// increases female score and total score as well as count
			femScore = score + femScore;
			totalScore = score + totalScore;
		    femCount++;
			totalCount++;
			if (school == "CC")
			{
				// if community college totals score as well as count
				ccScore = score + ccScore;
				ccCount++;
			}
			else if (school == "UN")
			{
				// if university totals score as well as count
				uniScore = score + uniScore;
				uniCount++;
			}
		}
		
		
		
	}
	cout << "-----------------------------------------------------"<< endl;
	cout << endl << endl;
	
	//sets the output for all information to two decimal points and fixed value
	cout << fixed << setprecision(2);
	
	// calculating average
	maleAvg = maleScore / maleCount;
	femAvg = femScore / femCount;
	ccAvg = ccScore / ccCount;
	uniAvg = uniScore / uniCount;
	totalAvg = totalScore / totalCount;
	
	
	//outputing averages
	cout << left << setw(45) << "Male Student Average: " << setw(10) << maleAvg << endl;
	cout << left << setw(45) << "Female Student Average:" << setw(10) << femAvg << endl;
	cout << "-----------------------------------------------------"<< endl;
	cout << left << setw(45) << "Community College Student Average: "<< setw(10) << ccAvg << endl;
	cout << left << setw(45) << "University Student Average: " << setw(10) << uniAvg << endl;
	cout << "-----------------------------------------------------"<< endl;
	cout << left << setw(45) << "Total Overall Student Average: " << setw(10) << totalAvg << endl;
	cout << endl << endl;
	
	return 0;

}