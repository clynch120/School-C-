#include <iostream>

using namespace std;

class Income
{
	double single(int pay)
	{
		double tax = 0;
		int lowestIncome = 8350;
		int secondLowestIncome = 33950;
		int medianIncome = 82250;
		int goodIncome = 171550;
		int greatIncome = 372950;

		if (pay <= lowestIncome)
		{
			tax = pay * 0.10;
		}

		else if (pay <= secondLowestIncome)
		{
			tax = lowestIncome * 0.10 + (pay - lowestIncome) * 0.15;
		}

		else if (pay <= medianIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(pay - secondLowestIncome) * 0.25;
		}

		else if (pay <= goodIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (pay - medianIncome) * 0.28;
		}

		else if (pay <= greatIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (goodIncome - medianIncome) * 0.28 +
				(pay - goodIncome) * 0.33;
		}

		else
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (goodIncome - medianIncome) * 0.28 +
				(greatIncome - goodIncome) * 0.33 + (pay - greatIncome) * 0.35;
		}

		return tax;
	}

	double marriedJoint(int pay)
	{
		double tax = 0;
		int lowestIncome = 16700;
		int secondLowestIncome = 67900;
		int medianIncome = 137050;
		int goodIncome = 208850;
		int greatIncome = 372950;

		if (pay <= lowestIncome)
		{
			tax = pay * 0.10;
		}

		else if (pay <= secondLowestIncome)
		{
			tax = lowestIncome * 0.10 + (pay - lowestIncome) * 0.15;
		}

		else if (pay <= medianIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(pay - secondLowestIncome) * 0.25;
		}

		else if (pay <= goodIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (pay - medianIncome) * 0.28;
		}

		else if (pay <= greatIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (goodIncome - medianIncome) * 0.28 +
				(pay - goodIncome) * 0.33;
		}

		else
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (goodIncome - medianIncome) * 0.28 +
				(greatIncome - goodIncome) * 0.33 + (pay - greatIncome) * 0.35;
		}

		return tax;
	}

	double marriedSeperate(int pay)
	{
		double tax = 0;
		int lowestIncome = 8350;
		int secondLowestIncome = 33950;
		int medianIncome = 68525;
		int goodIncome = 104425;
		int greatIncome = 186475;

		if (pay <= lowestIncome)
		{
			tax = pay * 0.10;
		}

		else if (pay <= secondLowestIncome)
		{
			tax = lowestIncome * 0.10 + (pay - lowestIncome) * 0.15;
		}

		else if (pay <= medianIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(pay - secondLowestIncome) * 0.25;
		}

		else if (pay <= goodIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (pay - medianIncome) * 0.28;
		}

		else if (pay <= greatIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (goodIncome - medianIncome) * 0.28 +
				(pay - goodIncome) * 0.33;
		}

		else
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (goodIncome - medianIncome) * 0.28 +
				(greatIncome - goodIncome) * 0.33 + (pay - greatIncome) * 0.35;
		}

		return tax;
	}

	double headOfHouse(int pay)
	{
		double tax = 0;
		int lowestIncome = 11950;
		int secondLowestIncome = 45500;
		int medianIncome = 117450;
		int goodIncome = 190200;
		int greatIncome = 372950;

		if (pay <= lowestIncome)
		{
			tax = pay * 0.10;
		}

		else if (pay <= secondLowestIncome)
		{
			tax = lowestIncome * 0.10 + (pay - lowestIncome) * 0.15;
		}

		else if (pay <= medianIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(pay - secondLowestIncome) * 0.25;
		}

		else if (pay <= goodIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (pay - medianIncome) * 0.28;
		}

		else if (pay <= greatIncome)
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (goodIncome - medianIncome) * 0.28 +
				(pay - goodIncome) * 0.33;
		}

		else
		{
			tax = lowestIncome * 0.10 + (secondLowestIncome - lowestIncome) * 0.15 +
				(medianIncome - secondLowestIncome) * 0.25 + (goodIncome - medianIncome) * 0.28 +
				(greatIncome - goodIncome) * 0.33 + (pay - greatIncome) * 0.35;
		}

		return tax;
	}
};