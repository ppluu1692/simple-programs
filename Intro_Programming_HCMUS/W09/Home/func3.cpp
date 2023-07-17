#include "lib3.h"


void input(Student list_Std[], int& n)
{
	cout << "Input number of students: ";
	cin >> n;
	std::cin.ignore(1000, '\n');
	for (int i = 0; i < n; i++)
	{
		cout << "Student " << i + 1 << ":\n";
		cout << "Enter Name: ";
		getline(cin, list_Std[i].Name);
		cout << "Enter Point: ";
		cin >> list_Std[i].Point;
		std::cin.ignore(1000, '\n');
	}
	cout << "\n\n";
}
void output(Student list_Std[], int n)
{
	cout << "List of " << n << " students:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Student " << i + 1 << ":\n";
		cout << "Name: " << list_Std[i].Name << endl;
		cout << "Point: " << list_Std[i].Point << endl;
		cout << endl;
	}
	cout << "\n\n";
}

string reverserStr(string s) {
	int length = s.length();
	string temp;
	for (int i = length - 1; i >= 0; i--) {
		temp.push_back(s[i]);
	}
	return temp;
}

void getStdName(Student list_Std[], int n, string Std_name[])
{
	for (int i = 0; i < n; i++)
	{
		while (list_Std[i].Name[list_Std[i].Name.size() - 1] == ' ')
			list_Std[i].Name.pop_back();
		string Name = "";
		int len = list_Std[i].Name.size();
		for (int j = len - 1; j >= 0; j--)
		{
			if (list_Std[i].Name[j] == ' ')
				break;
			Name += list_Std[i].Name[j];
		}
		Name = reverserStr(Name);
		Name[0] = toupper(Name[0]);
		Std_name[i] = Name;
	}
}

void sortList(string Std_name[], string sort_name[], int n)
{
	string temp_name[MAX];
	for (int i = 0; i < n; i++)
	{
		temp_name[i] = Std_name[i];
	}
	for (int i = 0; i < n; i++)
	{
		string MaxName = temp_name[0];
		int imaxname = 0;
		for (int j = 0; j < n; j++)
		{
			if (temp_name[j] > MaxName)
			{
				MaxName = Std_name[j];
				imaxname = j;
			}
		}
		sort_name[n - i - 1] = Std_name[imaxname];
		temp_name[imaxname] = "";
	}
}

void findDifName(string std_name[], int n, string difName[], int& n_difName)
{
	n_difName = 0;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = i; j < n; j++)
		{
			if (std_name[i] == std_name[j])
				count++;
		}
		if (count == 1)
			difName[n_difName++] = std_name[i];
	}
}

void reward(Student list_Std[], int n, string top[3])
{
	top[0] = "";
	top[1] = "";
	top[2] = "";
	float first = -1.0;
	float second = -1.0;
	float third = -1.0;
	int ifirst = -1;
	int isecond = -1;
	int ithird = -1;
	for (int i = 0; i < n; i++)
	{
		if (first < list_Std[i].Point)
		{
			first = list_Std[i].Point;
			ifirst = i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (second < list_Std[i].Point && i != ifirst)
		{
			second = list_Std[i].Point;
			isecond = i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (third < list_Std[i].Point && i != ifirst && i != isecond)
		{
			third = list_Std[i].Point;
			ithird = i;
		}
	}
	if (ifirst >= 0)
		top[0] = list_Std[ifirst].Name;
	else
		top[0] = "";
	if (isecond >= 0)
		top[1] = list_Std[isecond].Name;
	else
		top[1] = "";
	if (ithird >= 0)
		top[2] = list_Std[ithird].Name;
	else
		top[2] = "";
}