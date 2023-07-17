#include "bt11_lib.h"

void nhapMang(float arr[][MAXN], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << "Nhap vao phan tu [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
}

void xuatMang(float arr[][MAXN], int m, int n)
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

void baitap11(float A[][MAXN], float B[][MAXN], int m, int n)
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int crime = 0;
			for (int k = 0; k < m; k++)
			{
				for (int l = 0; l < n; l++)
				{
					if (A[i][j] == B[k][l])
					{
						crime = A[i][j];
						B[k][l] = 0;
					}
				}
			}
			if (crime)
			{
				for (int k = 0; k < m; k++)
				{
					for (int l = 0; l < n; l++)
					{
						if (A[k][l] == crime)
						{
							A[k][l] = 0;
						}
					}
				}
			}
		}
	}
}