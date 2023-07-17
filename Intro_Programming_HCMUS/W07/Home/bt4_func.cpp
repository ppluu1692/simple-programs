#include "bt4_lib.h"

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

void DiemYenNgua(int arr[][MAXN], int m, int n)
{
	int count = 0;
	for (int i = 0; i < m; ++i)
	{
		int minRow = arr[i][0];
		int indexMin = 0;
		for (int j = 0; j < n; ++j)
		{
			if (minRow > arr[i][j])
			{
				minRow = arr[i][j];
				indexMin = j;
			}
		}
		bool flag = true;
		for (int j = 0; j < m; ++j)
		{
			if (minRow <= arr[j][indexMin] && j != i)
			{
				flag = false;
				break;
			}
		}
		if (flag)
			count++;
	}
	cout << "So diem yen ngua la: " << count << endl;
}
