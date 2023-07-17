#include "bt15_lib.h"

void nhapMang(int arr[9][9])
{
	srand(100);
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			//cout << "Nhap vao phan tu [" << i << "][" << j << "]: ";
			//cin >> arr[i][j];
			arr[i][j] = rand() % 90 + 10;
		}
	}
}

void xuatMang(int arr[9][9])
{
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			cout << arr[i][j] << " ";
			if (j % 3 == 2)
				cout << " ";
		}
		if (i % 3 == 2)
			cout << '\n';
		cout << '\n';
	}
}

void MinMaxSum(int arr[9][9])
{
	int sum[9] = { 0 };
	for (int i = 0; i < 9; ++i)
	{
		for (int p = 0; p < 3; ++p)
		{
			for (int q = 0; q < 3; ++q)
			{
				sum[i] += arr[3 * (i / 3) + p][3 * (i % 3) + q];
			}
		}
	}
	int Max = sum[0];
	int Min = sum[0];
	for (int i = 1; i < 9; ++i)
	{
		if (Max < sum[i])
			Max = sum[i];
		if (Min > sum[i])
			Min = sum[i];
	}
	cout << "\nMa tran con co tong cac phan tu lon nhat: ";
	for (int i = 0; i < 9; ++i)
	{
		if (Max == sum[i])
			cout << i << '\t';
	}
	cout << "\nMa tran con co tong cac phan tu nho nhat: ";
	for (int i = 0; i < 9; ++i)
	{
		if (Min == sum[i])
			cout << i << '\t';
	}
	cout << endl;
}

void MinMax(int arr[9][9])
{
	int Max = arr[0][0];
	int Min = arr[0][0];
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			if (Max < arr[i][j])
				Max = arr[i][j];
			if (Min > arr[i][j])
				Min = arr[i][j];
		}
	}
	cout << "\nMa tran con chua Max la: ";
	for (int i = 0; i < 9; ++i)
	{
		bool flag = false;
		for (int p = 0; p < 3; ++p)
		{
			for (int q = 0; q < 3; ++q)
			{
				if (arr[3 * (i / 3) + p][3 * (i % 3) + q] == Max)
					flag = true;
			}
		}
		if (flag)
			cout << i << '\t';
	}
	cout << "\nMa tran con chua Min la: ";
	for (int i = 0; i < 9; ++i)
	{
		bool flag = false;
		for (int p = 0; p < 3; ++p)
		{
			for (int q = 0; q < 3; ++q)
			{
				if (arr[3 * (i / 3) + p][3 * (i % 3) + q] == Min)
					flag = true;
			}
		}
		if (flag)
			cout << i << '\t';
	}
	cout << endl;
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

void MinMaxPrime(int arr[9][9])
{
	int MaxPrime = 0;
	int MinPrime = INT_MAX;
	for (int i = 0; i < 9; ++i)
	{
		for (int p = 0; p < 3; ++p)
		{
			for (int q = 0; q < 3; ++q)
			{
				if (ktraNgTo(arr[3 * (i / 3) + p][3 * (i % 3) + q]))
				{
					if (arr[3 * (i / 3) + p][3 * (i % 3) + q] > MaxPrime)
						MaxPrime = arr[3 * (i / 3) + p][3 * (i % 3) + q];
					if (arr[3 * (i / 3) + p][3 * (i % 3) + q] < MinPrime)
						MinPrime = arr[3 * (i / 3) + p][3 * (i % 3) + q];
				}
			}
		}
	}
	if (MaxPrime == 0)
		cout << "\nKhong co so nguyen to nao\n";
	else
	{
		cout << "\nMang con chua so nguyen to lon nhat la: ";
		for (int i = 0; i < 9; ++i)
		{
			bool flag = false;
			for (int p = 0; p < 3; ++p)
			{
				for (int q = 0; q < 3; ++q)
				{
					if (arr[3 * (i / 3) + p][3 * (i % 3) + q] == MaxPrime)
						flag = true;
				}
			}
			if (flag)
				cout << i << '\t';
		}
		cout << "\nMang con chua so nguyen to nho nhat la: ";
		for (int i = 0; i < 9; ++i)
		{
			bool flag = false;
			for (int p = 0; p < 3; ++p)
			{
				for (int q = 0; q < 3; ++q)
				{
					if (arr[3 * (i / 3) + p][3 * (i % 3) + q] == MinPrime)
						flag = true;
				}
			}
			if (flag)
				cout << i << '\t';
		}
	}
	cout << endl;
}

void HoanDoihk(int arr[9][9])
{
	int h, k;
	cout << "\nNhap h: ";
	cin >> h;
	cout << "Nhap k: ";
	cin >> k;

	for (int p = 0; p < 3; ++p)
	{
		for (int q = 0; q < 3; ++q)
		{
			int temp = arr[3 * (h / 3) + p][3 * (h % 3) + q];
			arr[3 * (h / 3) + p][3 * (h % 3) + q] = arr[3 * (k / 3) + p][3 * (k % 3) + q];
			arr[3 * (k / 3) + p][3 * (k % 3) + q] = temp;
		}
	}
	cout << "Mang sau khi hoan doi:" << endl;
	xuatMang(arr);
}

void SapXepTongTang(int arr[9][9])
{
	int sum[9] = { 0 };
	for (int i = 0; i < 9; ++i)
	{
		for (int p = 0; p < 3; ++p)
		{
			for (int q = 0; q < 3; ++q)
			{
				sum[i] += arr[3 * (i / 3) + p][3 * (i % 3) + q];
			}
		}
	}
	for (int i = 0; i < 9; ++i)
	{
		int index = 0;
		int Min = sum[0];
		for (int i = 0; i < 9; i++)
		{
			if (Min > sum[i])
			{
				Min = sum[i];
				index = i;
			}
		}
		if (index != i)
		{
			for (int p = 0; p < 3; ++p)
			{
				for (int q = 0; q < 3; ++q)
				{
					int temp = arr[3 * (i / 3) + p][3 * (i % 3) + q];
					arr[3 * (i / 3) + p][3 * (i % 3) + q] = arr[3 * (index / 3) + p][3 * (index % 3) + q];
					arr[3 * (index / 3) + p][3 * (index % 3) + q] = temp;
				}
			}
			int tam = sum[i];
			sum[i] = sum[index];
			sum[index] = tam;
		}
		sum[i] = INT_MAX;
	}
	cout << "\nSau khi sap xep:\n";
	xuatMang(arr);
}