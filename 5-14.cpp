//This program averages test scores. It asks the user for the 
//number of students and the number of test scores per student. 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int numStudents,      //number of students
		numTests;         //number of tests per student
	double total,         //accumulator for total scores
		average;          //average test score 

	//set the numeric output
	cout << fixed << showpoint << setprecision(1);

	//get the number of students
	cout << "This program averages test scores.\n";
	cout << "For how many students do you have scores? ";
	cin >> numStudents;

	//get the number of test scores per student 
	cout << "How many test scores does each student have? ";
	cin >> numTests;

	//determine each student's average score.
	for (int student = 1; student <= numStudents; student++)
	{
		total = 0;       //intialize the accumulator
		for (int test = 1; test <= numTests; test++)
		{
			double score;
			cout << "Enter score " << test << " for ";
			cout << "student " << student << ": ";
			cin >> score;
			total += score;
		}
		average = total / numTests;
		cout << "The average score for student " << student;
		cout << " is " << average << ".\n\n";
	}
	return 0;
}

