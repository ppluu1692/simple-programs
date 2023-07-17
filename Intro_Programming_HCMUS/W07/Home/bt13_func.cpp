#include "bt13_lib.h"

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

void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 1; j < n - i; j++)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}

}

void daonguocMang(int arr[], int n)
{
	for (int i = 0; i < n / 2; ++i)
	{
		int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}

void sapxepChanLe(int arr[], int n)
{
	int evenArr[MAXN] = { 0 };
	int oddArr[MAXN] = { 0 };
	int n_even = 0;
	int n_odd = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenArr[n_even] = arr[i];
			n_even++;
		}
		else
		{
			oddArr[n_odd] = arr[i];
			n_odd++;
		}
	}
	bubbleSort(evenArr, n_even);
	bubbleSort(oddArr, n_odd);
	daonguocMang(evenArr, n_even);
	for (int i = 0; i < n_even + n_odd; i++)
	{
		if (i < n_odd)
			arr[i] = oddArr[i];
		else
			arr[i] = evenArr[i - n_odd];
	}
}

void baitap13(int arr[][MAXN], int m, int n)
{
	int subArr[MAXM * MAXN];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			subArr[i * n + j] = arr[i][j];
		}
	}
	sapxepChanLe(subArr, m * n);
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr[i][j] = subArr[i * n + j];
		}
	}
}