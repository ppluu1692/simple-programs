/*
* A program to find the least common multiple (LCM) from two integer number
* 
* Method: lcm(a, b) = abs(a*b) / gcd(a, b), using binary GCD algorithm
*
* PL_small_problems#01, last update: 17.07.23
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	cout << "TIM BOI CHUNG NHO NHAT\n";
	
	int a,b;
	a = 1;
	b = 1;
	
	cout << "Nhap vao hai so a, b: ";
	cin >>a >>b;
	
	int m = a;
	int n = b;
	
	///tìm UCLN
	while (m != n) 
	{
		if (m>n) m = m-n;
		else n = n-m;
	}
	
	int BCNN = abs(a*b)/m;
	
	printf ("Boi chung nho nhat cua %d va %d la %d." ,a,b,BCNN);
	
	return 0;
}