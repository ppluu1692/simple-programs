#include "bt3_lib.h"

int main()
{
	cout << "__BAI TAP 3 - TUAN 7__\n";
	cout << "---Sap xep ma tran mxn dung mang phu va khong dung mang phu---\n\n";

	float A[MAXM][MAXN] = { 0 };
	int m, n;

	nhapMang(A, m, n);
	cout << "\nMang da nhap la: \n";
	xuatMang(A, m, n);
	cout << "\nSap xep dung mang phu: \n";
	SapXepTangDanMP(A, m, n);
	xuatMang(A, m, n);
	cout << "\nSap xep khong dung mang phu: \n";
	SapXepTangDanKMP(A, m, n);
	xuatMang(A, m, n);
	cout << endl;

	system("pause");
	return 0;
}