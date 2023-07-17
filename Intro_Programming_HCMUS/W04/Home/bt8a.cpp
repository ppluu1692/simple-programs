#include <iostream>

using namespace std;


void hoanviSoNguyen(int &a, int &b);

int main()
{
	int a = 0;
	int b = 0;

	cout << "Nhap vao a: ";
	cin >> a;
	cout << "Nhap vao b: ";
	cin >> b;

	hoanviSoNguyen(a, b);
	cout << "Sau khi hoan doi:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}

void hoanviSoNguyen(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}