#include "array.h"
#include <cmath>

float timMax(float arr[], int n)
{
	float max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

float tongSoKhongAm(float arr[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			sum += arr[i];
	}
	return sum;
}

float tongPhanTuTaiViTriChan(float arr[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i+=2)
	{
		sum += arr[i];
	}
	return sum;
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

int demNguyenTo(float arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktraNgTo((int)arr[i]))
			count++;
	}
	return count;
}

float timMin(float arr[], int n)
{
	float min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

float PhanTuAmLonNhat(float arr[], int n, bool& exist)
{
	float negMax = timMin(arr, n);
	for (int i = 0; i < n; i++)
	{
		if (negMax < arr[i] && arr[i] < 0)
			negMax = arr[i];
	}
	if (negMax < 0)
		exist = true;
	else
		exist = false;
	return negMax;
}

float PhanTuKhongAmNhoNhat(float arr[], int n, bool& exist)
{
	float posMin = timMax(arr, n);
	for (int i = 0; i < n; i++)
	{
		if (posMin > arr[i] && arr[i] >= 0)
			posMin = arr[i];
	}
	if (posMin >= 0)
		exist = true;
	else
		exist = false;
	return posMin;
}

bool ktraTangDan(float arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] > arr[i])
			return false;
	}
	return true;
}

bool ktraSoChinhPhuong(float n)
{
	int m = (int)n;
	int k = (int)sqrt(m);
	if (k * k == m)
		return true;
	++k;
	if (k * k == m)
		return true;
	k -= 2;
	if (k * k == m)
		return true;
	return false;
}

float TongSoChinhPhuong(float arr[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktraSoChinhPhuong(arr[i]))
			sum += arr[i];
	}
	return sum;
}