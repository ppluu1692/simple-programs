#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Diem2D
{
	double X;
	double Y;
}; 

#ifndef _LIB_2_H_
#define _LIB_2_H_

void inputPoint(Diem2D& P);
void outputPoint(Diem2D& P);
double distance(Diem2D P1, Diem2D P2);
string whichQuardrant(Diem2D P);
void AreaPerimeterTriangle(Diem2D A, Diem2D B, Diem2D C, double& Area, double& Perimeter);
bool isinTriangle(Diem2D A, Diem2D B, Diem2D C, Diem2D D);

#endif
