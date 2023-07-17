#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	int count = 0;

	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			count++;
	}
	if (count == 1)
		cout << "n la so nguyen to" << endl;
	else
		cout << "n khong la so nguyen to" << endl;
	system("pause");
	return 0;
}