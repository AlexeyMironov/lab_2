// lab_2_1_tests.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "../lab_2_1/Calculate.h"

using namespace std;

bool VectorsAreEqual(vector<double> const& x, vector<double> const& y)
{
	return x == y;
}

BOOST_AUTO_TEST_CASE(VectorWithOnePositiveElement)
{
	vector<double> numbers = { -1, 3 };
	Calc(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { 1, -3 }));
}

BOOST_AUTO_TEST_CASE(VectorWithSeveralPositiveElements)
{
	vector<double> numbers = { 4, 5, 2, 3 };
	Calc(numbers);
	BOOST_CHECK(VectorsAreEqual(numbers, { (4 * 2), (5 * 2), (2 * 2), (3 * 2) }));
}