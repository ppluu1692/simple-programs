#include "bt1_lib.h"
using namespace std;

int main()
{
	int n = 0;
	int A[MAXN][MAXN];
	int Source[MAXN][MAXN];
	cout << "___BAI TAP 1 - TUAN 7___\n";
	nhapMang(Source, n);


	system("cls");
	int option = -1;
	do
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				A[i][j] = Source[i][j];


		cout << "___BAI TAP 1 - TUAN 7___\n";
		cout << "\n---MENU---\n";
		cout << "1. Tinh tong cac phan tu trong ma tran\n";
		cout << "2. Dem so lan xuat hien cua mot phan tu <x> bat ki\n";
		cout << "3. Dem so luong cac so nguyen to\n";
		cout << "4. Tinh tong cac phan tu khong am\n";
		cout << "5. Tinh tong cac phan tu tren duong cheo chinh\n";
		cout << "6. Kiem tra cac phan tu tren duong cheo chinh co tang dan khong\n";
		cout << "7. Tinh tong cac phan tu tren duong cheo phu\n";
		cout << "8. Sap xep cac phan tu tren ma tran theo thu tu tang dan tren tung dong\n";
		cout << "9. Tim cac phan tu lon nhat va nho nhat tren tung dong, tung cot va toan ma tran\n";
		cout << "10. Dua cac phan tu lon nhat dong ve duong cheo chinh\n";
		cout << "11. Nhap lai ma tran\n";
		cout << "0. Ket thuc chuong trinh\n";
		cout << "\nma tran da nhap la:\n";
		xuatMang(A, n);
		cout << "\n";


		int i, k, x, y, m;
		switch (option)
		{
		case 1:
			cout << "Tinh tong cac phan tu trong ma tran\n";
			cout << "Tong la: " << TongCacPhanTu(A, n);
			break;
		case 2:
			cout << "Dem so lan xuat hien cua mot phan tu <x> bat ki\n";
			x = 0;
			cout << "Nhap x: ";
			cin >> x;
			cout << "So lan xua hien cua x la: " << SoLanXuatHienCua1PhanTu(A, n, x);
			break;
		case 3:
			cout << "Dem so luong cac so nguyen to\n";
			cout << "So luong cac so nguyen to: " << SoLanXuatHienCuaSoNgTo(A, n);
			break;
		case 4:
			cout << "Tinh tong cac phan tu khong am\n";
			cout << "Tong cac phan tu khong am la: " << TongCacPhanTuKhongAm(A, n);
			break;
		case 5:
			cout << "Tinh tong cac phan tu tren duong cheo chinh\n";
			cout << "Tong cac phan tu tren duong cheo chinh la: " << TongCheoChinh(A, n);
			break;
		case 6:
			cout << "Kiem tra cac phan tu tren duong cheo chinh co tang dan khong\n";
			if (CheoChinhTangDan(A, n))
				cout << "Tang dan";
			else
				cout << "Khong tang dan";
			break;
		case 7:
			cout << "Tinh tong cac phan tu tren duong cheo phu\n";
			cout << "Tong cac phan tu tren duong cheo phu: " << TongCheoPhu(A, n);
			break;
		case 8:
			cout << "Sap xep cac phan tu tren ma tran theo thu tu tang dan tren tung dong\n";
			SapXepTangDanTungDong(A, n);
			xuatMang(A, n);
			break;
		case 9:
			cout << "Tim cac phan tu lon nhat va nho nhat tren tung dong, tung cot va toan ma tran\n";
			MinMaxDongCotMang(A, n);
			break;
		case 10:
			cout << "Dua cac phan tu lon nhat dong ve duong cheo chinh\n";
			LonNhatDongVeCheoChinh(A, n);
			xuatMang(A, n);
			break;
		case 11:
			cout << "Nhap lai ma tran\n";
			nhapMang(Source, n);
			system("cls");
			option = -1;
			continue;
			break;
		}
		cout << "\n\n--> Lua chon cua ban la: ";
		cin >> option;
		system("cls");
	} while (option != 0);

	system("pause");
	return 0;
}