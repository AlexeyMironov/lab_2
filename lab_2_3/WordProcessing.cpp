#include "stdafx.h"
#include "WordProcessing.h"

using namespace std;

map<string, int> WordCount(const string &inputLine)
{
	stringstream lineStream(inputLine);
	string word;
	map<string, int> words;
	while (lineStream >> word)
	{
		transform(word.begin(), word.end(), word.begin(), toupper);
		++words[word];
	}
	return words;
}
