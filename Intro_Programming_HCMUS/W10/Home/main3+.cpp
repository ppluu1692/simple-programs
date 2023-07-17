#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream output;
	output.open("20120326.txt", ios::out);
	string str_in = "";
	string str_line = "";
	cout << "Enter text:\n";
	while (true)
	{
		str_line = "";
		getline(cin, str_line);
		if (str_line == "end")
			break;
		str_in += str_line + '\n';
	}

	output << str_in;
	cout << "\nProgram successfully completed, check file to see result\n";

	system("pause");
	return 0;
}