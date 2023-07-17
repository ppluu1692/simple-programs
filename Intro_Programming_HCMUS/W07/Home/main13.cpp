#include "bt13_lib.h"

int main()
{
	cout << "__BAI TAP 13 - TUAN 7__\n";
	cout << "---Sap xep ma tran so le tang dan ben trai va so chan giam dan ben phai---\n\n";

	int A[MAXM][MAXN];
	int m, n;
	nhapMang(A, m, n);
	cout << "\nMang da nhap la\n";
	xuatMang(A, m, n);
	baitap13(A, m, n);
	cout << "\nSau khi sap xep\n";
	xuatMang(A, m, n);
	cout << endl;

	system("pause");
	return 0;

}