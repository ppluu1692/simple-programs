#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream f;
	f.open("output.txt", ios::out);
	int a, b, c;
	cout << "Input 3 integer numbers: ";
	cin >> a >> b >> c;
	f << a << "\n" << b << "\n" << c;
	f.close();
	
	system("pause");
	return 0;
}