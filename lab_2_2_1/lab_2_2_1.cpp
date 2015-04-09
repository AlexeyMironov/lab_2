// lab_2_2_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "RemoveSpaces.h"

using namespace std;

int main(int argc, char *argv[])
{
	string inputLine;
	cout << "Enter the string...   ";

	while (getline(cin, inputLine) && inputLine != "")
	{
		cout << endl << RemoveExtraSpaces(inputLine) << endl << "____________________________________________" << endl;
		cout << "Enter the string...   ";
	}

	//system("pause");
	return 0;
}
