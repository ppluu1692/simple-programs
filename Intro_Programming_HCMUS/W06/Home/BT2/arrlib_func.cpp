#include "arrlib.h"
#include <iostream>

void xoa1PhanTu(unsigned int arr[], int& n, int pos)
{
	for (int i = pos; i < n - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	--n;
}

void xoakPhanTu(unsigned int arr[], int& n, int k, int i)
{
	for (; i < n - k; i++)
	{
		arr[i] = arr[i + k];
	}
	n -= k;
}

void demvainCacPhanTuKhacNhau(unsigned int arr[], int n)
{
	std::cout << "Cac phan tu khac nhau trong mang la: \n";
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		bool repeat = false;
		for (int j = 0; j < i; ++j)
		{
			if (arr[j] == arr[i])
				repeat = true;
		}
		if (!repeat)
		{
			std::cout << arr[i] << ' ';
			++count;
		}
	}
	std::cout << "\nSo luong phan tu khac nhau: " << count;
	std::cout << '\n';
}

unsigned int timSoLonThuHai(unsigned int arr[], int n)
{
	unsigned int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	unsigned int secondMax = 0;
	for (int i = 0; i < n; i++)
	{
		if (secondMax < arr[i] and arr[i] < max)
		{
			secondMax = arr[i];
		}
	}
	return secondMax;
}

unsigned int PhanTuXuatHienNhieuNhat(unsigned int arr[], int n)
{
	int max = 0;
	int index = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		int count = 0;
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[j] == arr[i])
				count++;
		}
		if (max < count)
		{
			max = count;
			index = i;
		}
	}
	return arr[index];
}

unsigned int PhanTuNhoNhatTrenDoanXY(unsigned int arr[], int x, int y)
{
	unsigned int Min = arr[x];
	for (int i = x + 1; i < y; ++i)
	{
		if (Min > arr[i])
			Min = arr[i];
	}
	return Min;
}

unsigned int TongLonNhatCacPhanTuLienTiep(unsigned int arr[], int n, int k)
{
	unsigned int sum = 0;
	for (int i = 0; i < k; ++i)
		sum += arr[i];
	unsigned int maxSum = sum;
	for (int i = 1; i < n - k; i++)
	{
		sum += arr[i + k - 1];
		sum -= arr[i - 1];
		if (sum > maxSum)
			maxSum = sum;
	}
	return maxSum;
}

void daonguocMang(unsigned int arr[], int n)
{
	for (int i = 0; i < n / 2; ++i)
	{
		unsigned int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}

void bubbleSort(unsigned int arr[], int n)
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

void sapxepChanLe(unsigned int arr[], int n)
{
	unsigned int evenArr[MAXN] = { 0 };
	unsigned int oddArr[MAXN] = { 0 };
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
	daonguocMang(oddArr, n_odd);
	for (int i = 0; i < n_even + n_odd; i++)
	{
		if (i < n_even)
			arr[i] = evenArr[i];
		else
			arr[i] = oddArr[i - n_even];
	}
}

bool ktraSoChinhPhuong(unsigned int n)
{
	int k = (int)sqrt(n);
	if (k * k == n)
		return true;
	++k;
	if (k * k == n)
		return true;
	k -= 2;
	if (k * k == n)
		return true;
	return false;
}

void sapxepChinhPhuong(unsigned int arr[], int n)
{
	unsigned int squareArr[MAXN] = { 0 };
	int n_square = 0;

	for (int i = 0; i < n; i++)
	{
		if (ktraSoChinhPhuong(arr[i]))
		{
			squareArr[n_square] = arr[i];
			n_square++;
			arr[i] = 0;
		}
	}

	if (n_square >= 1)
	{
		bubbleSort(squareArr, n_square);
		n_square = 0;
		for (int i = 1; i < n; ++i)
		{
			if (arr[i] == 0)
			{
				arr[i] = squareArr[n_square];
				n_square++;
			}
		}
	}
}

void daoMangmn(unsigned int arr[], int n, int m)
{
	int n_infl = n + n - m;
	for (int i = n_infl - 1; i >= n - m; i--)
	{
		arr[i] = arr[i - n + m];
	}
	for (int i = 0; i < n - m; i++)
	{
		arr[i] = arr[i + n];
	}
}

bool ktraTangDan(unsigned int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] > arr[i])
			return false;
	}
	return true;
}

void inDayConTangDan(unsigned int arr[], int n)
{
	unsigned int subArr[MAXN] = { 0 };
	int n_sub = 0;
	int index = 0;
	int maxN = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		if (arr[i] <= arr[i + 1])
		{
			n_sub++;
		}
		else
		{
			n_sub++;
			if (maxN < n_sub)
			{
				maxN = n_sub;
				index = i;
			}
			n_sub = 0;
		}
	}
	index++;
	std::cout << "Day con tang dan dai nhat trong mang la:\n";
	for (int i = index - maxN; i < index; ++i)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}

void inTatCaDayConTangDan(unsigned int arr[], int n)
{
	std::cout << "Cac day con tang dan trong mang la:\n";
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] <= arr[i + 1])
		{
			std::cout << arr[i] << ' ';
		}
		else if (arr[i] >= arr[i - 1])
		{
			std::cout << arr[i] << '\n';
		}
	}
	std::cout << '\n';
}

bool ktraNgTo(float n)
{
	int m = (int)n;
	if (m < 2)
		return false;
	else if (m == 2)
		return true;
	else if (m % 2 == 0)
		return false;

	for (int i = 3; i <= sqrt(n); i += 2)
	{
		if (m % i == 0)
			return false;
	}

	return true;
}

void inSoNgToNhoNhat(unsigned int arr[], int n)
{
	unsigned int minPrime = 2 * INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (ktraNgTo(arr[i]))
			if (arr[i] < minPrime)
				minPrime = arr[i];
	}
	if (minPrime == 2 * INT_MAX)
		std::cout << "Khong co so nguyen to trong mang";
	else
		std::cout << "So nguyen to nho nhat trong mang la: " << minPrime;
	std::cout << '\n';
}