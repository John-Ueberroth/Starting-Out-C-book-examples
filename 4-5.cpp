//This program averages 3 test scores. The if statement 
//uses the = operator, but == operator was intended 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int score1, score2, score3; //to hold three test scores 
	double average;             //to hold the average score 

	//Get three test scores
	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;

	//calculate and display the average score
	average = (score1 + score2 + score3) / 3.0;
	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is " << average << endl;

	//Our intention is to congragulate the user
	//for having a perfect score. But, this dosent work.
	if (average = 100)
		cout << "congratulations! Thats a perfect score!\n";
	return 0;

}