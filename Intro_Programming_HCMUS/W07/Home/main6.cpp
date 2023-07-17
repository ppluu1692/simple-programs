#include "bt6_lib.h"

int main()
{
	cout << "__BAI TAP 6 - TUAN 7__\n";
	cout << "---Tim cac gia tri cuc dai trong ma tran mxn---\n\n";

	int A[MAXM][MAXN];
	int m, n;
	nhapMang(A, m, n);
	cout << "\nMang da nhap la\n";
	xuatMang(A, m, n);
	baitap6(A, m, n);
	cout << endl;

	system("pause");
	return 0;
}