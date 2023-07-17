#include <iostream>
using namespace std;

int main()
{
	char ch = ' ';
	cout << "Nhap vao mot chu cai: ";
	cin >> ch;
	if (ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
		cout << ch << endl;
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
		cout << ch;
	}
	else
		cout << "Ki tu vua nhap khong phai la mot chu cai" << endl;
	cout << endl;
	system("pause");
	return 0;
}