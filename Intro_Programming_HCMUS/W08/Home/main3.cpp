#include "bt3_lib.h"

int main()
{
	cout << "___BAI TAP 3 - WEEK 8___\n";
	cout << "---Xoa n ki tu tai vi tri i trong chuoi---\n\n";

	cout << "Nhap chuoi: ";
	string s = "";
	getline(cin, s);
	int i, n;
	cout << "Nhap i, n: ";
	cin >> i >> n;

	if (i<1 || n < 0)
		cout << "i hoac n khong hop le\n";
	else
	{
		bt3(s, i, n);
		cout << "\nChuoi sau khi xoa: " << s << "\n\n";
	}

	system("pause");
	return 0;

}