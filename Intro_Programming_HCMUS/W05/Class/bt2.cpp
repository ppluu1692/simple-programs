#include <iostream>
#include <cmath>

using namespace std;

int UCLN(int a, int b)
{
	int m = a;
	int n = b;
	while (m != n)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}

	return  m;
}

int BCNN(int a, int b)
{
	return a * b / UCLN(a, b);
}
void toigian(int& tuso, int& mauso)
{
	int UC = UCLN(tuso, mauso);
	tuso = tuso / UC;
	mauso = mauso / UC;
}

void tinhTong(int tusoA, int mausoA, int tusoB, int mausoB, int& tusoKQ, int& mausoKQ)
{
	int MC = BCNN(mausoA, mausoB);
	mausoKQ = MC;
	tusoKQ = (tusoA) * (MC / mausoA) + (tusoB) * (MC / mausoB);
	toigian(tusoKQ, mausoKQ);
}

void tinhTich(int tusoA, int mausoA, int tusoB, int mausoB, int& tusoKQ, int& mausoKQ)
{
	mausoKQ = mausoA * mausoB;
	tusoKQ = tusoA * tusoB;
	toigian(tusoKQ, mausoKQ);
}

int main()
{
	int tsA = 0;
	int msA = 0;
	int tsB = 0;
	int msB = 0;
	char c = ' ';
	int option = 0;
	cout << "1. Toi gian phan so" << endl;
	cout << "2. Cong hai phan so" << endl;
	cout << "3. Nhan hai phan so" << endl;
	cout << "0. Ket thuc chuong trinh" << endl;
	do
	{
		cout << "Chon phep tinh --> ";
		cin >> option;
		cout << endl;
		if (option == 1)
		{
			cout << "Nhap vao phan so A: (a/b) ";
			cin >> tsA >> c >> msA;
			toigian(tsA, msA);
			cout << "toi gian: " << tsA << '/' << msA;
		}
		else if (option == 2)
		{
			cout << "Nhap vao phan so A: (a/b) ";
			cin >> tsA >> c >> msA;
			cout << "Nhap vao phan so B: (a/b) ";
			cin >> tsB >> c >> msB;
			int tsC = 0;
			int msC = 0;
			tinhTong(tsA, msA, tsB, msB, tsC, msC);
			cout << "A + B = " << tsC << '/' << msC;
		}
		else if (option == 3)
		{
			cout << "Nhap vao phan so A: (a/b) ";
			cin >> tsA >> c >> msA;
			cout << "Nhap vao phan so B: (a/b) ";
			cin >> tsB >> c >> msB;
			int tsC = 0;
			int msC = 0;
			tinhTich(tsA, msA, tsB, msB, tsC, msC);
			cout << "A*B = " << tsC << '/' << msC;
		}
		cout << endl;
	} while (option != 0);
	cout << endl;
	system("pause");
	return 0;
}

