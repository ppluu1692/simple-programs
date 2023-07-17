#include <iostream>
using namespace std;

void nhapSoDuong(int& n);
bool ktSoHoanHao(int n);

int main()
{
	int n = 0;
	nhapSoDuong(n);
	if (ktSoHoanHao(n))
		cout << "n la so hoan hao";
	else
		cout << "n khong la so hoan hao";
	cout << endl;
	system("pause");
	return 0;
}
void nhapSoDuong(int& n)
{
	do
	{
		cout << "Nhap vao N > 0: ";
		cin >> n;
	} while (n < 1);
}

bool ktSoHoanHao(int n)
{
	int tongUoc = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			tongUoc += i;
	}
	if (tongUoc == n)
		return true;
	else
		return false;
}