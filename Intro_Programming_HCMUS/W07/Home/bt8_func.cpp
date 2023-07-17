#include "bt8_lib.h"

void nhapMang(float arr[][MAXN], int& n)
{
	cout << "Nhap vao so hang cua ma tran vuong: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << "Nhap vao phan tu [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
}

void xuatMang(float arr[][MAXN], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << arr[i][j] << "\t";
		}
		cout << '\n';
	}
}

void bubbleSort(float arr[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 1; j < n - i; j++)
		{
			if (arr[j] < arr[j - 1])
			{
				float temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
}

void SapXep8(float arr[][MAXN], int n)
{
	float subArr[MAXN * MAXN] = { 0 };
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			subArr[i * n + j] = arr[i][j];
		}
	}
	bubbleSort(subArr, n * n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr[j][i] = subArr[i * n + j];
		}
	}
}
