#include <iostream>
using namespace std;

int main()
{
	float x = 0.0;
	int n;

	cout << "Nhap x va n: ";
	cin >> x >> n;

	cout << "Ket qua la: " << pow((x * x + 1), n) << endl;

	system("pause");
	return 0;
}