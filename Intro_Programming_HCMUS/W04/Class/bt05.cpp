#include <iostream>
using namespace std;



void demSoAm();

int main()
{
	demSoAm();
	system("pause");
	return 0;
}

void demSoAm()
{
	int dem = 0;
	int n = 0;
	while (true)
	{
		cout << "Nhap vao mot so: ";
		cin >> n;
		if (n < 0)
			dem++;
		else if (n == 0)
			break;
	}
	cout << "So lan nhap so am: " << dem << endl;
}