#include "bt3_lib.h"

void bt3(string& str, int i, int n)
{
	string tempStr = "";
	int strLen = str.size();

	for (int j = 0; j < i - 1; j++)
	{
		tempStr += str[j];
	}
	for (int j = i + n - 1; j < strLen; j++)
	{
		tempStr += str[j];
	}
	str = tempStr;
}