#include "array.h"
#include <iostream>

void nhapMang(float arr[], int& n)
{
	do
	{
		std::cout << "Nhap so luong phan tu: ";
		std::cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		std::cout << "Nhap phan tu thu " << i << ": ";
		std::cin >> arr[i];
	}
}
void xuatMang(float arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << '\t';
	}
	std::cout << std::endl;
}