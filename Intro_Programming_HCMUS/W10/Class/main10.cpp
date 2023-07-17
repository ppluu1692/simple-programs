#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	fstream input;
	fstream output;

	input.open("input.txt", ios::in);
	output.open("output.txt", ios::out);

	input.close();
	output.close();

	return 0;
}