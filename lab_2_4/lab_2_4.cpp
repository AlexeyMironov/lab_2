// lab_2_4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "PrimeNumbers.h"

using namespace std;

int const maxNumber = 100000000;

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		cout << "Error. No arguments" << endl;
		system("pause");
		return 1;
	}

	int upperBound = atoi(argv[1]);

	if (upperBound > maxNumber)
	{
		cout << "Limit is greater than " << maxNumber << endl;
		return 0;
	}

	set<int> setPrimes = GeneratePrimeNumbersSet(upperBound);

	for (int i : setPrimes)
	{
		cout << i << " ";
	}

	system("pause");
	return 0;
}