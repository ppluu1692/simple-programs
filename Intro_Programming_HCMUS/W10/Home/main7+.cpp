#include <iostream>
#include <fstream>
#include <string>
#define MAX 10000

using namespace std;

void write_file(char* str)
{
	fstream f;
	f.open("file.txt", ios::out | ios_base::binary);
	f.write(str, strlen(str));
	f.close();
}
void read_file()
{
	fstream f;
	char ch;
	cout << endl;
	f.open("file.txt", ios::in | ios::binary);
	string out_str = "";
	while (!f.eof())
	{
		f.read((char*)&ch, 1);
		out_str += ch;
	}
	out_str.pop_back();
	cout << out_str;
	f.close();
}
void encode()
{
	fstream f;
	f.open("file.txt", ios::in | ios::out | ios::binary);
	f.seekg(0, ios::end);
	int n = f.tellg();
	int i = 0;
	while (i<=n)
	{
		char str1[4];
		char str2[4];
		f.seekg(i, ios::beg);
		f.read(str1, 4);
		f.read(str2, 4);
		f.seekg(i, ios::beg);
		f.write(str2, 4);
		f.write(str1, 4);
		i += 8;
	}
	f.close();
}

void decode()
{
	fstream f;
	f.open("file.txt", ios::in | ios::out | ios_base::binary);
	f.seekg(0, ios::end);
	int n = f.tellg();
	int i = 0;
	while (i <= n)
	{
		char str1[4];
		char str2[4];
		f.seekg(i, ios::beg);
		f.read(str1, 4);
		f.read(str2, 4);
		f.seekg(i, ios::beg);
		f.write(str2, 4);
		f.write(str1, 4);
		i += 8;
	}
	f.close();
}
int main()
{
	char myStr[MAX];
	cout << "Input information to decode (string format) ";
	cin.getline(myStr, MAX);
	write_file(myStr);
	cout << "Your information:\n";
	cout << myStr;
	cout << "\n\n1. Encode the information";
	cout << "\n2. Decode the information";
	cout << "\n3. See the information from file";
	cout << "\n0. Finish program\n\n";
	int option = 0;
	bool isEncode = false;
	do
	{
		cout << "\n--> Your option: ";
		cin >> option;
		if (option == 1)
		{
			if (isEncode)
				cout << "You can not encode in this case\n";
			else
			{
				encode();
				isEncode = true;
				cout << "Encoded\n";
			}
		}
		else if (option == 2)
		{
			if (isEncode)
			{
				decode();
				isEncode = false;
				cout << "Decoded\n";
			}
			else
				cout << "You can not decode in this case\n";
		}
		else if (option == 3)
		{
			read_file();
			cout << endl;
		}
		else if (option == 0)
			break;
		else
			cout << "Wrong option\n";
	} while (true);
	system("pause");
	return 0;
}