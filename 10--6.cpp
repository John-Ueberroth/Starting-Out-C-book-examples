//This program uses the strstr function to search an array.
#include<iostream>
#include<cstring> //for strstr
using namespace std;

int main()
{
	//constants for array lengths 
	const int NUM_PRODS = 5; //number of products
	const int LENGTH = 27;   //string length
	
	//array of products
	char products[NUM_PRODS][LENGTH] =
	{ "TV327 31-inch Television", "CD257 CD Player", "TA677 Answering Machine",
	"CS109 Car Stereo", "PC955 Personal Computer" };

	char lookUp[LENGTH];     //To hold user's input 
	char* strPtr = nullptr;  //To point to the found product 
	int index;               //loop counter 

	//prompt the user for a product number 
	cout << "\tProduct Database\n\n";
	cout << "Enter a product number to search for: ";
	cin.getline(lookUp, LENGTH);

	//search the array for a matching substring 
	for (index = 0; index < NUM_PRODS; index++)
	{
		strPtr = strstr(products[index], lookUp);
		if (strPtr != nullptr)
			break;
	}

	//if a matching substring was found, display the product info 
	if (strPtr != nullptr)
		cout << products[index] << endl;
	else
		cout << "No matching product was found.\n";
	return 0;
}