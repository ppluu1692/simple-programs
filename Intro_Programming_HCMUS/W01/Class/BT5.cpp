#include <iostream>
using namespace std;

void main()
{
	float cDai = 0;
	float cRong = 0;
	cout << "Nhap vao chieu dai: ";
	cin >> cDai;
	cout << "Nhap vao chieu rong: ";
	cin >> cRong;
	cout << "Dien tich cua hinh chu nhat la: " << cDai * cRong << endl;
	cout << "Chu vi cua hinh chu nhat la: " << 2 * cDai * cRong << endl;
	system("pause");
}