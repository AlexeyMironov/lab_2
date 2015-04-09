#include "stdafx.h"
#include "WordProcessing.h"

using namespace std;

void WordCount(const string &inputLine, map<string, int> &words)
{
	stringstream lineStream(inputLine);
	string word;
	while (lineStream >> word)
	{
		transform(word.begin(), word.end(), word.begin(), toupper);
		++words[word];
	}
}
