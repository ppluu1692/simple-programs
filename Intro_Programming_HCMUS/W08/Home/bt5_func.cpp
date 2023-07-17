#include "bt5_lib.h"

void Standardize(string& str)
{
	str.insert(str.end(), ' ');
	for (int i = 0; i < str.size() - 1; i++)
	{
		if (str[i] == 10)
		{
			if (str[i + 1] == 10)
			{
				str.erase(i, 1);
				i--;
			}
			if (str[i + 1] == ' ')
			{
				str.erase(i + 1, 1);
				i--;
			}
		}
		else if (str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == 10))
		{
			str.erase(i, 1);
			i--;
		}

	}
	while (str[0] == ' ' || str[0] == 10)
	{
		str.erase(0, 1);
	}
	while (str[str.size() - 1] == ' ' || str[str.size() - 1] == 10)
	{
		str.erase(str.size() - 1, 1);
	}
}

void getArrName(string str_Name, string arr_Name[], int& n_Name)
{
	int strNameLen = str_Name.size();
	string Name = "";
	n_Name = 0;
	for (int i = 0; i < strNameLen; i++)
	{
		if (str_Name[i] != '\n')
			Name += str_Name[i];
		else
		{
			if (Name.size() > 0)
			{
				arr_Name[n_Name] = Name;
				n_Name++;
				Name = "";
			}
		}
	}
	if (Name.size() > 0)
	{
		arr_Name[n_Name] = Name;
		n_Name++;
		Name = "";
	}
}

void sortName(string arr_Name[], int n_Name)
{
	string arr_NametoSort[Max];
	for (int iName = 0; iName < n_Name; iName++)
	{
		string Name = arr_Name[iName];
		int ispace = Name.size();
		for (; ispace > 0; ispace--)
		{
			if (Name[ispace] == ' ')
				break;
		}


		for (int i = ispace + 1; i < Name.size(); i++)
		{
			arr_NametoSort[iName] += tolower(Name[i]);
		}
		arr_NametoSort[iName] += ' ';
		for (int i = 0; i < ispace; i++)
		{
			arr_NametoSort[iName] += tolower(Name[i]);
		}

	}

	for (int i = 0; i < n_Name; i++)
	{
		string Min = arr_NametoSort[i];
		int idMin = i;
		for (int j = i; j < n_Name; j++)
		{
			if (Min > arr_NametoSort[j])
			{
				Min = arr_NametoSort[j];
				idMin = j;
			}
		}
		swap(arr_NametoSort[i], arr_NametoSort[idMin]);
		swap(arr_Name[i], arr_Name[idMin]);
	}
}