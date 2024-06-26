//This program demonstrates the recursive binarySearch function 
#include <iostream>
using namespace std;

//Function prototype 
int binarySearch(int[], int, int, int);

const int SIZE = 20; //array size 

int main()
{
	//define an array of employee ID numbers 
	int tests[SIZE] = { 101, 142, 147, 189, 199, 207, 222,
					 234, 289, 296, 310, 319, 388, 394,
					 417, 429, 447, 521, 536, 600 };
	int empID;       //to hold an ID number 
	int results;     //to hold the search results

	//get an employee ID number to search for 
	cout << "Enter the Employee ID you wish to search for: ";
	cin >> empID;

	//search for the ID number in the array 
	results = binarySearch(tests, 0, SIZE - 1, empID);

	//display the results of the search 
	if (results == -1)
		cout << "That number does not exist in the array.\n";
	else
	{
		cout << "That ID is found at element " << results;
		cout << " in the array\n";

	}
	return 0;
}
//************************************************************************
//The binarySearch function performs a recursive binary search 
//on a range of elements of an integer array passed into the 
//parameter array. The parameter first holds the subscript of 
//the range's starting element, and last holds the subscript 
//of the range's last element. The parameter value holds the 
//search vale. If the search value is found, its array
//subscript is returned. Otherwise, -1 is returned indicating 
//the value was not in the array.
//************************************************************************

int binarySearch(int array[], int first, int last, int value)
{
	int middle;   //midpoint of search 

	if (first > last)
		return -1;
	middle = (first + last) / 2;
	if (array[middle] == value)
		return middle;
	if (array[middle] < value)
		return binarySearch(array, middle + 1, last, value);
	else
		return binarySearch(array, first, middle - 1, value);
}