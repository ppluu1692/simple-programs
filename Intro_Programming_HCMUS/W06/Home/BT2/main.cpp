#include <iostream>
#include "arrlib.h"

int main()
{
	std::cout << "___BAI TAP 2 - TUAN 6___\n";
	int n = 0;
	unsigned int myArr[MAXN] = { 0 };
	nhapMang(myArr, n);
	std::cout << "\nMang da nhap la:\n";
	xuatMang(myArr, n);
	std::cout << "\n---MENU---\n";
	std::cout << "a. Xoa phan tu o vi tri <i>\n";
	std::cout << "b. Xoa <k> phan tu tu vi tri <i>\n";
	std::cout << "c. Dem so luong va in cac phan tu khac nhau\n";
	std::cout << "d. Nhu cau c nhung cac phan tu thuoc [1, <k>]\n";
	std::cout << "e. Tim so lon thu hai\n";
	std::cout << "f. Tim phan tu xuat hien nhieu nhat\n";
	std::cout << "g. Tim so nho nhat trong doan [<x>, <y>]\n";
	std::cout << "h. Tim tong lon nhat cua <k> phan tu lien tiep\n";
	std::cout << "i. Dao nguoc mang\n";
	std::cout << "j. Sap xep cac phan tu chan tang dan o dau, phan tu le giam dan o cuoi\n";
	std::cout << "k. Sap xep cac so chinh phuong tang dan, con lai khong doi\n";
	std::cout << "l. Dao mang theo thu tu a[<m>],...a[n-1], a[0], a[<m-1>] (m < n)\n";
	std::cout << "m. Kiem tra mang co tang dan hay khong\n";
	std::cout << "n. In day con tang dan dai nhat trong mang\n";
	std::cout << "o. In tat ca day con tang dan\n";
	std::cout << "p. Tim so nguyen to nho nhat (neu co)\n";
	std::cout << "y. Nhap lai mang\n";
	std::cout << "z. Ket thuc chuong trinh\n";
	char option = NULL;
	do
	{
		std::cout << "\n--> Lua chon cua ban la: ";
		std::cin >> option;
		int i, k, x, y, m;
		switch (option)
		{
		case 'a':
			i = 0;
			std::cout << "Xoa phan tu o vi tri <i>\n";
			std::cout << "Nhap i: ";
			std::cin >> i;
			if (i >= 0 && i < n)
				xoa1PhanTu(myArr, n, i);
			std::cout << "Mang sau khi xoa: ";
			xuatMang(myArr, n);
			break;
		case 'b':
			std::cout << "b. Xoa <k> phan tu tu vi tri <i>\n";
			i = 0; k = 0;
			std::cout << "Nhap i, k: ";
			std::cin >> i >> k;
			if (i >= 0 && i < n - k)
				xoakPhanTu(myArr, n, k, i);
			std::cout << "Mang sau khi xoa: ";
			xuatMang(myArr, n);
			break;
		case 'c':
			std::cout << "Dem so luong va in cac phan tu khac nhau\n";
			demvainCacPhanTuKhacNhau(myArr, n);
			break;
		case 'd':
			std::cout << "Nhu cau c nhung cac phan tu thuoc [1, <k>]\n";
			std::cout << "Ban co muon nhap lai mang khong  1. co ";
			i = 0;
			k = 0;
			std::cin >> i;
			if (i == 1)
			{
				nhapMang(myArr, n);
				std::cout << "Nhap k: ";
				int k;
				std::cin >> k;
			}
			demvainCacPhanTuKhacNhau(myArr, n);
			break;
		case 'e':
			std::cout << "Tim so lon thu hai\n";
			std::cout << "Phan tu lon thu hai la: " << timSoLonThuHai(myArr, n) << '\n';
			break;
		case 'f':
			std::cout << "Tim phan tu xuat hien nhieu nhat\n";
			std::cout << "Phan tu xuat hien nhieu lan nhat la: " << PhanTuXuatHienNhieuNhat(myArr, n) << '\n';
			break;
		case 'g':
			std::cout << "Tim so nho nhat trong doan [<x>, <y>]\n";
			x = 0; 
			y = 0;
			std::cout << "Nhap x, y: ";
			std::cin >> x >> y;
			if (x >= 0 && x <= y && y < n)
				std::cout << "Phan tu nho nhat tren doan [<x>, <y>] la: " << PhanTuNhoNhatTrenDoanXY(myArr, x, y) << '\n';
			else
				std::cout << "x hoac y khong hop le\n";
			break;
		case 'h':
			std::cout << "Tim tong lon nhat cua <k> phan tu lien tiep\n";
			k = 0;
			std::cout << "Nhap vao k: ";
			std::cin >> k;
			if (k >= 1 && k <= n)
				std::cout << "Tong lon nhat cua k phan tu lien tiep la: " << TongLonNhatCacPhanTuLienTiep(myArr, n, k) << '\n';
			else
				std::cout << "k khong hop le\n";
			break;
		case 'i':
			std::cout << "Dao nguoc mang\n";
			std::cout << "Mang sau khi dao nguoc: ";
			daonguocMang(myArr, n);
			xuatMang(myArr, n);
			break;
		case 'j':
			std::cout << "Sap xep cac phan tu chan tang dan o dau, phan tu le giam dan o cuoi\n";
			std::cout << "Mang sau khi sap xep: ";
			sapxepChanLe(myArr, n);
			xuatMang(myArr, n);
			break;
		case 'k':
			std::cout << "Sap xep cac so chinh phuong tang dan, con lai khong doi\n";
			std::cout << "Mang sau khi sap xep: ";
			sapxepChinhPhuong(myArr, n);
			xuatMang(myArr, n);
			break;
		case 'l':
			std::cout << "Dao mang theo thu tu a[<m>],...a[n-1], a[0], a[<m-1>] (m < n)\n";
			m = 0;
			std::cout << "Nhap vao m: ";
			std::cin >> m;
			if (m >= 0 && m < n)
			{
				std::cout << "Mang sau khi doi cho: ";
				daoMangmn(myArr, n, m);
				xuatMang(myArr, n);
			}
			else
				std::cout << "m khong hop le\n";
			break;
		case 'm':
			std::cout << "Kiem tra mang co tang dan hay khong\n";
			if (ktraTangDan(myArr, n))
				std::cout << "Mang tang dan\n";
			else
				std::cout << "Mang khong tang dan\n";
			break;
		case 'n':
			std::cout << "In day con tang dan dai nhat trong mang\n";
			inDayConTangDan(myArr, n);
			break;
		case 'o':
			std::cout << "In tat ca day con tang dan\n";
			inTatCaDayConTangDan(myArr, n);
			break;
		case 'p':
			std::cout << "Tim so nguyen to nho nhat (neu co)\n";
			inSoNgToNhoNhat(myArr, n);
			break;
		case 'y':
			std::cout << "Nhap lai mang\n";
			nhapMang(myArr, n);
			break;
		default:
			std::cout << "Nhap sai, de ket thuc nhap vao z\n";
		}

	} while (option != 'z');


	return 0;
}
