/* Name: Patrick Roanhouse
Lab 8, question 1
PCC CS 161

Write a C++ function, smallestIndex, that takes as parameters an int array and its size and returns the index of the smallest element in the array. Also write a program to test your function.
*/

#include <iostream>


using namespace std; 

int smallestIndex(int list[], int size);

int main()
{
	int size = 6;
	int list[6] = {10,4,9,2,11,15};

	cout << "The first occurrence of the smallest element in the array with numbers ["; 
	for (int i = 0; i < size ; i++)
	{
		cout << list[i];
		if (i != size -1)
		{		
			cout <<",";	 
		}	
	}
	cout << "] is at index " << smallestIndex(list, size) << " and is the value " << list[smallestIndex(list, size)] << "." << endl;

	return 0;
}

int smallestIndex(int list[], int size)
{
	int counter;
	int minIndex = 0;
	for (counter = 1; counter < size; counter++)
		if (list[minIndex] > list[counter])
			minIndex = counter;
	return minIndex;

}