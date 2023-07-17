#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	for (int sum = 0; sum <= 1000; n++)
	{
		sum = sum + n;
	}
	cout << "n la: " << n-1;
	cout << endl;
	system("pause");
	return 0;
}