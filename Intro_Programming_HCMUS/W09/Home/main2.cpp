#include "lib2.h"

int main()
{
	Diem2D A, B, C, D;

	A.X = 0;
	B.X = 0;
	C.X = 0;
	D.X = 0;
	A.Y = 0;
	B.Y = 0;
	C.Y = 0;
	D.Y = 0;
	double Area, Perimeter;
	int option = 0;

	do
	{
		cout << "1. Input and Output two points\n";
		cout << "2. Find distance between two points\n";
		cout << "3. Find the Quardrant that the point is in\n";
		cout << "4. Find Area and Perimeter\n";
		cout << "5. Check if the point D is in ABC triangle\n";
		cin >> option;
		system("cls");
		bool isTriangle = true;
		switch (option)
		{
		case 1:
			cout << "Input Point A:\n";
			inputPoint(A);
			cout << "\nInput Point B:\n";
			inputPoint(B);
			cout << "\Point A: ";
			outputPoint(A);
			cout << "\nPoint B: ";
			outputPoint(B);
			cout << endl;
			break;
		case 2:
			cout << "Distance between A and B: " << distance(A, B);
			cout << endl;
			break;
		case 3:
			cout << "Point A is in Quardrant " << whichQuardrant(A);
			cout << endl;
			break;
		case 4:
			cout << "Input point C:\n";
			inputPoint(C);
			AreaPerimeterTriangle(A, B, C, Area, Perimeter);
			if (Area < 1E-09)
				cout << "ABC is not a triangle";
			else
			{
				cout << "Area: " << Area;
				cout << "\nPerimetercertain: " << Perimeter;
			}
			cout << endl;
			break;
		case 5:
			cout << "Input point D:\n";
			inputPoint(D);
			if (Area >= 1E-09)
			{
				if (isinTriangle(A, B, C, D))
					cout << "D is in ABC triangle";
				else
					cout << "D is NOT in ABC triangle";
			}
			else
				cout << "ABC is not a triangle";
			cout << endl;
			break;
		case 0:
			break;
		default:
			cout << "Wrong option";
		}
		cout << "\n\n\n\n";
	} while (option != 0);

	system("pause");
	return 0;
}