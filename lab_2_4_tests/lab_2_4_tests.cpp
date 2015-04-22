// lab_2_4_tests.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "../lab_2_4/PrimeNumbers.h"


using namespace std;

BOOST_AUTO_TEST_CASE(NoPrimeNumbers)
{
	set<int> setPrimes = GeneratePrimeNumbersSet(1);
	BOOST_CHECK(setPrimes.size() == 0);
}

BOOST_AUTO_TEST_CASE(NegativePrimeNumbers)
{
	set<int> setPrimes = GeneratePrimeNumbersSet(-1);
	BOOST_CHECK(setPrimes.size() == 0);
}

BOOST_AUTO_TEST_CASE(SomePrimeNumbers)
{
	set<int> setPrimes = GeneratePrimeNumbersSet(15);
	set<int> rightSet = { 2, 3, 5, 7, 11, 13 };
	BOOST_CHECK(setPrimes == rightSet);
}