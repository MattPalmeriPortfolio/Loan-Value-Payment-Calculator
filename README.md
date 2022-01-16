# Loan-Value-Payment-Calculator

Contents
---------------------
* File Contents
* Introduction
* Algorithm
* Requirements

## File Contents
	
	Calculate_Loan_Value_Payments.cpp (program file containing code)

## Introduction
Book practice project from Problem Solving With C++ Chapter 2. Project 4.
This program finds the face value of a loan and the monthly payments the user needs based on their input of actual monetary need, loan interest rate, and loan repayment period length. Demonstrates ability to create prompts, read inputs, edit, and output resultes in c++.
Written using Microsoft Visual Studio. 

## Algorithm

1. inform user of program's function
		2. program performs in loop, loop must start once without requiring prompt
			2a. initialize variables for interest rate, amount consumer needs, and duration of loan in months - then prompt user to input values for each
				2aa. convert the loan period to years by dividing by 12
			2b. the formula, IN TOTAL, is faceValue = realValue / (1 - (interestRate * loanPeriod))
			2c. find the monthly loan payment by dividing the face value by the loan period
			2d. output face value and monthly loan payment to user
			2e. prompt user whether to run program again

       realValue = faceValue - (faceValue * interestRate * loanPeriod)
	     loanPeriod must be divided by 12 to convert months to years to properly find stuff
       faceValue = realValue + (facevalue * interestRate * loanPeriod)
         
        realValue - faceValue = -(faceValue(interestRate * loanPeriod))
        -faceValue = -(faceValue(interestRate * loanPeriod)) - realValue
        -faceValue / interestRate * loanPeriod = 


## Requirements
No requirements or modules needed for running this program. 
