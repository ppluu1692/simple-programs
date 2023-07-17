#include "bt15_lib.h"

int main()
{
	int A[9][9];
	int Source[9][9];
	cout << "__BAI TAP 15 - TUAN 7__\n";
	nhapMang(Source);


	system("cls");
	int option = -1;
	do
	{
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
				A[i][j] = Source[i][j];

		cout << "__BAI TAP 15 - TUAN 7__\n\n";

		cout << "--MENU--\n";
		cout << "1. Tim ma tran con co tong cac phan tu lon nhat va nho nhat\n";
		cout << "2. Tim ma tran con chua phan tu lon nhat va nho nhat\n";
		cout << "3. Tim ma tran con chua so nguyen to lon nhat va nho nhat\n";
		cout << "4. Nhap vao h, k hoan doi ma tran con A_h va A_k\n";
		cout << "5. Sap xep cac ma tran con voi sum(A_i) <= sum(A_i+1)\n";
		cout << "6. Nhap lai mang\n";
		cout << "0. Ket thuc chuong trinh\n\n";

		cout << "Mang da nhap la\n";
		xuatMang(A);
		cout << "\n";

		switch (option)
		{
		case 1:
			MinMaxSum(A);
			break;
		case 2:
			MinMax(A);
			break;
		case 3:
			MinMaxPrime(A);
			break;
		case 4:
			HoanDoihk(A);
			break;
		case 5:
			SapXepTongTang(A);
			break;
		case 6:
			cout << "Nhap lai ma tran\n";
			nhapMang(Source);
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