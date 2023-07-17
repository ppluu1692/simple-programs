#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream output;

	output.open("output.txt", ios::out);

	string str_in = "";
	cout << "Input a paragraph: <to finish, type '/' then press enter>\n";
	getline(cin, str_in, '/');
	output << str_in;

	output.close();
	cout << "\nProgram successfully completed, check file to see result\n";

	system("pause");
	return 0;
}