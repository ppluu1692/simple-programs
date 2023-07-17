#include <iostream>
using namespace std;

int main()
{
	int xA = 0, xB = 0, yA = 0, yB = 0, xC = 0, yC = 0;
	cout << "Nhap vao xA, yA: ";
	cin >> xA >> yA;
	cout << "Nhap vao xB, yB: ";
	cin >> xB >> yB;
	cout << "Nhap vao xC, yC: ";
	cin >> xC >> yC;
	if (xA > xB)
	{
		int tam = xA;
		xA = xB;
		xB = tam;
	}
	if (yA > yB)
	{
		int tam = yA;
		yA = yB;
		yB = tam;
	}

	if (xC > xA && xC<xB && yC>yA && yC < yB)
		cout << "C nam trong hinh chu nhat";
	else if (((xC == xA || xC == xB) && (yC >= yA && yC <= yB)) || ((yC == yA || yC == yB) && (xC >= xA && xC <= xB)))
		cout << "C nam tren hinh chu nhat";
	else
		cout << "C nam ngoai hinh chu nhat";

	cout << endl;
	system("pause");
	return 0;
}