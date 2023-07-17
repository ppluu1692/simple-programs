#include "bt5_lib.h"

int main()
{
	cout << "___BAI TAP 5 - WEEK 8___\n";
	cout << "---Sap xep danh sach hoc sinh theo ten va ho---\n\n";

	string str_Name = "";
	string arr_Name[Max];
	int n_Name = 0;
	cout << "Nhap vao danh sach hoc sinh cach nhau boi phim enter, nhap '_' de hoan tat\n";
	getline(cin, str_Name, '_');
	Standardize(str_Name);
	getArrName(str_Name, arr_Name, n_Name);
	sortName(arr_Name, n_Name);

	cout << "\nDanh sach sau khi sap xep la:\n\n";
	for (int i = 0; i < n_Name; i++)
		cout << i+1 << ".\t" << arr_Name[i] << endl;

	system("pause");
	return 0;
}