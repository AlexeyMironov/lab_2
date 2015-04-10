// lab_2_3_tests.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//#include <string>

#include "../lab_2_3/WordProcessing.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(WordCountTest)

BOOST_AUTO_TEST_CASE(OneWordProcessing)
{
	map<string, int> result, expectedResult;
	expectedResult["LINE"] = 1;
	result = WordCount(" Line \t\t\t \n\n\n ");
	BOOST_CHECK_EQUAL(expectedResult == result, true);
}

BOOST_AUTO_TEST_CASE(WordProcessing)
{
	map<string, int> result, expectedResult;
	expectedResult["LINE"] = 6;
	expectedResult["LINES"] = 1;
	result = WordCount("    line  Line LINE lIne LiNe liNE  lines");
	BOOST_CHECK_EQUAL(expectedResult == result, true);
}

BOOST_AUTO_TEST_CASE(EmptyStringProcessing)
{
	map<string, int> result;
	result = WordCount(" \t\t\t \n\n\n ");
	BOOST_CHECK_EQUAL(result.empty(), true);
}

BOOST_AUTO_TEST_SUITE_END()