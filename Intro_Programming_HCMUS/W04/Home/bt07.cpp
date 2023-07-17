#include <iostream>
using namespace std;

void nhapSoDuong(int& n);
int timBCNN(int m, int n);

int main()
{
	int n = 0;
	int m = 0;
	nhapSoDuong(n);
	nhapSoDuong(m);
	cout << "BCNN: " << timBCNN(m, n) << endl;
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

int timBCNN(int m, int n)
{
	if (m < n) {
		int temp = m;
		m = n;
		n = temp;
	}
	int UC = m;
	while (UC % n != 0) {
		UC = UC + m;
	}
	return UC;
}