#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	float sum = 1;
	for (int i = 2; i <= n; i++)
		sum += 1.0 / ((i - 1) * i);
	cout << "Tong la: " << sum;
	system("pause");
	return 0;
}