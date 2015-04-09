// lab_2_2_1_tests.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "../lab_2_2_1/RemoveSpaces.h"

BOOST_AUTO_TEST_CASE(StringProcessing)
{
	BOOST_CHECK_EQUAL(RemoveExtraSpaces("string"), "string");
	BOOST_CHECK_EQUAL(RemoveExtraSpaces(" string"),"string");
	BOOST_CHECK_EQUAL(RemoveExtraSpaces(" string "), "string");
	BOOST_CHECK_EQUAL(RemoveExtraSpaces("        string           "), "string");
	BOOST_CHECK_EQUAL(RemoveExtraSpaces(" string string string "), "string string string");
	BOOST_CHECK_EQUAL(RemoveExtraSpaces("    string           string"), "string string");
	BOOST_CHECK_EQUAL(RemoveExtraSpaces("  string  string            "), "string string");
	BOOST_CHECK_EQUAL(RemoveExtraSpaces("string string       "), "string string");
	BOOST_CHECK_EQUAL(RemoveExtraSpaces(""), "");
	BOOST_CHECK_EQUAL(RemoveExtraSpaces("                "), "");
}
