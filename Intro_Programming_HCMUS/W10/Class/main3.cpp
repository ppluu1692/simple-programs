#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
const int MAX = 100;

int main()
{
	fstream input;
	fstream output;

	input.open("input.txt", ios::in);
	output.open("output.txt", ios::out);

	int a[MAX];
	int n = 0;
	while (input >> a[n++]);
	n--;

	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		output << a[i] << "\n";
	}

	input.close();
	output.close();

	return 0;
}