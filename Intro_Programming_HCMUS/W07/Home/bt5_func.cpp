#include "bt5_lib.h"

void nhapMang(int arr[][MAXN], int& m, int& n)
{
	cout << "Nhap vao so hang cua ma tran: ";
	cin >> m;
	cout << "Nhap vao so cot cua ma tran: ";
	cin >> n;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << "Nhap vao phan tu [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
}

void xuatMang(int arr[][MAXN], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << arr[i][j] << "\t";
		}
		cout << '\n';
	}
}

void baitap5(int A[][MAXN], int B[][MAXN], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int count = 0;
			for (int k = 0; k < 9; ++k)
			{
				int x = k / 3 - 1 + i;
				int y = k % 3 - 1 + j;
				if (!(x<0 || y<0 || x>m - 1 || y>n - 1 || (x == i && y == j)))
					if (A[x][y] % 2 == 0)
						count++;
			}
			B[i][j] = count;
		}
	}
}
