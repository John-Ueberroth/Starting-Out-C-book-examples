//This program demonstrates the IntegerList class
#include<iostream>
#include"IntegerList.h"
using namespace std;

int main()
{
	const int SIZE = 20; 
	IntegerList numbers(SIZE);
	int val, x;

	//store 9's in the list and display an asterisk
	//each time a 9 is successfully stored
	for (x = 0; x < SIZE; x++)
	{
		numbers.setElement(x, 9);
		cout << "* ";
	}
	cout << endl;

	//display the 9's 
	for (x = 0; x < SIZE;x++)
	{
		val = numbers.getElement(x);
		cout << val << " ";
	}
	cout << endl;
	
	//attempt to store a value outside the list's bounds 
	numbers.setElement(50, 9);

	//will this message display? 
	cout << "Element 50 successfully set.\n";
	return 0;
}