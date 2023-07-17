#include "mylib.h"

int main()
{
	city myList[MAX];
	int n;
	input(myList, n);

	cout << "\n--MENU--\n\n";
	cout << "1. Nhap lai du lieu\n";
	cout << "2. Xuat du lieu\n";
	cout << "3. Sap xep tang dan theo mat do dan so\n";
	cout << "4. Tach thanh pho co dien tich lon nhat\n";
	cout << "0. Ket thuc chuong trinh\n\n\n";
	int option = 0;
	while (true)
	{
		cout << "Nhap chuc nang: ";
		cin >> option;
		if (option == 0)
			break;
		else if (option == 1)
			input(myList, n);
		else if (option == 2)
			output(myList, n);
		else if (option == 3)
			densityRank(myList, n);
		else if (option == 4)
			seperateCity(myList, n);
		else
			cout << "Nhap sai chuc nang!!!";
		cout << "\n-------------------------------------\n\n";
	}
	output(myList, n);
	seperateCity(myList, n);
	system("pause");
	return 0;
}

