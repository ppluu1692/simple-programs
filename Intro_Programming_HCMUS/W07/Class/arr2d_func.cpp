#include <iostream>
#include <cmath>
#include "arr2d_func.h"

void nhapMang(int arr[][MAXN], int& n)
{
	std::cout << "Nhap vao so hang cua ma tran vuong: ";
	std::cin >> n;
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
			std::cout << arr[i][j] << " ";
		}
		std::cout << '\n';
	}
}
int TongCacPhanTu(int arr[][MAXN], int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			sum += arr[i][j];
		}

	}
	return sum;
}
int SoLanXuatHienCua1PhanTu(int arr[][MAXN], int n, int x)
{
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (x == arr[i][j])
				count++;
		}

	}
	return count;
}
bool ktraNgTo(int m)
{
	if (m < 2)
		return false;
	else if (m == 2)
		return true;
	else if (m % 2 == 0)
		return false;

	for (int i = 3; i <= sqrt(m); i += 2)
	{
		if (m % i == 0)
			return false;
	}

	return true;
}
int SoLanXuatHienCuaSoNgTo(int arr[][MAXN], int n)
{
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (ktraNgTo(arr[i][j]))
				++count;
		}

	}
	return count;
}
int TongCacPhanTuKhongAm(int arr[][MAXN], int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr[i][j] > 0)
				sum += arr[i][j];
		}

	}
	return sum;
}
int TongCheoChinh(int arr[][MAXN], int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i][i];
	}
	return sum;
}
bool CheoChinhTangDan(int arr[][MAXN], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		if (arr[i][i] > arr[i + 1][i + 1])
			return false;
	}
	return true;
}
int TongCheoPhu(int arr[][MAXN], int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i][n - i - 1];
	}
	return sum;
}
void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 1; j < n - i; j++)
		{
			if (arr[j] < arr[j - 1])
			{
				unsigned int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}

}
void SapXepTangDanTungDong(int arr[][MAXN], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 1; k < n - j; k++)
			{
				if (arr[i][k] < arr[i][k - 1])
				{
					int temp = arr[i][k];
					arr[i][k] = arr[i][k - 1];
					arr[i][k - 1] = temp;
				}
			}
		}
	}
}
void MinMaxDongCotMang(int arr[][MAXN], int n)
{
	int maxRow, maxColumn, minRow, minColumn, Max, Min;
	Max = arr[0][0];
	Min = arr[0][0];
	for (int i = 0; i < n; ++i)
	{
		maxRow = arr[i][0];
		minRow = arr[i][0];
		maxColumn = arr[0][i];
		minColumn = arr[0][i];
		for (int j = 0; j < n; ++j)
		{
			if (maxRow < arr[i][j])
				maxRow = arr[i][j];
			if (minRow > arr[i][j])
				minRow = arr[i][j];
			if (maxColumn < arr[j][i])
				maxColumn = arr[j][i];
			if (minColumn > arr[j][i])
				minColumn = arr[j][i];
		}
		if (Max < maxRow)
			Max = maxRow;
		if (Min > minRow)
			Min = minRow;

		std::cout << "Phan tu lon nhat dong " << i << " la: " << maxRow << '\n';
		std::cout << "Phan tu nho nhat dong " << i << " la: " << minRow << '\n';
		std::cout << "Phan tu lon nhat cot " << i << " la: " << maxColumn << '\n';
		std::cout << "Phan tu nho nhat cot " << i << " la: " << minColumn << '\n';
	}
	std::cout << "Phan tu lon nhat mang la: " << Max << '\n';
	std::cout << "Phan tu nho nhat mang la: " << Min << '\n';
}
void LonNhatDongVeCheoChinh(int arr[][MAXN], int n)
{
	for (int i = 0; i < n; ++i)
	{
		int MaxRow = arr[i][0];
		int idMaxRow = 0;
		for (int j = 1; j < n; ++j)
		{
			if (MaxRow < arr[i][j])
			{
				MaxRow = arr[i][j];
				idMaxRow = j;
			}
		}
		int temp = arr[i][i];
		arr[i][i] = arr[i][idMaxRow];
		arr[i][idMaxRow] = temp;
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

/*
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{

		}
	}
	12345
*/
