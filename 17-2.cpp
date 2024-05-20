//This program demonstrates the displayList member function
#include <iostream>
#include "numberList.h"
using namespace std;

int main()
{
	//define a numberList object
	NumberList list;

	//append some values to the list 
	list.appendNode(2.5);
	list.appendNode(7.9);
	list.appendNode(12.6);

	//display the values in the list
	list.displayList();
	return 0;
}
