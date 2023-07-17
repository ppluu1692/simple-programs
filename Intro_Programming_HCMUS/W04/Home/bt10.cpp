#include <iostream>
using namespace std;

void nhapSoDuong(int& n);
int tinhF(int n);

int main()
{
	int n = 0;
	nhapSoDuong(n);
	cout << tinhF(n) << endl;
	system("pause");
	return 0;
}

void nhapSoDuong(int& n)
{
	do
	{
		cout << "Nhap vao N > 0: ";
		cin >> n;
	} while (n < 1);
}

int tinhF(int n)
{
	int preAns = 1;
	int Ans = 2;
	int temp = Ans;

	for (int i = 2; i <= n; i++)
	{
		temp = Ans;
		Ans = 3 * Ans - 2 * preAns;
		preAns = temp;
	}
	return Ans;
}