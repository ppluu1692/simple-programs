#include "bt7_lib.h"

int main()
{
	cout << "__BAI TAP 7 - TUAN 7__\n";
	cout << "---Sap xep ma tran co tong cac dong tang dan---\n\n";

	float A[MAXM][MAXN];
	int m, n;
	nhapMang(A, m, n);
	cout << "\nMang da nhap la\n";
	xuatMang(A, m, n);
	cout << endl;
	baitap7(A, m, n);
	cout << "Mang sau khi sap xep\n";
	xuatMang(A, m, n);
	cout << endl;

	system("pause");
	return 0;
}