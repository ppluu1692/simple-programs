#include "bt11_lib.h"

int main()
{
	cout << "__BAI TAP 11 - TUAN 7__\n";
	cout << "---Thay the nhung phan tu giong nhau trong hai ma tran bang so 0---\n\n";

	float A[MAXM][MAXN], B[MAXM][MAXN];
	int m, n;
	cout << "Nhap vao so hang cua ma tran: ";
	cin >> m;
	cout << "Nhap vao so cot cua ma tran: ";
	cin >> n;
	cout << "\nNhap vao ma tran A\n";
	nhapMang(A, m, n);
	cout << "\nNhap vao ma tran B\n";
	nhapMang(B, m, n);
	cout << "\nMa tran A\n";
	xuatMang(A, m, n);
	cout << "\nMa tran B\n";
	xuatMang(B, m, n);
	cout << "\nSau khi xoa:\n";
	baitap11(A, B, m, n);
	cout << "\nMa tran A\n";
	xuatMang(A, m, n);
	cout << "\nMa tran B\n";
	xuatMang(B, m, n);
	cout << endl;

	system("pause");
	return 0;

}
