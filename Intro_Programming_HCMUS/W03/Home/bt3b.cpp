#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	float sum = 1;
	int i = 2;
	while (i <= n)
	{
		sum += 1.0 / ((i - 1) * i);
		i++;
	}
	cout << "Tong la: " << sum;
	system("pause");
	return 0;
}