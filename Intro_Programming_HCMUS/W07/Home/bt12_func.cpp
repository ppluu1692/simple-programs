#include "bt12_lib.h"

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

int baitap12(int arr[][MAXN], int m, int n, int k)
{
	int result = 0;
	for (int i = 0; i <= m - k; ++i)
	{
		for (int j = 0; j <= n - k; ++j)
		{
			int sum = 0;
			for (int p = 0; p < k; ++p)
			{
				for (int q = 0; q < k; ++q)
				{
					sum += arr[p + i][q + j];
				}
			}
			if (result < sum)
				result = sum;
		}
	}
	return result;
}
