#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float M = 0.0;
	float q = 0.0;
	int n = 0;

	cout << "Nhap vao so tien gui M: ";
	cin >> M;
	cout << "Nhap vao so thang gui n: ";
	cin >> n;
	cout << "Nhap vao lai suat q: ";
	cin >> q;

	float lai = M * pow((1 + q), n) - M;

	printf ("Tien lai sau n thang la: %9.0f\n", lai );

	system("pause");
	return 0;
}