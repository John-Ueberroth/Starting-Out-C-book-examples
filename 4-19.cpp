//This test scoring program does not accept test scores
//Less than 0 or greater than 100
#include<iostream>
using namespace std;

int main()
{
	//Constants for grade thresholds
	const int A_SCORE = 90,
		B_SCORE = 80,
		C_SCORE = 70,
		D_SCORE = 60,
		MIN_SCORE = 0,         //Min valid score 
		MAX_SCORE = 100;       //Max valid score 

	int testScore; //to hold a numeric test score 

	//get the numeric test score 
	cout << "Enter your numeric test score and I will\n";
	cout << "tell you the letter grade you earned: ";
	cin >> testScore;

	//Validate the input and determine the grade.
	if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
	{
		//determine the letter grade
		if (testScore >= A_SCORE)
			cout << "Your grade is A.\n";
		else if (testScore >= B_SCORE)
			cout << "Your grade is B.\n";
		else if (testScore >= C_SCORE)
			cout << "Your grade is C.\n";
		else if (testScore >= D_SCORE)
			cout << "Your grade is D.\n";
		else
			cout << "Your grade is F.\n";
	}
	else
	{
		//an invalid score was entered
		cout << "That is an invalid score. Run the program\n"
			<< "again and enter a value in the range of\n"
			<< MIN_SCORE << " through " << MAX_SCORE << ".\n";
	}
	return 0;

}