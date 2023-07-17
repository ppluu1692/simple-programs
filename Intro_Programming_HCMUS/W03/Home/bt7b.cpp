#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	int sum = 0;

	cout << "Nhap vao N: ";
	cin >> n;
	while (n > 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	cout << "tong la: " << sum << endl;
	system("pause");
	return 0;
}