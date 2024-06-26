//This uses a pointer to display the contents of an array 
#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 8;
	int set[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };
	int* numPtr = nullptr;  //pointer 
	int count;              //counter variable for loops 

	//make numPtr point to the set array
	numPtr = set;
	
	//use the pointer to display the array contents 
	cout << "The numbers in set are: \n";
	for (count = 0; count < SIZE; count++)
	{
		cout << *numPtr << " ";
		numPtr++;

	}
	
	//Display the array contents in reverse order.
	cout << "\nThe numbers in set backward are: \n";
	for (count = 0; count < SIZE; count++)
	{
		numPtr--;
		cout << *numPtr << " ";
	}
	return 0;
}