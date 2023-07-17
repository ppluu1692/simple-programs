#include "bt8_lib.h"

int main()
{
	cout << "__BAI TAP 8 - TUAN 7__\n";
	cout << "---Sap xep ma tran vuong tang dan theo dong, cot, cheo chinh va cheo phu---\n\n";

	float A[MAXN][MAXN];
	int n;

	nhapMang(A, n);
	cout << "\nMang da nhap la\n";
	xuatMang(A, n);
	cout << "\nMang sau khi sap xep la:" << endl;
	SapXep8(A, n);
	xuatMang(A, n);
	cout << endl;

	system("pause");
	return 0;

}