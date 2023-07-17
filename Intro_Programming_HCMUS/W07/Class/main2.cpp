#include <iostream>
#include "arr2d_func.h"

using namespace std;

int main()
{
	int m, n;
	int A[MAXN][MAXN];
	int B[MAXN][MAXN];
	int C[MAXN][MAXN];
	nhapMang(A, n);
	nhapMang(B, m);
	if (m == n)
	{
		TichHaiMaTran(A, B, C, n);
		xuatMang(C, n);
	}
	else
		cout << "Hai ma tran khong cung kich thuoc";
	system("pause");
	return 0;
}