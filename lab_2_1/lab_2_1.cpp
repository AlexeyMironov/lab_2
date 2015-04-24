// lab_2_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Calculate.h"

using namespace std;

double StringToDouble(const char * str, bool & err)
{
	char * pLastChar = NULL;
	double param = strtod(str, &pLastChar);
	err = ((*str == '\0') || (*pLastChar != '\0'));
	return param;
}

bool ReadData(vector<double> &arrayNumbers)
{
	string inputLine;

	cout << "Enter numbers... ";
	getline(cin, inputLine);

	stringstream lineStream(inputLine);
	string substring;
	while (lineStream >> substring)
	{
		bool err;
		double number = StringToDouble(substring.c_str(), err);
		if (err)
		{
			cout << "Argument (" << substring << ") is not a number" << endl;
			return false;
		}
		arrayNumbers.push_back(number);
	}
	return true;
}

void OutputData(const vector<double> &arrayNumbers)
{
	for (auto arrayElement : arrayNumbers)
	{
		cout << arrayElement << " ";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	vector<double> arrayNumbers;

	if (!ReadData(arrayNumbers))
	{
		system("pause");
		return 1;
	}

	Calc(arrayNumbers);

	sort(arrayNumbers.begin(), arrayNumbers.end());

	OutputData(arrayNumbers);

	system("pause");
	return 0;
}
