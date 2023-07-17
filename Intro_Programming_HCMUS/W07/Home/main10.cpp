#include "bt10_lib.h"

int main()
{
	cout << "__BAI TAP 10 - TUAN 7__\n";
	cout << "---Tim khoang cach city-block lon nhat giua Min, Max va giua hai cuc dai---\n\n";

	int A[MAXM][MAXN] = { 0 };
	int m, n, x, y;

	nhapMang(A, m, n);
	cout << "\nMang da nhap la\n";
	xuatMang(A, m, n);
	bt10a(A, m, n);
	bt10b(A, m, n);
	cout << endl;

	system("pause");
	return 0;
}