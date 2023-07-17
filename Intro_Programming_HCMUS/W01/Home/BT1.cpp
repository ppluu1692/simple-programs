#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;

	cout << "Nhap vao so a: ";
	cin >> a;
	cout << "Nhap vao so b: ";
	cin >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Sau khi hoan doi gia tri: " << endl;
	cout << "a = " << a << ", b = " << b << endl;

	system("pause");
	return 0;
}