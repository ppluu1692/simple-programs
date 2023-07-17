#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Nhap vao a: "; 
	cin>> a;
	cout << "Nhap vao b: ";
	cin >> b;
	cout << "Nhap vao c: ";
	cin >> c;

	a = a + b;
	b = a - b;
	a = a - b;

	c = c + b;
	b = c - b;
	c = c - b;

	cout << "Sau khi hoan doi gia tri: " << endl;
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

	system("pause");
	return 0;
}