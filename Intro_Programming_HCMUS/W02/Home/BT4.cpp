
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
	if (b > c)
	{
		int tam = b;
		b = c;
		c = tam;
	}
	if (b > d)
	{
		int tam = b;
		b = d;
		d = tam;
	}
	if (c > d)
	{
		int tam = c;
		c = d;
		d = tam;
	}
	cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
	system("pause");
	return 0;
}