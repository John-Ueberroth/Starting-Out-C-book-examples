//This program uses two parallel arrays: one for hours worked and 
//one for pay rate.
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 5;  //number of employees
	int hours[NUM_EMPLOYEES];     //holds the hours worked
	double payRate[NUM_EMPLOYEES];//holds the pay rates

	//Input the hours worked and the hourly pay rate 
	cout << "Enter the hours worked by " << NUM_EMPLOYEES
		<< "employees and thier\n"
		<< "hourly pay rates.\n";
	for (int index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout << "Hours worked by employee #" << (index + 1) << ": ";
		cin >> hours[index];
		cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
		cin >> payRate[index];
	}

	//display each employee's gross pay.
	cout << "Here is the gross pay for each employee: \n";
	cout << fixed << showpoint << setprecision(2);
	for (int index = 0; index < NUM_EMPLOYEES; index++)
	{
		double grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay << endl;
	}
	return 0;

}