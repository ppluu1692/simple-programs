/*
* A program to find fractional approximations of pi.
* 
* PL_small_problems#15, last update: 17.07.23
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	const double pi = 3.14159265358979323846;
	cout <<"TIM CAC PHAN SO XAP XI PI \n\n";
	cout <<"a/b\tSai so\n";
	uint64_t ts (1);
	double d = 10;
	for (uint64_t ms=1;ms<100000000;ms++)
	{
		ts = round(ms*pi);	
		if (abs(1.0*ts/ms-pi)<d)
		{
			d = abs(1.0*ts/ms-pi);
			printf ("%d/%d\t%.15f\n",ts,ms,d);
		}
	}

	return 0;
}