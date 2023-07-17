#include "bt1_lib.h"

void bt1a(string str)
{
	int quantity[4] = { 0 };
	for (char Ch : str)
	{
		if (Ch == ' ')
			quantity[0]++;
		else if (isdigit(Ch))
			quantity[1]++;
		else if (isalpha(Ch))
			quantity[2]++;
		else if (Ch > ' ' && Ch < 127)
			quantity[3]++;
	}
	printf("So luong khoang trang la:  %d\n", quantity[0]);
	printf("So luong chu so la:        %d\n", quantity[1]);
	printf("So luong chu cai latin la: %d\n", quantity[2]);
	printf("So luong ki tu khac la:    %d\n\n", quantity[3]);
}

void bt1b(string str)
{
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] == ' ' && str[i - 1] == ' ')
		{
			str.erase(i - 1, 1);
			i--;
		}
	}
	while (str[0] == ' ')
	{
		str.erase(0, 1);
	}
	while (str[str.size() - 1] == ' ')
	{
		str.erase(str.size() - 1, 1);
	}

	int count = 0;
	for (char Ch : str)
	{
		if (Ch == ' ')
			count++;
	}
	printf("So tu trong chuoi la: %d\n\n", count + 1);
}

void bt1c(string str)
{
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] == ' ' && str[i - 1] == ' ')
		{
			str.erase(i - 1, 1);
			i--;
		}
	}
	while (str[0] == ' ')
	{
		str.erase(0, 1);
	}
	while (str[str.size() - 1] == ' ')
	{
		str.erase(str.size() - 1, 1);
	}

	str.insert(str.end(), ' ');
	string word = "";
	int maxLength = 0;
	int minLength = INT_MAX;
	bool flag = false;
	
	for (char Ch : str)
	{
		if (Ch != ' ')
		{
			word += Ch;
		}
		else
		{
			if (maxLength < word.size())
				maxLength = word.size();
			if (minLength > word.size() && word.size() != 0)
				minLength = word.size();
			word = "";
		}
	}
	cout << "Tu dai nhat la:  ";
	for (char Ch : str)
	{
		if (Ch != ' ')
		{
			word += Ch;
		}
		else
		{
			if (word.size() == maxLength)
				cout << word << '\t';
			word = "";
		}
	}
	cout << "\nTu ngan nhat la: ";
	for (char Ch : str)
	{
		if (Ch != ' ')
		{
			word += Ch;
		}
		else
		{
			if (word.size() == minLength)
				cout << word << '\t';
			word = "";
		}
	}
	cout << "\n\n";
}

void bt1d(string& str)
{
	for (char& Ch : str)
	{
		Ch = tolower(Ch);
	}
	str[0] = toupper(str[0]);
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
			str[i] = toupper(str[i]);
	}
	cout << "Chuoi sau khi bien doi: " << str << "\n\n";
}