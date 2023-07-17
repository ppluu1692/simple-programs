#include "bt14_lib.h"

void xuatMang(int arr[][MAXN], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
}

void baitap14(int arr[][MAXN], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (n % 2 == 0)
			{
				float x = i - 0.5 * (n - 1);
				float y = j - 0.5 * (n - 1);
				if (x > 0)
					x = floor(x);
				else
					x = ceil(x);
				if (y > 0)
					y = floor(y);
				else
					y = ceil(y);
				arr[i][j] = max(abs(x), abs(y));
			}
			else
				arr[i][j] = max(abs(i - (n - 1) / 2), abs(j - (n - 1) / 2));
		}
	}
}