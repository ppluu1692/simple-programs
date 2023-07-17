#include <iostream>
#include <cmath>
using namespace std;

#define MAX 1000

void nhapSoDuong(long long& n);

bool ktSoHoanChinh(long long n);

int main()
{
	long long n = 0;
	nhapSoDuong(n);
	if (ktSoHoanChinh(n))
	{
		cout << "N la so hoan chinh";
	}
	else
		cout << "N khong la so hoan chinh";

	cout << endl;
	system("pause");
	return 0;
}

void nhapSoDuong(long long& n)
{
	do
	{
		cout << "Nhap vao N > 0: ";
		cin >> n;
	} while (n <= 0);
}

bool ktSoHoanChinh(long long n)
{
	long long tong = 0;
	long long tich = 1;
	for (long long i = 1; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			tong += i;
			tich *= i;
		}
	}
	if ((tong == tich) && (tong == n))
		return true;
	else
		return false;
}

