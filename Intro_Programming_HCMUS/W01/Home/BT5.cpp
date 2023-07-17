#include <iostream>
using namespace std;

const float PI = 3.1416;

int main()
{
	int option = 0;
	do
	{
		cout << "Lua chon khoi can tinh: \n";
		cout << "1. Khoi hop\n";
		cout << "2. Khoi lap phuong\n";
		cout << "3. Khoi tru tron\n";
		cin >> option;
		cout << endl;
	} while (option < 1 && option > 3);

	float DTich = 0.0;
	float TTich = 0.0;

	if (option == 1)
	{
		float ChDai = 0.0;
		float ChRong = 0.0;
		float ChCao = 0.0;

		cout << "--> Khoi hop\n";
		cout << "Nhap vao chieu dai:  ";
		cin >> ChDai;
		cout << "Nhap vao chieu rong: ";
		cin >> ChRong;
		cout << "Nhap vao chieu cao:  ";
		cin >> ChCao;

		DTich = 2 * (ChDai * ChRong + ChDai * ChCao + ChRong * ChCao);
		TTich = ChDai * ChRong * ChCao;
	}
	else if (option == 2)
	{
		float Canh = 0.0;
		cout << "--> Khoi lap phuong\n";
		cout << "Nhap vao do dai canh: ";
		cin >> Canh;

		DTich = Canh * Canh * 6;
		TTich = Canh * Canh * Canh;
	}
	else
	{
		float BanKinh = 0.0;
		float ChCao = 0.0;

		cout << "--> Khoi tru tron\n";
		cout << "Nhap vao chieu cao: ";
		cin >> ChCao;
		cout << "Nhap vao ban kinh:  ";
		cin >> BanKinh;

		DTich = 2 * PI * BanKinh * ChCao + 2 * PI * BanKinh * BanKinh;
		TTich = PI * BanKinh * BanKinh * ChCao;
	}

	cout << "Dien tich be mat: " << DTich << endl;
	cout << "The tich:         " << TTich << endl;

	system("pause");
	return 0;
}