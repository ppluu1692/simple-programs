#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int n;

	cout << "Nhap vao N: ";
	cin >> n;

	for (; n > 0; n = n / 10)
	{
		sum += n % 10;
	}
	cout << "Tong cac chu so cua N la " << sum;

	cout << endl;
	system("pause");
	return 0;
}