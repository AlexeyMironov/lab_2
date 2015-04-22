#include "stdafx.h"
#include <windows.h>
#include <cmath>
#include <vector>
#include <set>
#include "PrimeNumbers.h"

using namespace std;

bool flag;

set<int> GeneratePrimeNumbersSet(int upperBound)
{
	set<int> resultSet;
	if (upperBound > 1)
	{
		vector<bool> sieve(upperBound + 1, false);
		const int upperBoundSqrt = sqrt(upperBound);
		sieve[0] = true;
		sieve[1] = true;
		int k = 0;
		int i = 2; //������ ������� �����
		while (i <= upperBoundSqrt)
		{
			k = i;
			while (k*i <= upperBound)
			{
				sieve[k*i] = true;
				k++;
			}
			//����� ������ �������� �����
			i++;
			while ((sieve[i]) && (i <= upperBoundSqrt))
			{
				i++;
			}
		}
		//��� ������� ����� �������� � ���������:
		for (int j = 0; j < upperBound + 1; j++)
		{
			if (!sieve[j])
				resultSet.insert(resultSet.end(), j);
		}
	}
	return resultSet;;//������� ��������� � ������������� �����������

}
