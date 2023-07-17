#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream input;
	input.open("input.txt", ios::in);
	string str_out = "";

	while (getline(input, str_out, '\n'))
	{
		cout << str_out << endl;
	}

	input.close();
	
	system("pause");
	return 0;
}