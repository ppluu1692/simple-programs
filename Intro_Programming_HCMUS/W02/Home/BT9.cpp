#include<iostream>
using namespace std;

int main()
{
	int r1, r2, d, temp;

	cout << "Nhap vao r1, r2, d: " << endl;
	cin >> r1 >> r2 >> d;
	if (r2 > r1)
	{
		temp = r2;
		r1 = r2;
		r2 = temp;
	}

	if ((r1 + r2) < d)
	{
		cout << "-Hai duong tron roi nhau";
	}
	if ((r1 + r2) == d)
	{
		cout << "-Hai duong tron tiep xuc ngoai";
	}
	if ((r1 + r2) > d && d > (r1 - r2))
	{
		cout << "-Hai duong tron cat nhau";
	}
	if (r2 + d == r1 && d != 0)
	{
		cout << "-Hai duong tron tiep xuc trong";
	}
	if (d < (r1 - r2))
	{
		cout << "-Hai duong tron bao nhau";
	}
	if (d == 0 && r1 != r2)
	{
		cout << "-Hai duong tron dong tam";
	}
	if (d == 0 && r1 == r2)
	{
		cout << "-Hai duong tron chong khop nhau";
	}

	cout << endl;
	system("pause");
	return 0;
}