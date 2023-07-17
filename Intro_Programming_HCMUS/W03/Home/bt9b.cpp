#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	int count = 0;
	int m = 1;

	while (m <= sqrt(n))
	{
		if (n % m == 0)
			count++;
		m++;
	}
	if (count == 1)
		cout << "n la so nguyen to " << endl;
	else
		cout << "n khong la so nguyen to " << endl;
	system("pause");
	return 0;
}