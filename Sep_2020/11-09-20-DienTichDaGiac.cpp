/*
* A program to find area of polygons.
* 
* Method: Shoelace formula.
*
* PL_small_problems#09, last update: 17.07.23
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "TINH DIEN TICH CUA DA GIAC LOI\nVOI TOA DO CAC DINH\n\n";
	
	int n(0);
	
	do
	{
		cout <<"Nhap so dinh: ";
		cin >>n;
	}
	while (n<=2);
	
	int tdx[n+1];
	int tdy[n+1];
	for (int i = 0;i<n;i++)
	{
		cout <<"Nhap vao x"<<i+1<<", y"<<i+1<<": ";
		cin >>tdx[i]>>tdy[i];
	}
	
	tdx[n] = tdx[0];
	tdy[n] = tdy[0];
	double s(0.0);
	
	// dung cong thuc Shoelace de tinh dien tich da giac
	for (int i=0; i<n; i++)
	{
		s+=(tdx[i+1]-tdx[i])*(tdy[i+1]+tdy[i])*1.0;	
	}
	
	s = abs(s)/2;
	cout <<"Dien tich la: "<<s;
	
	return 0;

}