#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	unsigned long long sum = 0;
	unsigned long long giaithua = 1;
	for (int i = 1; i <= n; i++)
	{
		giaithua *= i;
		sum += giaithua;
	}
	cout << "Tong la: " << sum;
	system("pause");
	return 0;
}