/* Name: Patrick Roanhouse
Lab 6, Question 2
PCC CS 161

Write a value-returning function, isVowel that returns the value true if a given character is a vowel
and otherwise returns false. Write a program that prompts the user to input a sequence of
characters and outputs the number of vowels. 

*/
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std; 


int vowel(string characters);

int main()
{
	
	string characters = "";
	int vowelNum = 0;
	
	
	cout << "please enter in a set of letters and see how many are vowels:\n";
	getline(cin,characters);
	
	vowelNum = vowel(characters);
	
	cout << "You have " << vowelNum << " vowels in string: \"" << characters << "\" \n";

	
	
 	return 0;
	
}

int vowel(string characters)
{
	int stringSize = 0;
	int vowel = 0;
	int i = 0;
	
	stringSize = characters.length();
		
	for (i = 0; i < stringSize; i++) 
	{
		if ( characters[i] == 'a' || characters[i] == 'e' || characters[i]== 'i' ||characters[i] == 'o' || characters[i] == 'u' || characters[i] == 'A' || characters[i] == 'E' || characters[i] == 'I' || characters[i] == 'O' || characters[i] == 'U')
		{
			vowel++;
		}
	}	
	return vowel;	
}