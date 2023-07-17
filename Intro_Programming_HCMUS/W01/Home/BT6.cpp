#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.1416;

int main()
{
	float CanhTG = 0.0;
	float BKinh = 0.0;

	cout << "Nhap vao do dai canh tam giac: ";
	cin >> CanhTG;
	cout << "Nhap vao ban kinh hinh tron: ";
	cin >> BKinh;

	float DTich = 0.0;
	// Dien tich can tim bang dien tich 3 tam giac cong mot nua dien tich hinh tron
	DTich = 3 * CanhTG * CanhTG * sqrt(3) * 0.25 + 0.5 * PI * BKinh * BKinh;

	cout << "Dien tich can tim la: " << DTich << endl;

	system("pause");
	return 0;
}