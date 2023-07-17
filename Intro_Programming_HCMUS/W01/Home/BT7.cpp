#include <iostream>
using namespace std;

const float PI = 3.1416;

int main()
{
	float DTich = 0.0;

	cout << "Nhap vao dien tich: ";
	cin >> DTich;

	float BKinh = 0.0;
	BKinh = sqrt(DTich / PI);

	cout << "Ban kinh cua hinh tron la: " << BKinh << endl;

	system("pause");
	return 0;
}