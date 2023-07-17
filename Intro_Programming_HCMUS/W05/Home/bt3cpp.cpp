#include <iostream>
using namespace std;

int Pascal(int n, int m);
void xuatPascal(int n);


int main()
{
	int n = 0;
	do {
		cout << "Nhap vao so hang can in ra: ";
		cin >> n;
	} while (n <= 0);

	xuatPascal(n);
	system("pause");
	return 0;
}

int Pascal(int n, int m)
{
	if (m == 0 || m == n)
		return 1;
	else
		return Pascal(n - 1, m - 1) + Pascal(n - 1, m);
}

void xuatPascal(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << Pascal(i, j) << ' ';
		cout << endl;
	}
}