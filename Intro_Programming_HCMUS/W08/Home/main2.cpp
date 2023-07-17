#include "bt2_lib.h"

int main()
{
	cout << "___BAI TAP 2 - WEEK 8___\n";
	cout << "---Nhap vao mot so nguyen va xuat ra chuoi co dau ',' ngan cach 3 chu so---\n\n";
	
	string S;
	cout << "Nhap vao so nguyen N: ";
	getline(cin, S);
	
	Standardize(S);
	bt2(S);
	cout << "Chuoi so sau khi chuyen: " << S << "\n\n";

	system("pause");
	return 0;
}