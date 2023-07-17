#include "lib.h"


int main()
{
	PhanSo myFrac1, myFrac2, Frac1, Frac2, Frac3;
	PhanSo listFrac[MAX], tempList[MAX];
	int n_list = 0;
	int option = 0;
	myFrac1.iTuSo = 0;
	myFrac1.iMauSo = 1;
	myFrac2.iTuSo = 0;
	myFrac2.iMauSo = 1;
	Frac3.iTuSo = 0;
	Frac3.iMauSo = 1;
	
	do
	{
		Frac1 = myFrac1;
		Frac2 = myFrac2;
		for (int i = 0; i < n_list; i++)
		{
			tempList[i] = listFrac[i];
		}
		cout << "1. Input and Output two fractions\n";
		cout << "2. Add, Subtract, Multiply and Divide 2 fractions\n";
		cout << "3. Simplify (to lowest term) the fractions\n";
		cout << "4. Compare 2 fractions\n";
		cout << "5. Input and Output N elements list of fractions\n";
		cout << "6. Find sum of the fractions list\n";
		cout << "7. Replace reducible fractions by irreducible fractions\n";
		cout << "8. Sort the list to ascending\n";
		cout << "9. Check if the fraction K exists in the list\n\n";
		cout << "Your option: ";
		cin >> option;
		system("cls");
		bool error = false;
		switch (option)
		{
		case 1:
			cout << "Input Fraction 1:\n";
			Input(myFrac1);
			cout << "\nInput Fraction 2:\n";
			Input(myFrac2);
			cout << "\nFraction 1: ";
			Output(myFrac1);
			cout << "\nFraction 2: ";
			Output(myFrac2);
			cout << endl;
			break;
		case 2:
			Add(Frac1, Frac2, Frac3);
			Simplify(Frac3);
			cout << "\nAddition: ";
			Output(Frac3);
			Subtract(Frac1, Frac2, Frac3);
			Simplify(Frac3);
			cout << "\nSubtraction: ";
			Output(Frac3);
			Multiply(Frac1, Frac2, Frac3);
			Simplify(Frac3);
			cout << "\nMultiplication: ";
			Output(Frac3);
			Divide(Frac1, Frac2, Frac3, error);
			Simplify(Frac3);
			cout << "\nDivision: ";
			if (!error)
				Output(Frac3);
			else cout << "ERROR";
			cout << endl;
			break;
		case 3:
			cout << "Simplifying fraction 1: ";
			Simplify(Frac1);
			Output(Frac1);
			cout << endl;
			break;
		case 4:
			if (!Compare(Frac1, Frac2))
				cout << "Equal";
			else if (Compare(Frac1, Frac2) == 1)
				cout << "Fraction 1 is larger than Fraction 2";
			else
				cout << "Fraction 1 is smaller than Fraction 2";
			cout << endl;
			break;
		case 5:
			inputNFrac(listFrac, n_list);
			cout << "\nList of N Fractions: \n";
			outputNFrac(listFrac, n_list);
			cout << endl;
			break;
		case 6:
			cout << "Sum of the list: ";
			Sum_NFrac(tempList, n_list, Frac3);
			Output(Frac3);
			cout << endl;
			break;
		case 7:
			replaceSimplest(tempList, n_list);
			cout << "\nList of N Fractions after replacement: \n";
			outputNFrac(listFrac, n_list);
			cout << endl;
			break;
		case 8:
			sort_arrFrac(tempList, n_list);
			cout << "\nList of N Fractions after ascending sort: \n";
			outputNFrac(tempList, n_list);
			cout << endl;
			break;
		case 9:
			cout << "Input fraction K: ";
			Input(Frac3);
			if (findFrac(tempList, n_list, Frac3))
				cout << "K exists in list";
			else
				cout << "K not exists in list";
			cout << endl;
			break;

		case 0:
			break;
		default:
			cout << "Wrong option";
		}
		cout << "\n\n\n\n";
	} while (option != 0);
	system("pause");
	return 0;
}