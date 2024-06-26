//This program allows the user to edit a specific record
#include<iostream>
#include<fstream>
using namespace std;

const int DESC_SIZE = 31;   //description size

//declaration of InventoryItem structure
struct InventoryItem
{
	char desc[DESC_SIZE];
	int qty;
	double price;
};

int main()
{
	InventoryItem record;   //to hold an inventory record
	long recNum;            //to hold a record number 

	//open the file in binary mode for input and output 
	fstream inventory("Inventory.dat", ios::in | ios::out | ios::binary);

	//get the record number of the desired record 
	cout << "Which record do you want to edit? ";
	cin >> recNum;

	//move to the record and read it 
	inventory.seekg(recNum * sizeof(record), ios::beg);
	inventory.read(reinterpret_cast<char*> (&record), sizeof(record));

	//display the record contents 
	cout << "Description: ";
	cout << record.desc << endl;
	cout << "Quantity: ";
	cout << record.qty << endl;
	cout << "Price: ";
	cout << record.price << endl;
	

	//get the new record data 
	cout << "Enter the new data: \n";
	cout << "Description: ";
	cin.ignore();
	cin.getline(record.desc, DESC_SIZE);
	cout << "Quantity: ";
	cout << record.qty;
	cout << "Price: ";
	cin >> record.price;

	//move back to the beginning of this record's position
	inventory.seekp(recNum * sizeof(record), ios::beg);

	//write the new record over the current record
	inventory.write(reinterpret_cast<char*> (&record), sizeof(record));

	//close the file 
	inventory.close();
	return 0;
}