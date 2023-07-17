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
	int i = 0;
	while (i <= n)
	{
		sum += pow(x, i);
		i++;
	}
	cout << "Tong la: " << sum;
	system("pause");
	return 0;
}