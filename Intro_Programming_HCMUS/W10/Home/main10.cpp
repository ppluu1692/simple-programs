#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int MAX = 100;

struct Student
{
	string Name;
	int Id;
};

void inputStd(Student Std[], int& n)
{
	cout << "Input number of students: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin.ignore(1000, '\n');
		cout << "Student " << i + 1 << ":\n";
		cout << "Name: ";
		getline(cin, Std[i].Name);
		cout << "Student ID: ";
		cin >> Std[i].Id;
	}
}

void outputStd(Student Std[], int n)
{
	cout << "Students List: \n\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Student " << i + 1 << ":\n";
		cout << "Name: " << Std[i].Name << "\n";
		cout << "Student ID: " << Std[i].Id << "\n\n";
	}
}

int main()
{
	fstream stdFile;
	Student stdList[MAX];
	int n_std = 0;

	inputStd(stdList, n_std);
	stdFile.open("student.txt", ios::out);
	for (int i = 0; i < n_std; i++)
	{
		stdFile << stdList[i].Name + '\n';
		stdFile << stdList[i].Id;
		stdFile << '\n';
	}

	stdFile.close();
	stdFile.clear();
	for (int i = 0; i < n_std; i++)
	{
		stdList[i].Name = "";
		stdList[i].Id = 0;
	}

	stdFile.open("student.txt", ios::in);
	int count = 0;
	string str_id;
	while (!stdFile.eof())
	{
		getline(stdFile, stdList[count].Name);
		getline(stdFile, str_id);
		stdList[count++].Id = atoi(str_id.c_str());
	}
	count--;

	cout << "\n\n\n--From file--\n\n";
	outputStd(stdList, count);
	stdFile.close();
	cout << "\nProgram successfully completed, check file to see result\n";

	system("pause");
	return 0;
}