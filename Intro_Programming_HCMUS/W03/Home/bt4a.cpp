#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	float x = 0;
	cout << "Nhap vao x: ";
	cin >> x;
	cout << "Nhap vao N: ";
	cin >> n;
	float sum = 0;
	for (int i = 0; i <= n; i++)
		sum += pow(x, i);
	cout << "Tong la: " << sum;
	system("pause");
	return 0;
}