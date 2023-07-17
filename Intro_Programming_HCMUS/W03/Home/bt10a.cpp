#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	for (int i = 2; i <= n; i++) {
		int count = 0;
		for (int j = 1; j <= sqrt(i); j++)
		{
			if (i % j == 0)
				count++;
		}
		if (count == 1)
			cout << i <<' ';
	}
	system("pause");
	return 0;
}