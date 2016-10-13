#include <iostream>
#include <iomanip>
#include<string>

using namespace std;

int hello()
{
	cout << "+--------------------------------------------+" << endl;
	cout << "|                                            |" << endl;
	cout << "|     Highline College C++ Assignment 2      |" << endl;
	cout << "|        Fake income tax calculator          |" << endl;
	cout << "|     Copyright (C) 2016 Charles Lynch       |" << endl;
	cout << "|                                            |" << endl;
	cout << "+--------------------------------------------+" << endl;
	return 0;
}

double taxable(int pay)
{
	double tax = 0;
	int lowestIncome = 8925;
	int secondLowestIncome = 36250;
	int medianIncome = 87850;
	int goodIncome = 183250;
	int greatIncome = 398350;
	int awesomeIncome = 400000;

	if (pay <= lowestIncome)
	{
		tax = pay * 0.10;
	}

	else if (pay <= secondLowestIncome)
	{
		tax = 892.5 + (pay * 0.15);
	}

	else if (pay <= medianIncome)
	{
		tax = 4991.25 + (pay * 0.25);
	}

	else if (pay <= goodIncome)
	{
		tax = 17891.25 + (pay * 0.28);
	}

	else if (pay <= greatIncome)
	{
		tax = 44603.25 + (pay * 0.33);
	}

	else if (pay <= awesomeIncome)
	{
		tax = 115586.25 + (pay * 0.35);
	}

	else
	{
		tax = 116163.75 + (pay * 0.396);
	}
	return tax;
}

int howManyColumns()
{
	string answer = "";
	int column = 0;

	while (true)
	{
		cout << "How many columns would you liked to display? ";
		cin >> column;
		
		if (column == 0)
		{
			cout << "You can not enter a 0!" << endl;
		}

		else if (column < 0)
		{
			cout << "You can not enter a negative number of columns!" << endl;
		}

		else if (column < 40)
		{
			cout << "You must enter at least 40 columns!" << endl;
		}

		else if (column >= 40)
		{
			cout << "Confirm you entered " << column << " columns (type yes or no) ? ";
			cin >> answer;

			// for loop converts answer to lowercase
			for (int i = 0; i < answer.length(); i++)
			{
				answer.at(i) = (char)tolower(answer.at(i));
			}

			if (answer == "yes")
			{
				return column;
			}
			else
			{
				continue;
			}
		}
	}
}

double getInfo(int width, int number, string type)
{
	double info = 0.0;
	int columns = width - type.length();
	string answer = "";

	while (true)
	{
		cout << "[" << number << "] " << type << setfill('.') << setw(columns) <<
			"[-1 to exit] $";
		cin >> info;

		if (info == -1)
		{
			cout << "Are you sure you want to quit? (type yes or no) ";
			cin >> answer;

			if (answer == "yes")
			{
				cout << "Goodbye" << endl;
				exit(1); // ends program
			}
			continue;
		}
		else if (info == 0)
		{
			cout << "You can not enter a 0!" << endl;
			
		}

		else if (info < 0)
		{
			cout << "You can not enter a negative number! " << endl;
			continue;
		}

		else if (type == "Wages" && info > 2000000)
		{
			cout << "You do not need this program, hire an accountant. Try again. " << endl;
			continue;
		}

		else if (type == "Losses" && info > 100000)
		{
			cout << "You can only claim 100,000 in Losses" << endl;
			continue;
		}

		return info;
	}
}

int main()
{
	hello();

	int columns = howManyColumns();
	cout << "\nPlease enter your income information:\n" << endl;

	double wages = getInfo(columns, 1, "Wages");
	double dividends = getInfo(columns, 2, "Dividends");
	double losses = getInfo(columns, 3, "Losses");
	double credits = getInfo(columns, 4, "Credits");

	double adjustedLosses = losses * 0.35;
	double taxableAmount = wages + dividends + adjustedLosses;
	string haveCredits = "\n";

	if (taxableAmount < 50000)
	{
		taxableAmount = taxableAmount - credits;
	}
	else
	{
		credits = 0;
		haveCredits = " (You made to much to have any credits!) \n" ;
	}
	double tax = taxable(taxableAmount);
	double taxAfterCredits = tax - credits;

	cout << "\n Tax computation: \n" << endl;

	cout << "Wages and Dividends : $" << fixed << setprecision(2) << setw(15) << setfill(' ') << right << wages + dividends << endl;
	cout << "Adjusted Losses     : $" << setw(15) << right << adjustedLosses << endl;
	cout << "Taxable Amount      : $" << setw(15) << right << taxableAmount << endl;
	cout << "Tax on Amount       : $" << setw(15) << right << tax <<  endl;
	cout << "Credits             : $" << setw(15) << right << credits << haveCredits << endl;

	cout << "Tax after Credits   : $" << setw(15) << right << taxAfterCredits << endl;

	return 0;
}