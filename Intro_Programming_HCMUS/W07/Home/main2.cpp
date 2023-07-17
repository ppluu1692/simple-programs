#include "bt2_lib.h"

int main()
{
	cout << "__BAI TAP 2 - TUAN 7__\n";
	cout << "---Tinh tong va tich hai ma tran vuong nxn---\n\n";
	int n;
	int A[MAXN][MAXN];
	int B[MAXN][MAXN];
	int C[MAXN][MAXN];
	cout << "Nhap vao kich thuoc hai ma tran vuong: ";
	cin >> n;
	cout << "\nNhap vao ma tran A\n";
	nhapMang(A, n);
	cout << "\nNhap vao ma tran B\n";
	nhapMang(B, n);

	cout << "\nTong hai ma tran: \n";
	TongHaiMaTran(A, B, C, n);
	xuatMang(C, n);
	cout << "\nTich hai ma tran: \n";
	TichHaiMaTran(A, B, C, n);
	xuatMang(C, n);
	cout << endl;

	system("pause");
	return 0;
}

