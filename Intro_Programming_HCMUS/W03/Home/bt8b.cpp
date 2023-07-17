#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cout << "Nhap vao so thu nhat: ";
	cin >> a;
	cout << "Nhap vao so thu hai : ";
	cin >> b;

	int n = a, m = b;
	while (m != n)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	cout << "UCLN: " << n << endl;
	cout << "BCNN: " << a * b / n << endl;
	system("pause");
	return 0;
}