#include "bt2_lib.h"

void nhapMang(int arr[][MAXN], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << "Nhap vao phan tu [" << i << "][" << j << "]: ";
			std::cin >> arr[i][j];
		}
	}
}

void xuatMang(int arr[][MAXN], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << '\n';
	}
}

void TongHaiMaTran(int arrA[][MAXN], int arrB[][MAXN], int arrC[][MAXN], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arrC[i][j] = arrA[i][j] + arrB[i][j];
		}
	}
}

void TichHaiMaTran(int arrA[][MAXN], int arrB[][MAXN], int arrC[][MAXN], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int sum = 0;
			for (int k = 0; k < n; ++k)
			{
				sum += arrA[i][k] * arrB[k][j];
			}
			arrC[i][j] = sum;
		}
	}
}