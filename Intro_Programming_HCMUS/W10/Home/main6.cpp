#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream input;
	fstream output;

	input.open("input.txt", ios::in);
	output.open("output.txt", ios::out);

	char Ch = ' ';
	int n_alpha = 0;

	while (input >> Ch)
	{
		if (isalpha(Ch))
			n_alpha++;
	}

	output << n_alpha;

	input.close();
	output.close();
	cout << "\nProgram successfully completed, check file to see result\n";

	system("pause");
	return 0;
}