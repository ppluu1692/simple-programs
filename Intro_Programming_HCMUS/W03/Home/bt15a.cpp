#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	do {
		cout << "Nhap vao N < 45: ";
		cin >> n;
	} while (n > 45);
	int Ans = 1;
	int preAns = 0;
	int temp = preAns;
	for (int i = 1; i < n; i++)
	{
		temp = Ans;
		Ans = Ans + preAns;
		preAns = temp;
	}
	cout << Ans << endl;
	system("pause");
	return 0;
}