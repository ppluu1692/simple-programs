#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	int sum = 0;

	while (sum <= 1000)
	{
		n++;
		sum = sum + n;
	}
	cout << "n la: " << n << endl;
	system("pause");
	return 0;
}