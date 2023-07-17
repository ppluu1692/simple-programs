#include "bt10_lib.h"

struct point {
	int value;
	int x;
	int y;
} Max, Min, Maxima;

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

void bt10a(int arr[][MAXN], int m, int n)
{
	Max.value = arr[0][0];
	Min.value = arr[0][0];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (Max.value < arr[i][j])
			{
				Max.value = arr[i][j];
			}
			if (Min.value > arr[i][j])
			{
				Min.value = arr[i][j];
			}
		}
	}
	if (Max.value != Min.value)
	{
		int MaxDistance = 0;
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (arr[i][j] == Min.value)
				{
					for (int k = 0; k < m; k++)
					{
						for (int l = 0; l < n; l++)
						{
							if (arr[k][l] == Max.value && MaxDistance < abs(k - i) + abs(l - j))
								MaxDistance = abs(k - i) + abs(l - j);
						}
					}
				}
			}
		}
		cout << "\nKhoang cach city-block lon nhat giua Min va Max la: " << MaxDistance << endl;
	}
	else
		cout << "\nCac phan tu deu bang nhau\n";
}

bool isMaxima(int arr[][MAXN], int m, int n, int i, int j)
{
	for (int k = 0; k < 9; ++k)
	{
		int x = k / 3 - 1 + i;
		int y = k % 3 - 1 + j;
		if (!(x == i && y == j) && arr[i][j] <= arr[x][y])
			return false;
	}
	return true;
}

void bt10b(int arr[][MAXN], int m, int n)
{
	int count = 0;
	int MaxDistance = 0;
	for (int i = 1; i < m - 1; ++i)
	{
		for (int j = 1; j < n - 1; ++j)
		{
			if (isMaxima(arr, m, n, i, j))
			{
				for (int k = 1; k < m - 1; k++)
				{
					for (int l = 1; l < n - 1; l++)
					{
						if (isMaxima(arr, m, n, k, l) && MaxDistance < abs(k - i) + abs(l - j))
						{
							MaxDistance = abs(k - i) + abs(l - j);
							count++;
						}
					}
				}
			}
		}
	}
	if (count == 0)
		cout << "\nKhong du hai cuc dai\n";
	else
		cout << "\nKhoang cach city-block lon nhat giua hai cuc dai la:" << MaxDistance << endl;
}
