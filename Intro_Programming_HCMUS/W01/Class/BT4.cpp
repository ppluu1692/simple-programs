#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	double x = 0.0;
	cout << "Nhap vao x: ";
	cin >> x;
	cout << "3.x^3 - 2.x^2 = " << setprecision(2) << fixed << 3 * x * x * x - 2 * x * x << endl;
	system("pause");
}