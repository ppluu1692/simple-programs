#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	long sum = 0;
	int i = 1;
	while (i <= n)
	{
		sum += i * i * i;
		i++;
	}
	cout << "Tong la: " << sum;
	system("pause");
	return 0;
}