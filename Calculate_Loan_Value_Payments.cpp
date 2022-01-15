#include <iostream>
using namespace std; 

//This program finds the face value of a loan and the monthly payments the user needs based on their input of actual monetary need, loan interest rate, and loan repayment period length.

int main(){
	
	// initialize counter for loop
	char prompt;
	// magic formula to display 2 decimal digits
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	// greet user
	cout << "This program will calculate the face value of a loan that you require based on your actual monetary need and other data.\n";
	//begin main program loop
	do
	{
		// initialize variables
		double realValue = 0, interestRate = 0, repaymentPeriod = 0, faceValue = 0, monthlyPayment = 0;
		// get variables from input
		cout << "Please enter the amount of money you actually need.\n";
		cin >> realValue;
		cout << "Please enter the interest rate for the loan, in decimal format\n";
		cin >> interestRate;
		cout << "Please enter the number of months the repayment period will last.\n";
		cin >> repaymentPeriod;
		//convert repaymentPeriod to years
		repaymentPeriod /= 12;
		//determine face value and monthly payments
		faceValue = realValue / (1 - (interestRate * repaymentPeriod)); // this can give a negative and it really hurts my soul and i cant take absolute values of floats so the following line is required
		if (faceValue < 0) faceValue *= -1;
		monthlyPayment = faceValue / (repaymentPeriod * 12);
		//output to user
		cout << "In order to receive $" << realValue << " for a loan with an interest rate of " << interestRate << " and a repayment period of " << repaymentPeriod << " years\n"
			<< "You must take a loan with a face value of $" << faceValue << endl << "and your monthly payments will be $" << monthlyPayment << endl;
		//prompt to continue
		cout << "Would you like to restart with different values? Y to continue, N to end\n";
		cin >> prompt;
	} while (prompt == 'Y');
	cout << "Goodbye!\n";
	return 0;
}

