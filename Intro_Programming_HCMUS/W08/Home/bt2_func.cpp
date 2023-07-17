#include "bt2_lib.h"

void Standardize(string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]))
		{
			str.erase(i, 1);
			i--;
		}
	}
	while (str[0] == '0')
	{
		str.erase(0, 1);
	}
}

void bt2(string& str)
{
	int strLen = str.size();
	for (int i = 0; i < strLen - 1; i++)
	{
		if (i % 3 == 2)
		{
			str.insert(strLen - i - 1, ",");
			i++;
		}
	}
}
