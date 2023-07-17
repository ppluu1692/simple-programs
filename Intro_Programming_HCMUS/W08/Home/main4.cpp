#include "bt4_lib.h"

int main()
{
	cout << "___BAI TAP 4 - WEEK 8___\n";
	cout << "---Dem so lan xuat hien cua ki tu C trong chuoi S---\n\n";

	cout << "Nhap chuoi: ";
	string s = "";
	getline(cin, s);
	cin.clear();
	fflush(stdin);
	char c = ' ';
	cout << "Nhap vao ki tu C: ";
	cin >> c;
	cout << "\nSo lan xuat hien cua C la " << bt4(s, c) << "\n\n";

	system("pause");
	return 0;

}