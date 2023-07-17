#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "Nhap vao N: ";
	cin >> n;
	int Ans = 1;
	int preAns = 0;
	int temp = preAns;
	for (int i = 1; i <= n; i++)
	{
		cout << Ans<<' ';
		temp = Ans;
		Ans = Ans + preAns;
		preAns = temp;
	}

	system("pause");
	return 0;
}