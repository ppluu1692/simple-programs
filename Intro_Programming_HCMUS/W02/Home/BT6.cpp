#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float soKm = 0.0;
	float tien = 0;

	cout << "Nhap vao so km di duoc: ";
	cin >> soKm;

	int so_km = (int)floor(soKm);

	if (so_km < 1)
		tien = 0;
	else if (so_km == 1)
		tien = 15000;
	else if (so_km <= 5)
		tien = 15000 + (so_km - 1) * 13500;
	else
		tien = 15000 + 4 * 13500 + (so_km - 5) * 11000;
	if (so_km > 120)
		tien = 0.9 * tien;
	cout << "so tien can phai tra la: " << fixed << tien << endl;

	system("pause");
	return 0;
}