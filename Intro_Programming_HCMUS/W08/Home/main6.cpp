#include "bt6_lib.h"

int main()
{
	cout << "___BAI TAP 6 - WEEK 8___\n";
	cout << "---Kiem tra xem chuoi nay xuat hien trong chuoi kia bao nhieu lan va tai vi tri nao---\n\n";

	cout << "Nhap chuoi thu nhat: ";
	string s1 = "";
	getline(cin, s1);
	cin.clear();
	fflush(stdin);
	string s2 = "";
	cout << "Nhap chuoi thu hai: ";
	getline(cin, s2);
	cout << endl;
	bt6(s1, s2);

	system("pause");
	return 0;
}