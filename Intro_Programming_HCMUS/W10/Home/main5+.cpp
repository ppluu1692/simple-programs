#include <iostream>
#include <fstream>
using namespace std;
const int MAX = 100;

struct Student
{
	int Id;
	char Name[100];
};

void input(Student Std[], int& n)
{
	cout << "Input number of students: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Student " << i + 1 << ":\n";
		cout << "Student ID: ";
		cin >> Std[i].Id;
		cin.ignore(1000, '\n');
		cout << "Name: ";
		cin.getline(Std[i].Name, 100);
	}
}

void f_write(Student stdList[], int n)
{
	fstream fw;
	fw.open("file.txt", ios::out | ios_base::binary);
	for (int i = 0; i < n; i++)
	{
		fw.write((char*)&stdList[i].Id, 4);
		fw.write(stdList[i].Name, 100);
	}
}

void f_read(Student stdList[], int n)
{
	fstream fr;
	fr.open("file.txt", ios::in | ios_base::binary);
	for (int i = 0; i < n; i++)
	{
		fr.read((char*)&stdList[i].Id, 4);
		fr.read(stdList[i].Name, 100);
	}
}

void read_xpos(int order)
{
	fstream fr;
	int id = 0;
	char name[100];
	fr.open("file.txt", ios::in | ios_base::binary);
	fr.seekg(104*(order-1), ios::beg);
	fr.read((char*)&id, 4);
	fr.read(name, 100);
	cout << "Student " << order << ":\n";
	cout << "ID  : " << id << endl;
	cout << "Name: " << name << endl;
}

void output(Student Std[], int n)
{
	cout << "Students List: \n\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Student " << i + 1 << ":\n\n";
		cout << "Name: " << Std[i].Name << "\n";
		cout << "Student ID: " << Std[i].Id << "\n\n";
	}
}

int main()
{
	cout << "MENU\n\n";
	cout << "1. Input student list\n";
	cout << "2. Find student\n";
	cout << "0. Exit program\n\n";
	int option = 0;
	Student stdList[MAX];
	int n = 0;
	do
	{
		int order = 0;
		cout << "Enter your option: ";
		cin >> option;
		cout << endl;
		switch (option)
		{
		case 1:
			input(stdList, n);
			f_write(stdList, n);
			break;
		case 2:
			cout << "Enter order number: ";
			cin >> order;
			if (order <= 0 || order > n)
				cout << "The order number is not exist";
			else
				read_xpos(order);
		case 0:
			break;
		default:
			cout << "Wrong option!!" << endl;
		}
		cout << endl;
	} while (option);

	system("pause");
	return 0;
}

