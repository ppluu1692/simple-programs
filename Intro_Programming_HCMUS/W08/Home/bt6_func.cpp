#include "bt6_lib.h"

void bt6(string str1, string str2)
{
	bool isSwap = false;
	if (str2.size() > str1.size())
	{
		swap(str1, str2);
		isSwap = true;
	}

	int length1 = str1.size();
	int length2 = str2.size();
	int count = 0;
	int index[200];

	for (int i = 0; i <= length1 - length2; i++)
	{
		if (str1[i] == str2[0])
		{
			bool flag = true;
			for (int j = 1; j < length2; j++)
			{
				if (str1[i + j] != str2[j])
					flag = false;
			}
			if (flag)
			{
				index[count] = i;
				count++;
			}
		}
	}

	if (count == 0)
		printf("Hai chuoi khong chua lan nhau\n\n");
	else
	{
		if (isSwap)
			printf("Chuoi thu nhat xuat hien trong chuoi thu hai %d lan tai vi tri thu ", count);
		else
			printf("Chuoi thu hai xuat hien trong chuoi thu nhat %d lan tai vi tri thu ", count);
		for (int i = 0; i < count; i++)
			cout << index[i]+1 << ' ';
		cout << "\n\n";
	}
	cout << endl;
}