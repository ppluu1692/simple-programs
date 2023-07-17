#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a = 0, b = 0, c = 0;
	cout << "Nhap vao he so a: ";
	cin >> a;
	cout << "Nhap vao he so b: ";;
	cin >> b;
	cout << "Nhap vao he so c: ";
	cin >> c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
				cout << "Phuong trinh co vo so nghiem." << endl;
			else
				cout << "Phuong trinh vo nghiem." << endl;
		}
		else
		{
			cout << "Phuong trinh co mot nghiem duy nhat:" << endl;
			cout << "x = " << -c / b;
		}
	}
	else
	{
		float delta = 0;
		delta = b * b - 4 * a * c;
		if (delta > 0)
		{
			float x1 = 0, x2 = 0;
			x1 = -b + sqrt(delta) / 2 / a;
			x2 = -b - sqrt(delta) / 2 / a;
			cout << "Phuong trinh co hai ngiem phan biet: " << endl;
			cout << "x1 = " << x1 << ",   x2 = " << x2 << endl;
		}
		else if (delta == 0)
		{
			cout << "Phuong trinh co hai nghiem kep:";
			cout << "x1 = x2 = " << -b / 2 / a << endl;
		}
		else
			cout << "Phuong trinh vo nghiem." << endl;
	}
	system("pause");
	return 0;
}