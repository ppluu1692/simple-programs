#include "lib3.h"

int main()
{
	Student Std_list[MAX];
	int n_std = 0;
	input(Std_list, n_std);
	output(Std_list, n_std);
	string std_name[MAX];
	string sort_name[MAX];
	getStdName(Std_list,n_std, std_name);
	string top3[3];
	sortList(std_name, sort_name, n_std);
	string difName[MAX];
	int n_difname = 0;
	findDifName(std_name, n_std, difName, n_difname);
	reward(Std_list, n_std, top3);
	cout << "\n\n\nResult of exercise 1:\n";
	for (int i = 0; i < n_std; i++)
	{
		cout << std_name[i] << endl;
	}
	cout << "\n\n\nResult of exercise 2:\n";
	for (int i = 0; i < n_difname; i++)
	{
		cout << difName[i] << endl;
	}
	cout << "\n\n\nResult of exercise 3:\n";
	for (int i = 0; i < 3; i++)
	{
		cout << top3[i] << endl;
	}
	system("pause");
	return 0;

}