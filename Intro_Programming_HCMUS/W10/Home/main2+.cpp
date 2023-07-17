#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream input;
	input.open("input.txt", ios::in);
	int n = 0;
	int count = 0;
	while (input >> n)
	{
		cout << n << ' ';
		if (count++ % 15 == 14)
			cout << "\n";
	}

	input.close();
	system("pause");
	return 0;
}