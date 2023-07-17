#include "bt14_lib.h"

int main()
{
	cout << "__BAI TAP 14 - TUAN 7__\n";
	cout << "---Tao mang A theo de bai voi do rong cho truoc---\n\n";

	int A[MAXN][MAXN];
	int n;
	cout << "Nhap vao do rong cua mang: ";
	cin >> n;
	baitap14(A, n);
	cout << "\nMang A\n";
	xuatMang(A, n);
	cout << endl;

	system("pause");
	return 0;
}