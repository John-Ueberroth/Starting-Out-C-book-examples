//This program has three function: main, first, and second.
#include<iostream>
using namespace std;

//*************************************************
//definiton of function first
//This function displays a message 
//*************************************************

void first()
{
	cout << "I am now inside the function first.\n";

}

//**************************************************
//Definition of function second
//This function displays a message 
//**************************************************

void second()
{
	cout << "I am now inside function second.\n";
}

//**************************************************
//function main 
//**************************************************

int main()
{
	cout << "I am starting in function main.\n";
	first(); //call function first 
	second(); //call function second
	cout << "Back in function main again.\n";
	return 0;
}


