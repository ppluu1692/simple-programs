#include <iostream>
using namespace std;

void nhapSoDuong(int& n);
int timUCLN(int m, int n);

int main()
{
	int m = 0;
	int n = 0;
	nhapSoDuong(n);
	nhapSoDuong(m);
	cout <<"UCLN: "<<timUCLN(m, n);
	cout << endl;
	system("pause");
	return 0;
}

void nhapSoDuong(int& n)
{
	do
	{
		cout << "Nhap vao mot so > 0: ";
		cin >> n;
	} while (n <= 0);
}

int timUCLN(int m, int n)
{
	while (m != n)
	{
		if (m > n)
			m = m - n;
		else n = n - m;
	}
	return m;
}