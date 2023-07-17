#include "lib2.h"

void inputPoint(Diem2D& P)
{
	cout << "Enter X value: ";
	cin >> P.X;
	cout << "Enter Y value: ";
	cin >> P.Y;
}

void outputPoint(Diem2D& P)
{
	cout << " (" << P.X << " ; " << P.Y << ") ";
}

double distance(Diem2D P1, Diem2D P2)
{
	return sqrt((P1.X - P2.X) * (P1.X - P2.X) + (P1.Y - P2.Y) * (P1.Y - P2.Y));
}

string whichQuardrant(Diem2D P)
{
	if (P.X * P.Y > 0)
	{
		if (P.X > 0)
			return "I";
		else
			return "III";
	}
	else if (P.X * P.Y < 0)
	{
		if (P.X > 0)
			return "IV";
		else
			return "II";
	}
	else
		return "0";
}

void AreaPerimeterTriangle(Diem2D A, Diem2D B, Diem2D C, double& Area, double& Perimeter)
{
	double AB = distance(A, B);
	double BC = distance(B, C);
	double AC = distance(A, C);
	Perimeter = AB + BC + AC;
	double halfC = Perimeter / 2.0;
	Area = sqrt(halfC * (halfC - AB) * (halfC - BC) * (halfC - AC));
}

bool isinTriangle(Diem2D A, Diem2D B, Diem2D C, Diem2D D)
{
	if ((((B.Y - A.Y) * (C.X - A.X) - (B.X - A.X) * (C.Y - A.Y)) * ((B.Y - A.Y) * (D.X - A.X) - (B.X - A.X) * (D.Y - A.Y))) < -1E-09)
		return false;
	if ((((C.Y - A.Y) * (B.X - A.X) - (C.X - A.X) * (B.Y - A.Y)) * ((C.Y - A.Y) * (D.X - A.X) - (C.X - A.X) * (D.Y - A.Y))) < -1E-09)
		return false;
	if ((((C.Y - B.Y) * (A.X - B.X) - (C.X - B.X) * (A.Y - B.Y)) * ((C.Y - B.Y) * (D.X - B.X) - (C.X - B.X) * (D.Y - B.Y))) < -1E-09)
		return false;
	return true;
}