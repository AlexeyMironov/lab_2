#include "stdafx.h"
#include "RemoveSpaces.h"

using namespace std;

string RemoveExtraSpaces(string const &arg)
{
	string result;
	bool isSpaces = false;

	for (unsigned int i = 0; i < arg.size(); ++i)
	{
		if (arg[i] != ' ')
		{
			result += arg[i];
			isSpaces = true;
		}
		if (isSpaces && arg[i] == ' ')
		{
			result += arg[i];
			isSpaces = false;
		}
	}

	if (result.size() == 0)
		return result;

	if (result.back() == ' ')
		result.pop_back();

	return result;
}