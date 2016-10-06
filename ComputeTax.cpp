#include <iostream>
#include <string>


using namespace std;

class ComputeTax
{
	int hello()
	{
		cout << "+--------------------------------------------+" << endl;
		cout << "|                                            |" << endl;
		cout << "|     Highline College C++ Assignment 2      |" << endl;
		cout << "|        Fake income tax calculator          |" << endl;
		cout << "|     Copyright (C) 2016 Charles Lynch       |" << endl;
		cout << "|                                            |" << endl;
		cout << "+--------------------------------------------+" << endl;
	}

	int columns()
	{
		int columns = 0;
		string answer = "";
		cout << "How many columns would you liked to display?";
		cin >> columns;
		if (columns <= 40)
		{
			cout << "You must have 40 columns or more!";
		}

		else
		{
			cout << "Confirm you entered " << columns << " columns (type Yes or No) ?";
			cin >> answer;

			if (answer == "Yes")
			{
				for (int i = 0; i < columns; i++)
				{
					cout << "-";
				}
			}

			else
			{
				return -1;
			}	
		}
		return 0;
	}

	int main()
	{
		hello();
		if (columns() == 0)
		{

		}

		else
		{
			columns();
		}
	
		return 0;
	}
};