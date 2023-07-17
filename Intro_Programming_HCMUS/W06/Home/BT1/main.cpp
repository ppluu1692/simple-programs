#include "array.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "___BAI TAP 1 - TUAN 6___\n";
	float myArr[MAXN];
	int n = 0;
	int option = 0;
	nhapMang(myArr, n);
	cout << "---MENU---\n";
	cout << "\n--CAC HAM XU LI MANG--\n";
	cout << "1. Tim phan tu lon nhat trong mang\n";
	cout << "2. Tinh tong cac phan tu khong am trong mang\n";
	cout << "3. Tinh tong cac phan tu tai vi tri chan\n";
	cout << "4. Dem so luong so nguyen to trong mang\n";
	cout << "5. Tim phan tu AM lon nhat trong mang\n";
	cout << "6. Tim phan tu KHONG AM nho nhat trong mang\n";
	cout << "7. Kiem tra mang co tang dan hay khong\n";
	cout << "8. Tinh tong cac so chinh phuong trong mang\n";
	cout << "9. Nhap lai mang\n";
	cout << "0. Ket truc chuong trinh\n";
	do
	{
		cout << "\n--> Nhap vao ham can tinh ";
		cin >> option;
		bool flag = true;
		float KQ = 0;
		switch (option)
		{
		case 1:
			cout << "Phan tu lon nhat trong mang la: " << timMax(myArr, n) << endl;
			break;
		case 2:
			cout << "Tong cac phan tu khong am trong mang la: " << tongSoKhongAm(myArr, n) << endl;
			break;
		case 3:
			cout << "Tong cac phan tu o vi tri chan la: " << tongPhanTuTaiViTriChan(myArr, n) << endl;
			break;
		case 4:
			cout << "So luong cac so nguyen to duong trong mang la: " << demNguyenTo(myArr, n) << endl;
			break;
		case 5:
			KQ = PhanTuAmLonNhat(myArr, n, flag);
			if (flag)
				cout << "Phan tu AM lon nhat trong mang la: " << KQ << endl;
			else
				cout << "Khong co phan tu am trong mang" << endl;
			break;
		case 6:
			KQ = PhanTuKhongAmNhoNhat(myArr, n, flag);
			if (flag)
				cout << "Phan tu KHONG AM nho nhat trong mang la: " << KQ << endl;
			else
				cout << "Khong co phan tu khong am trong mang" << endl;
			break;
		case 7:
			if (ktraTangDan(myArr, n))
				cout << "Mang tang dan" << endl;
			else
				cout << "Mang khong tang dan" << endl;
			break;
		case 8:
			cout << "Tong cac phan tu chinh phuong trong mang la: " << TongSoChinhPhuong(myArr, n) << endl;
			break;
		case 9:
			nhapMang(myArr, n);
			break;
		}
		cout << endl;

	} while (option != 0);
	system("pause");
	return 0;
}