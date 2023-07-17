#include "bt7_lib.h"


void nhapMang(float arr[][MAXN], int& m, int& n)
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

int timMin(float arr[], int n)
{
	int index = 0;
	float Min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Min > arr[i])
		{
			Min = arr[i];
			index = i;
		}
	}
	return index;
}

void baitap7(float arr[][MAXN], int m, int n)
{
	float sum[MAXM] = { 0 };
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			sum[i] += arr[i][j];
		}
	}
	for (int i = 0; i < m; ++i)
	{
		int index = timMin(sum, m);
		if (index != i)
		{
			for (int j = 0; j < n; ++j)
			{
				float temp = arr[i][j];
				arr[i][j] = arr[index][j];
				arr[index][j] = temp;
			}
			float tam = sum[i];
			sum[i] = sum[index];
			sum[index] = tam;
		}
		sum[i] = 3.4e38;
	}

}
