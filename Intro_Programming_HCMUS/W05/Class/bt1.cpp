#include <iostream>
#include <cmath>

using namespace std;

float Cong(float a, float b);
float Tru(float a, float b);
float Nhan(float a, float b);
float Chia(float a, float b);
float LuyThua(float a, int n);
float CanBac(float a, int x);

int main()
{
	int a;
	int b;
	int x;
	int option = 0;

	cout << "CALCULATER" << endl;
	cout << "Chon phep tinh: " << endl;
	cout << "1. Cong a + b" << endl;
	cout << "2. Tru a - b" << endl;
	cout << "3. Nhan a x b" << endl;
	cout << "4. Chia a / b" << endl;
	cout << "5. Luy thua a^x" << endl;
	cout << "6. Can bac x cua a" << endl;
	cout << "0. Ket thuc chuong trinh" << endl;
	do {
		cout << "Nhap phep tinh: ";
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Nhap a, b: ";
			cin >> a >> b;
			cout << "a + b = " << Cong(a, b);
			break;
		case 2:
			cout << "Nhap a, b: ";
			cin >> a >> b;
			cout << "a - b = " << Tru(a, b);
			break;
		case 3:
			cout << "Nhap a, b: ";
			cin >> a >> b;
			cout << "a x b = " << Nhan(a, b);
			break;
		case 4:
			cout << "Nhap a, b: ";
			cin >> a >> b;
			cout << "a / b = " << Chia(a, b);
			break;
		case 5:
			cout << "Nhap a, x: ";
			cin >> a >> x;
			cout << "a^x = " << LuyThua(a, x);
			break;
		case 6:
			cout << "Nhap a, x: ";
			cin >> a >> x;
			cout << "can bac x cua a = " << CanBac(a, x);
			break;
		}
		cout << endl;
	} while (option != 0);
	system("pause");
	return 0;
}

float Cong(float a, float b)
{
	return a + b;
}
float Tru(float a, float b)
{
	return a - b;
}
float Nhan(float a, float b)
{
	return a * b;
}
float Chia(float a, float b)
{
	return a / b * 1.0;
}
float LuyThua(float a, int n)
{
	float ketqua = 1;
	for (int i = 1; i <= n; i++)
	{
		ketqua *= a;
	}
	return ketqua;
}
float CanBac(float a, int x)
{
	if (x > 0)
	{
		return pow(a, 1.0/x);
	}
	if (x < 0)
		return 1.0 / pow(a, 1.0 / -x);
}