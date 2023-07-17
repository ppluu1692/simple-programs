#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	cout << "Nhap vao a: ";
	cin >> a;
	cout << "Nhap vao b: ";
	cin >> b;
	cout << "Nhap vao c: ";
	cin >> c;
	cout << "Nhap vao d: ";
	cin >> d;

	if (a > b)
	{
		int tam = a;
		a = b;
		b = tam;
	}
	if (a > c)
	{
		int tam = a;
		a = c;
		c = tam;
	}
	if (a > d)
	{
		int tam = a;
		a = d;
		d = tam;
	}
	cout << "So nho nhat la: " << a << endl;

	system("pause");
	return 0;
}