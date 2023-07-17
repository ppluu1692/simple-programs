#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	unsigned long long sum = 0;
	unsigned long long giaithua = 1;
	int i = 1;
	while (i <= n)
	{
		giaithua *= i;
		sum += giaithua;
		i++;
	}
	cout << "Tong la: " << sum;
	system("pause");
	return 0;
}