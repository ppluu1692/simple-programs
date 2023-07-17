#include <iostream>
using namespace std;

void main()
{
	int a = 0;
	int b = 0;
	cout << "Nhap vao so nguyen thu nhat: ";
	cin >> a;
	cout << "Nhap vao so nguyen thu hai: ";
	cin >> b;
	cout << "Tong cua hai so la: " << a + b << endl;
	cout << "Hieu cua hai so la: " << a - b << endl;
	cout << "Tich cua hai so la: " << a * b << endl;
	cout << "Thuong cua hai so la: " << 1.0 * a / b << endl;
	system("pause");
}