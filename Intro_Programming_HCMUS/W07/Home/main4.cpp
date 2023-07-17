#include "bt4_lib.h"

int main()
{
	cout << "__BAI TAP 4 - TUAN 7__\n";
	cout << "---Tim cac diem yen ngua co trong ma tran mxn---\n\n";

	int A[MAXM][MAXN] = { 0 };
	int m, n, x, y;

	nhapMang(A, m, n);
	cout << "\nMang da nhap la\n";
	xuatMang(A, m, n);
	cout << endl;
	DiemYenNgua(A, m, n);

	system("pause");
	return 0;
}