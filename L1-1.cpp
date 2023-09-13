//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name    : PayrollCalculator                                 * 
//*                                                                     * 
//* Written by      : Anthony Cantu                                     * 
//*                                                                     * 
//* Purpose         : This program takes two numbers and maniulates	*
//*		      the numbers several ways. It also takes your	*
//*		      last name entered and the amount of hours you	*
//*		      worked and gives you payroll data.		*
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Change Log:                                                         * 
//*                         Revision                                    * 
//*       Date    Changed  Rel Ver Mod Purpose                          * 
//* 08/21/23      acantu   000.000.000 Initial release of program       * 
//*                                                                     * 
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
#include <iostream>

using namespace std;

const int SECRET = 13;
const double RATE = 12.50;

int main()
{
	int num1, num2, newNum;
	string name;
	double hoursWorked, wages;

	cout << "Anthony Cantu \t L1-1 \t L1-1.exe" << endl;

	cout << "Type two integers seperated by a space" << endl;
	cout << "and then press the enter key: ";

	cin >> num1 >> num2;

	cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << "." << endl;

	newNum = (num1 * 2) + num2;

	cout << "The value of newNum = " << newNum << "." << endl;

	newNum = newNum + SECRET;

	cout << "The updated value of newNum is: " << newNum;

	cout << endl << endl; //Add line break

	cout << "Enter last name: ";
	cin >> name;

	cout << endl; //Add line break

	cout << "Enter a decimal number between 0 and 100: ";
	cin >> hoursWorked;

	wages = hoursWorked * RATE;

	cout << endl; //Add line break

	cout << "Name: " << name << endl;
	cout << "Pay Rate: $" << RATE << endl;
	cout << "Hours Worked: " << hoursWorked << endl;
	cout << "Salary: $" << wages << endl;

	char q;
	cout << "\nPress any key to Exit.";
	cin.ignore(2, '\n');
	cin.get(q);
	return 0;
}
