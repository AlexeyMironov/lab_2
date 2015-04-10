// lab_2_3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "WordProcessing.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus_rus.866");
	string inputLine;
	cout << "Enter string...    ";
	getline(cin, inputLine);

	map<string, int> words = WordCount(inputLine);

	cout << "__________________________________________" << endl;

	for (auto item : words)
	{
		cout << item.first << " : " << item.second << endl;
	}

	system("pause");
	return 0;
}
