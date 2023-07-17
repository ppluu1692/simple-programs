#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	int i = 2;
	while (i <= n) {
		int j = 1, count = 0;
		while (j <= sqrt(i)) {
			if (i % j == 0)
				count++;
			j++;
		}
		if (count == 1)
			cout << i << ' ';
		i++;
	}
	system("pause");
	return 0;
}