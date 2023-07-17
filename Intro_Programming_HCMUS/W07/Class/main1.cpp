#include <iostream>
#include "arr2d_func.h"
using namespace std;

int main()
{

	cout << "___BAI TAP 1 - TUAN 7___\n";
	int n = 0;
	int A[MAXN][MAXN] = { 0 };
	nhapMang(A, n);
	cout << "\nMang da nhap la:\n";
	xuatMang(A, n);
	cout << "\n---MENU---\n";
	cout << "a. Tinh tong cac phan tu trong mang\n";
	cout << "b. Dem so lan xuat hien cua mot phan tu <x> bat ki\n";
	cout << "c. Dem so luong cac so nguyen to\n";
	cout << "d. Tinh tong cac phan tu khong am\n";
	cout << "e. Tinh tong cac phan tu tren duong cheo chinh\n";
	cout << "f. Kiem tra cac phan tu tren duong cheo chinh co tang dan khong\n";
	cout << "g. Tinh tong cac phan tu tren duong cheo phu\n";
	cout << "h. Sap xep cac phan tu tren mang theo thu tu tang dan tren tung dong\n";
	cout << "i. Tim cac phan tu lon nhat va nho nhat tren tung dong, tung cot va toan ma tran\n";
	cout << "j. Dua cac phan tu lon nhat dong ve duong cheo chinh\n";
	cout << "y. Nhap lai mang\n";
	cout << "z. Ket thuc chuong trinh\n";
	char option = NULL;
	do
	{
		cout << "\n--> Lua chon cua ban la: ";
		cin >> option;
		int i, k, x, y, m;
		switch (option)
		{
		case 'a':
			cout << "a. Tinh tong cac phan tu trong mang\n";
			cout << "Tong la: " << TongCacPhanTu(A, n);
			break;
		case 'b':
			cout << "b. Dem so lan xuat hien cua mot phan tu <x> bat ki\n";
			x = 0;
			cout << "Nhap x: ";
			cin >> x;
			cout << "So lan xua hien cua x la: " << SoLanXuatHienCua1PhanTu(A, n, x);
			break;
		case 'c':
			cout << "Dem so luong cac so nguyen to\n";
			cout << "So luong cac so nguyen to: " << SoLanXuatHienCuaSoNgTo(A, n);
			break;
		case 'd':
			cout << "Tinh tong cac phan tu khong am\n";
			cout << "Tong cac phan tu khong am la: " << TongCacPhanTuKhongAm(A, n);
			break;
		case 'e':
			cout << "Tinh tong cac phan tu tren duong cheo chinh\n";
			cout << "Tong cac phan tu tren duong cheo chinh la: " << TongCheoChinh(A, n);
			break;
		case 'f':
			cout << "Kiem tra cac phan tu tren duong cheo chinh co tang dan khong\n";
			if (CheoChinhTangDan(A, n))
				cout << "Tang dan";
			else
				cout << "Khong tang dan";
			break;
		case 'g':
			cout << "Tinh tong cac phan tu tren duong cheo phu\n";
			cout << "Tong cac phan tu tren duong cheo phu: " << TongCheoPhu(A, n);
			break;
		case 'h':
			cout << "Sap xep cac phan tu tren mang theo thu tu tang dan tren tung dong\n";
			SapXepTangDanTungDong(A, n);
			xuatMang(A, n);
		
		case 'i':
			MinMaxDongCotMang(A, n);
			break;
		case 'j':
			LonNhatDongVeCheoChinh(A, n);
			xuatMang(A, n);
			break;
		case 'y':
			cout << "Nhap lai mang\n";
			nhapMang(A, n);
			break;
		default:
			cout << "Nhap sai, de ket thuc nhap vao z\n";
		}

	} while (option != 'z');

	system("pause");
	return 0;
}