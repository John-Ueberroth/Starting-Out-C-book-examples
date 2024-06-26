//This program uses an array of structures.
#include<iostream>
#include<iomanip>
using namespace std;

struct PayInfo
{
	int hours;  //hours worked 
	double payRate; //hourly pay rate 

};

int main()
{
	const int NUM_WORKERS = 3;     //Number of workers 
	PayInfo workers[NUM_WORKERS]; //array of structures 
	int index;                    //loop counter 
	
	//get the employee data
	cout << "Enter the hours worked by " << NUM_WORKERS
		<< " employees and thier hourly rates.\n";
	for (index = 0; index < NUM_WORKERS; index++)
	{
		//get the hours worked by an employee 
		cout << "Hours worked by employee #" << (index + 1);
		cout << ": ";
		cin >> workers[index].hours;

		//get the employee's hourly pay rate.
		cout << "Hourly pay rate for employee #" << (index + 1);
		cout << ": ";
		cin >> workers[index].payRate;
		cout << endl;
		
	}

	//display each employee's gross pay.
	cout <<"Here is the gross pay for each employee: \n";
	cout << fixed << showpoint << setprecision(2);
	for (index = 0; index < NUM_WORKERS; index++)
	{
		double gross;
		gross = workers[index].hours * workers[index].payRate;
		cout << "Employee #" << (index + 1);
		cout << ": $" << gross << endl;
	}
	return 0;

}