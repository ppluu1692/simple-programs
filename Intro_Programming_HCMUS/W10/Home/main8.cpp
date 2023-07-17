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

	string str_in = "";
	string str_out = "";
	string str_line = "";

	while (getline(input, str_line))
	{
		str_in += str_line + "\n";
	}

	for (char& Ch : str_in)
	{
		Ch = toupper(Ch);
	}

	output << str_in;

	input.close();
	output.close();
	cout << "\nProgram successfully completed, check file to see result\n";

	system("pause");
	return 0;
}