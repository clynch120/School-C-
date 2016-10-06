#include <iostream>
#include<string>
//#include "Income.cpp"

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

int columns()
{
	int columns = 0;
	string answer = "";
	cout << "How many columns would you liked to display? ";
	cin >> columns;
	if (columns <= 40)
	{
		cout << "You must have 40 columns or more!" << endl;
		return -1;
	}

	else
	{
		cout << "Confirm you entered " << columns << " columns (type Yes or No) ? ";
		cin >> answer;

		if (answer == "Yes")
		{
			for (int i = 0; i < columns; i++)
			{
				cout << "-";
			}
		}

		else if (answer == "No")
		{
			return -1;
		}

		else
		{
			cout << "You must enter a Yes of No" << endl;
			return -1;
		}
	}
	return 0;
}


int main()
{
	hello();

	while (columns() != 0)
	{
		columns();
	}

	return 0;
}