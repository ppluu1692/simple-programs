#include "bt9_lib.h"

int main()
{
	cout << "__BAI TAP 9 - TUAN 7__\n";
	cout << "---Sap xep ma tran tang dan tren tung cot va giam dan tren tung dong---\n\n";

	float A[MAXN][MAXN];
	int m, n;

	nhapMang(A, m, n);
	cout << "\nMang da nhap la\n";
	xuatMang(A, m, n);
	cout << "\nMang sau khi sap xep la:" << endl;
	SapXep9(A, m, n);
	xuatMang(A, m, n);
	cout << endl;

	system("pause");
	return 0;
}