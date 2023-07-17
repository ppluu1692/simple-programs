#include <iostream>
using namespace std;

void nhapSoDuong(int& n);
int timChuSoLonNhat(int n);

int main()
{
	int n = 0;
	nhapSoDuong(n);
	cout << "Chu so lon nhat trong N la: " << timChuSoLonNhat(n);
	cout << endl;
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

int timChuSoLonNhat(int n)
{
	int phandu = 0;
	int max = phandu;
	while (n > 0)
	{
		phandu = n % 10;
		n = n / 10;
		if (max < phandu)
			max = phandu;
	}
	return max;
}
