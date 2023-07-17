#include "arrlib.h"
#include <iostream>

void nhapMang(unsigned int arr[], int& n)
{
	do
	{
		std::cout << "Nhap so luong phan tu trong mang: ";
		std::cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		do
		{
			std::cout << "Nhap phan tu thu " << i <<" (lon hon 0): ";
			std::cin >> arr[i];
		} while (arr[i] <= 0);
	}
}
void xuatMang(unsigned int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}