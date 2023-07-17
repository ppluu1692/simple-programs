#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	do {
		cout << "Nhap vao N < 45: ";
		cin >> n;
	} while (n < 45);
	int Ans = 1;
	int preAns = 0;
	int temp = preAns;
	int i = 1;
	while ( i < n)
	{
		temp = Ans;
		Ans = Ans + preAns;
		preAns = temp;
		i++;
	}
	cout << Ans << endl;
	system("pause");
	return 0;
}