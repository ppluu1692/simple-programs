#include "bt4_lib.h"

int bt4(string str, char C)
{
	int count = 0;
	int strLen = str.size();
	for (int i = 0; i < strLen; i++)
	{
		if (str[i] == C)
			count++;
	}
	return count;
}