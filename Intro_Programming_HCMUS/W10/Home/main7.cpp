#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream input;
	fstream output;

	input.open("input.txt", ios::in);
	output.open("output.txt", ios::out);

	string str_line = "";
	string str_in = "";
	while (getline(input, str_line))
	{
		str_in += str_line + ' ';
	}

	for (int i = 0; i < str_in.length() - 1; i++)
	{
		if (str_in[i] == ' ' && str_in[i + 1] == ' ')
		{
			str_in.erase(i, 1);
			i--;
		}
	}

	while (str_in[0] == ' ')
	{
		str_in.erase(0, 1);
	}

	while (str_in[str_in.length() - 1] == ' ')
	{
		str_in.erase(str_in.length() - 1, 1);
	}

	int n_space = 0;
	for (char Ch : str_in)
	{
		if (Ch == ' ')
			n_space++;
	}
	output << n_space + 1;

	input.close();
	output.close();
	cout << "\nProgram successfully completed, check file to see result\n";

	system("pause");
	return 0;
}