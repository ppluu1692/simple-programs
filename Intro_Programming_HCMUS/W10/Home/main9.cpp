#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream input;
	fstream output;

	input.open("file1.txt", ios::in);

	string str_in = "";
	string str_line = "";
	string str_out = "";

	while (getline(input, str_line))
	{
		str_in += str_line + "\n";
	}

	str_out += str_in;

	input.close();
	input.clear();
	input.open("file2.txt", ios::in);
	str_in = "";

	while (getline(input, str_line))
	{
		str_in += str_line + "\n";
	}

	str_out += str_in;
	input.close();

	output.open("file2.txt", ios::out);
	output << str_out;
	
	output.close();
	cout << "\nProgram successfully completed, check file to see result\n";

	system("pause");
	return 0;
}