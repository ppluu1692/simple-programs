#include "bt1_lib.h"

int main()
{
	cout << "___BAI TAP 1 - WEEK 8___\n";
	cout << "---Thuc hien mot so thao tac voi chuoi---\n\n";

	string str = "";
	cout << "Nhap chuoi: ";
	getline(cin, str);
	cout << endl;
	bool flag = false;

	bt1a(str);

	for (char Ch : str)
	{
		if (Ch > ' ')
			flag = true;
	}

	if (flag)
	{
		bt1b(str);
		bt1c(str);
		bt1d(str);
	}
	else
		cout << "Khong co tu nao trong chuoi" << endl;

	system("pause");
	return 0;
}