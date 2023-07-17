#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{
	fstream normal;
	fstream binary;
	normal.open("normal.txt", ios::out);
	binary.open("binary.txt", ios::out | ios::binary);
	int n = 0;
	srand(time(NULL));
	for (int i = 0; i < 1000; i++)
	{
		n = rand();
		normal << n;
		binary.write((const char*)&n, 2);
	}
	normal.close();
	binary.close();
	cout << "\nProgram successfully completed, check file to see result\n";

	system("pause");
	return 0;
}