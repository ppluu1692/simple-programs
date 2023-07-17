#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	float sum = 0;
	int i = 1;
	while (i <= n)
	{
		sum += 1.0 / i;
		i++;
	}
	cout << "Tong la: " << sum;
	system("pause");
	return 0;
}