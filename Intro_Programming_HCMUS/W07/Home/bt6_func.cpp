#include "bt6_lib.h"

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

void baitap6(int A[][MAXN], int m, int n)
{
	int count = 0;
	cout << endl;
	for (int i = 1; i < m - 1; ++i)
	{
		for (int j = 1; j < n - 1; ++j)
		{
			bool flag = true;
			for (int k = 0; k < 9; ++k)
			{
				int x = k / 3 - 1 + i;
				int y = k % 3 - 1 + j;
				if (!(x == i && y == j) && A[i][j] <= A[x][y])
					flag = false;
			}
			if (flag)
			{
				cout << "Cuc dai: A[" << i << "][" << j << "] = " << A[i][j] << endl;
				count++;
			}
		}
	}
	if (count == 0)
		cout << "Khong co cuc dai\n";
}