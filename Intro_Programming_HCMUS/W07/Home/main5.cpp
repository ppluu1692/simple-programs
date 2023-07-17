#include "bt5_lib.h"

int main()
{
	cout << "__BAI TAP 5 - TUAN 7__\n";
	cout << "---Xay dung ma tran B la so phan tu chan xung quanh---\n\n";

	int A[MAXM][MAXN], B[MAXM][MAXN];
	int m, n;

	nhapMang(A, m, n);
	cout << "\nMang da nhap la\n";
	xuatMang(A, m, n);
	baitap5(A, B, m, n);
	cout << "\nMang B:\n";
	xuatMang(B, m, n);
	cout << endl;

	system("pause");
	return 0;
}