#include <iostream>
using namespace std;

int main()
{
	float a = 0, b = 0, c = 0;
	cout << "Nhap vao canh a: ";
	cin >> a;
	cout << "Nhap vao canh b: ";;
	cin >> b;
	cout << "Nhap vao canh c: ";
	cin >> c;

	if (a + b <= c || a + c <= b || b + c <= a)
		cout << "3 canh vua nhap khong phai la mot tam giac!";
	else
	{
		cout << "3 canh vua nhap la mot tam giac!\n";
		if (a == b && b == c && c == a)
			cout << "-Tam giac deu";
		else if (a == b || b == c || c == a)
			cout << "-Tam giac can";
		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			cout << "-Tam giac vuong";
		if ((a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) && (a == b || b == c || c == a))
			cout << "-Tam giac vuong can";
	}
	cout << endl;
	system("pause");
	return 0;
}