#include "mylib.h"

void input(city ctList[], int& n)
{
	cout << "Nhap vao so thanh pho cua quoc gia: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin.ignore(1000, '\n');
		cout << "\nNhap ten thanh pho: ";
		getline(cin, ctList[i].name);
		cout << "Nhap vao dien tich: ";
		cin >> ctList[i].area;
		cout << "Nhap vao dan so: ";
		cin >> ctList[i].population;
	}
}

void output(city ctList[], int n)
{
	cout << "\nDanh sach thanh pho:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "\nThanh pho thu " << i + 1 << ":\n";
		cout << "Ten      : " << ctList[i].name;
		cout << "\nDien tich: " << ctList[i].area;
		cout << "\nDan so   : " << ctList[i].population;
		cout << endl;
	}

}

void densityRank(city ctList[], int n)
{
	city tempList[MAX];
	float density[MAX];
	for (int i = 0; i < n; i++)
	{
		density[i] = 1.0 * ctList[i].population / ctList[i].area;
	}
	
	for (int i = 0; i < n; i++)
	{
		float max = density[0];
		int imax = 0;
		for (int j = 0; j < n; j++)
		{
			if (max < density[j])
			{
				max = density[j];
				imax = j;
			}
		}
		tempList[n - i - 1] = ctList[imax];
		density[imax] = 0;
	}

	cout << "\nSau khi sap xep: ";
	output(tempList, n);
}

void seperateCity(city ctList[], int& n)
{
	int ctArea[MAX];
	for (int i = 0; i < n; i++)
	{
		ctArea[i] = ctList[i].area;
	}
	int maxArea = ctArea[0];
	int imax = 0;
	for (int i = 0; i < n; i++)
	{
		if (ctArea[i] > maxArea)
		{
			maxArea = ctArea[i];
			imax = i;
		}
	}
	ctList[imax].area = ctList[imax].area / 2.0;
	bool odd = false;
	if (ctList[imax].population % 2 != 0)
		odd = true;

	ctList[imax].population = ctList[imax].population / 2;
	n++;
	for (int i = n - 1; i > imax; i--)
	{
		ctList[i] = ctList[i - 1];
	}
	ctList[imax].name += " 1";
	ctList[imax + 1].name += " 2";
	if (odd)
	{
		ctList[imax].population += 1;
	}

	cout << "\n\nSau khi tach thanh pho lon nhat:\n";
	output(ctList, n);
}