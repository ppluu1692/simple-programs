#include <iostream>
using namespace std;

const float PI = 3.1416;

int main()
{
	float ChuVi = 0.0;
	cout << "Nhap vao chu vi cua hinh chu nhat: ";
	cin >> ChuVi;

	float ChRong = 0.0;
	ChRong = (ChuVi / 2) / 5 * 2;

	float DienTich = 0.0;
	DienTich = ChRong * 1.5 * ChRong;

	cout << "Dien tich cua hinh chu nhat do la: " << DienTich << endl;

	system("pause");
	return 0;
}