#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, d, x1, x2;
	fstream input;
	fstream output;
	input.open("input.txt", ios::in);
	output.open("output.txt", ios::out);
	input >> a >> b >> c;
	if (a != 0)
	{
		d = b * b - 4 * a * c;
		if (d > 0)
		{
			x1 = (-b + sqrt(d)) / 2 / a;
			x2 = (-b - sqrt(d)) / 2 / a;
			output << x1 << "\n" << x2;
		}
		else if (d == 0)
		{
			x1 = -b / 2 / a;
			output << x1;
		}
		else
		{
			output << "Math ERROR";
		}
	}
	else
		output << "Math ERROR";
	input.close();
	output.close();
	cout << "\nProgram successfully completed, check file to see result\n";

	system("pause");
	return 0;
}