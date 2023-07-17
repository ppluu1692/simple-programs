#include <iostream>
using namespace std;
const float PI = 3.1416;

int main()
{
	float BKinh = 0.0;

	cout << "Nhap vao ban kinh hinh tron: ";
	cin >> BKinh;

	cout << "Dien tich hinh tron la: " << PI * BKinh * BKinh << endl;
	cout << "Chi vi hinh tron la: " << 2 * PI * BKinh << endl;

	system("pause");
	return 0;
}