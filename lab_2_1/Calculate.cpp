#include "stdafx.h"
#include "Calculate.h"

using namespace std;

void Calc(vector<double> &arrayNumbers)
{
	if (arrayNumbers.size() == 0)
		return;

	const double minElement = *min_element(arrayNumbers.begin(), arrayNumbers.end());

	for (vector<double>::iterator it = arrayNumbers.begin(); it != arrayNumbers.end(); ++it)
	{
		*it *= minElement;
	}
}
