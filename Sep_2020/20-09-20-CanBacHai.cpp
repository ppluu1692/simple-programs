/*
* A program to find square root of a number using Newton's method.
* 
* PL_small_problems#18, last update: 17.07.23
*/

#include <iostream>
using namespace std;

int main()
{
	cout <<"TINH CAN BAC HAI CUA a (a>0)\n\n";
	cout <<"Nhap a: ";
	double a;
	cin >>a;
	double s = a;
	for (int i=0; i<10; i++)
	{
	    s = 1.0/2*(s+a/s);
	    
	}
	printf ("Can bac hai cua %.2f la %.10f",a,s);
	return 0;
	
}