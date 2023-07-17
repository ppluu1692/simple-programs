#include "bt12_lib.h"
#include <algorithm>

int main()
{
	cout << "__BAI TAP 12 - TUAN 7__\n";
	cout << "---Tong lon nhat cua cua so kxk trong ma tran---\n\n";

	int A[MAXM][MAXN];
	int m, n, k;
	nhapMang(A, m, n);
	cout << "\nMang da nhap la\n";
	xuatMang(A, m, n);
	cout << "\nNhap k: ";
	cin >> k;
	if (k < min(m, n))
		cout << "\nTong lon nhat la: " << baitap12(A, m, n, k) << '\n';
	else
		cout << "\nk khong hop le\n";

	system("pause");
	return 0;

}