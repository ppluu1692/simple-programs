#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void nhapSoTien(int& n);
void doiTien(int tien, unsigned long long& socach);
void CachDoiTotNhat(int tien, int& soto50k, int& soto20k, int& soto10k, int& soto5k, int& soto2k, int& soto1k);
int main()
{

	int tien = 0;
	nhapSoTien(tien);
	if (tien > 100000)
		cout << "Wait a moment..." << endl;
	if (tien % 1000 == 0)
	{
		unsigned long long socach = 0;
		int soto50k, soto20k, soto10k, soto5k, soto2k, soto1k;
		doiTien(tien, socach);
		//system("CLS");
		cout << "So tien da nhap: " << tien << endl;
		cout << endl << "So phuong an doi tien la: " << socach << endl;
		CachDoiTotNhat(tien, soto50k, soto20k, soto10k, soto5k, soto2k, soto1k);
		cout << "Phuong an doi it to tien nhat la\nSo to: " << soto50k + soto20k + soto10k + soto5k + soto2k + soto1k << endl;
		if (soto50k > 0)
			cout << "50k: " << soto50k << '\t';
		if (soto20k > 0)
			cout << "20k: " << soto20k << '\t';
		if (soto10k > 0)
			cout << "10k: " << soto10k << '\t';
		if (soto5k > 0)
			cout << "5k: " << soto5k << '\t';
		if (soto2k > 0)
			cout << "2k: " << soto2k << '\t';
		if (soto1k > 0)
			cout << "1k: " << soto1k;
		cout << endl;
	}
	else
	{
		system("CLS");
		cout << "So tien da nhap: " << tien << endl;
		cout << "Khong the doi duoc so tien khong chia het cho 1000" << endl;
	}
	system("pause");
	return 0;
}

void nhapSoTien(int& n)
{
	do
	{
		cout << "Nhap vao mot so tien nho hon 2 trieu ";
		cin >> n;
	} while (n <= 0 || n >= 2000000);
}
void doiTien(int tien, unsigned long long& socach)
{
	int tongsoto = 0;
	for (int i50k = 0; i50k <= tien / 50000; ++i50k)
		for (int i20k = 0; i20k <= (tien - i50k * 50000) / 20000; ++i20k)
			for (int i10k = 0; i10k <= (tien - i50k * 50000 - i20k * 20000) / 10000; ++i10k)
				for (int i5k = 0; i5k <= (tien - i50k * 50000 - i20k * 20000 - i10k * 10000) / 5000; ++i5k)
					for (int i2k = 0; i2k <= (tien - i50k * 50000 - i20k * 20000 - i10k * 10000 - i5k * 5000) / 2000; ++i2k)
						++socach;
}
void CachDoiTotNhat(int tien, int& soto50k, int& soto20k, int& soto10k, int& soto5k, int& soto2k, int& soto1k)
{
	soto50k = tien / 50000;
	tien -= soto50k * 50000;
	soto20k = tien / 20000;
	tien -= soto20k * 20000;
	soto10k = tien / 10000;
	tien -= soto10k * 10000;
	soto5k = tien / 5000;
	tien -= soto5k * 5000;
	soto2k = tien / 2000;
	tien -= soto2k * 2000;
	soto1k = tien / 1000;
}