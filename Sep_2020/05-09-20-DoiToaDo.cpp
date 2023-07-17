/*
* A program to convert from Polar to Rectangular coordinates
* and vice versa 
* 
* Method: 
* (r, theta) -> (r*cos(theta), r*sin(theta))
* (x, y) -> (sqrt(x*x + y*y), atan(y/x))
*
* PL_small_problems#03, last update: 17.07.23
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	double p = 3.141592653589793;
	cout <<"CHUYEN DOI GIUA\nTOA DO DESCARTES VA TOA DO CUC";
	
	cout <<"Chon phep tinh:\n";
	cout <<"1. Descartes sang cuc (Pol)\n";
	cout <<"2. Cuc sang Descartes (Rec)\n";
	int k(0);
	cin >>k;
	
	if (k==1)
	{
		double x,y,r,theta;
		cout <<"Nhap toa do x,y: ";
		cin >>x >>y;
		r = sqrt(x*x+y*y);
		theta = atan(y/x)*180/p;
		printf("r = %.2f; phi = %.4f.",r,theta);
			
	}
	else
	{
		double x,y,r,theta;
		cout <<"Nhap vao r va phi: ";
		cin >>r >>theta;
		x = r*cos(theta*p/180);
		y = r*sin(theta*p/180);
		printf ("x = %.2f; y = %.2f",x,y);
	}
	return 0;	
}