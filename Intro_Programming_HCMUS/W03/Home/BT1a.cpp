#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	long sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i * i * i;
	cout << "Tong la: " << sum;
	system("pause");
	return 0;
}