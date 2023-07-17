#include "array.h"
#include <iostream>

void nhapMang(float arr[MAXN], int& n)
{
	do
	{
		std::cout << "Nhap N > 0: ";
		std::cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		std::cout << "Nhap phan tu thu " << i << ": ";
		std::cin >> arr[i];
	}
}
void xuatMang(float arr[MAXN], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << '\t';
	}
	std::cout << std::endl;
}