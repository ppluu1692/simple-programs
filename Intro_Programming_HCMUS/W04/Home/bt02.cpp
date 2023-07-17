#include <iostream>
using namespace std;

void nhapSoDuong(int& n);
bool ktSoDoiXung(int n);

int main()
{
	int n = 0;
	nhapSoDuong(n);
	if (ktSoDoiXung(n))
		cout << "n la so doi xung";
	else
		cout << "n khong la so doi xung";
	cout << endl;
	system("pause");
	return 0;
}

void nhapSoDuong(int& n)
{
	do
	{
		cout << "Nhap vao N >= 10: ";
		cin >> n;
	} while (n < 10);
}

bool ktSoDoiXung(int n)
{
	int phandu = 0;
	int soNguoc = 0;
	int temp = n;
	while (temp > 0)
	{
		phandu = temp % 10;
		soNguoc = soNguoc * 10 + phandu;
		temp = temp / 10;
	}
	if (n == soNguoc)
		return true;
	else
		return false;
}