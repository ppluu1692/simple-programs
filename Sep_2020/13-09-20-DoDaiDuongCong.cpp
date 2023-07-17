/*
* A program to find the length of a curved line
* 
* Method: Using small line approximate.
*
* PL_small_problems#11, last update: 17.07.23
*/

#include <iostream>
#include <cmath>

using namespace std;

double fx(double x)
{
	return 2.0*x;
}

int main(int argc, char *argv[])
{
	cout <<"TIM DO DAI CUA DO THI HAM SO\n";
	int n(5000);
	
	cout <<"Nhap vao doan a, b: ";
	double a, b;
	cin >>a >>b;
	
	if (a>b) 
	{
		double tam = a;
		a = b;
		b = tam;
	}
	
	double s(0.0);
	
	if (a==b) 
		s = 0.0;
	// chia ham so thanh cac doan nho va tinh xap xi do dai cua cac doan do
	else 
	{
		double d = (b-a)/n*1.0;
		for (int i=0; i<n; i++)
		{
			s+= sqrt(d*d + (fx(a+d*(i+1))-fx(a+d*i))*(fx(a+d*(i+1))-fx(a+d*i)));	
		}
	}
	
	cout <<"Do dai la: "<<s;
	
	return 0;		
	
}