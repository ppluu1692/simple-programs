#include <iostream>
#include <cmath>

using namespace std;

long long chuyenNhiPhan(int a);

int main()
{
	int a = 0;
	do
	{
		cout << "Nhap vao a: ";
		cin >> a;
	} while (a < -255 || a>255);
	if (a >= 0)
		cout << "Sau khi chuyen nhi phan: " << chuyenNhiPhan(a) << endl;
	else
		cout << "Sau khi chuyen nhi phan 16 bits: " << chuyenNhiPhan(a) << endl;

	system("pause");
	return 0;
}

long long chuyenNhiPhan(int a)
{
	long long result = 0;
	if (a == 0)
		return result;
	if (a > 0)
	{
		int i = 0;
		while (a > 0)
		{
			result += pow(10, i) * (a % 2);
			a = a / 2;
			i++;
		}
	}
	else return chuyenNhiPhan(65536 + a);

	return result;
}