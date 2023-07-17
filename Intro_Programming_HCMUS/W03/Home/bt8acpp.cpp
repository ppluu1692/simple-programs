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
	if (m < n)
	{
		int tam = m;
		m = n;
		n = tam;
	}
	int BC = m;
	for (; BC % n != 0; BC = BC + m);
	cout << "UCLN: " << a * b / BC << endl;
	cout << "BCNN: " << BC << endl;
	system("pause");
	return 0;
}