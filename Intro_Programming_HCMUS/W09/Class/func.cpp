#include"lib.h"

void Input(PhanSo& Frac)
{
	cout << "Enter the numerator: ";
	cin >> Frac.iTuSo;
	int deno = 0;
	do
	{
		cout << "Enter the demorator: ";
		cin >> deno;
	} while (deno == 0);
	Frac.iMauSo = deno;
}

void Output(PhanSo& myFrac)
{
	cout << myFrac.iTuSo << "/" << myFrac.iMauSo << endl;
}

int GCD(int n1, int n2)
{
	if (n1 == 0 || n2 == 0)
		return 0;
	n1 = abs(n1);
	n2 = abs(n2);
	while (n1 != n2)
	{
		(n1 > n2) ? (n1 -= n2) : (n2 -= n1);
	}
	return abs(n1);
}

int LCM(int n1, int n2)
{
	if (n1 == 0 || n2 == 0)
		return 0;
	return abs((n1 * n2) / GCD(n1, n2));
}

void Add(PhanSo Frac1, PhanSo Frac2, PhanSo& Frac3)
{
	Frac3.iTuSo = Frac1.iTuSo * Frac2.iMauSo + Frac2.iTuSo * Frac1.iMauSo;
	Frac3.iMauSo = Frac1.iMauSo * Frac2.iMauSo;
}

void Subtract(PhanSo Frac1, PhanSo Frac2, PhanSo& Frac3)
{
	Frac3.iTuSo = Frac1.iTuSo * Frac2.iMauSo - Frac2.iTuSo * Frac1.iMauSo;
	Frac3.iMauSo = Frac1.iMauSo * Frac2.iMauSo;
}

void Multiply(PhanSo Frac1, PhanSo Frac2, PhanSo& Frac3)
{
	Frac3.iTuSo = Frac1.iTuSo * Frac2.iTuSo;
	Frac3.iMauSo = Frac1.iMauSo * Frac2.iMauSo;
}

void Divide(PhanSo Frac1, PhanSo Frac2, PhanSo& Frac3, bool& error)
{
	if (Frac2.iTuSo == 0)
		error = true;
	else
	{
		error = false;
		Frac3.iTuSo = Frac1.iTuSo * Frac2.iMauSo;
		Frac3.iMauSo = Frac2.iTuSo * Frac1.iMauSo;
	}
}

void Simplify(PhanSo& Frac)
{
	if (Frac.iTuSo != 0)
	{
		int gcd = GCD(Frac.iTuSo, Frac.iMauSo);
		Frac.iTuSo = Frac.iTuSo / gcd;
		Frac.iMauSo = Frac.iMauSo / gcd;
		if (Frac.iMauSo < 0)
		{
			Frac.iMauSo = -Frac.iMauSo;
			Frac.iTuSo = -Frac.iTuSo;
		}
	}
}

int Compare(PhanSo Frac1, PhanSo Frac2)
{
	double f1 = 1.0 * Frac1.iTuSo / Frac1.iMauSo;
	double f2 = 1.0 * Frac2.iTuSo / Frac2.iMauSo;
	if (f1 > f2)
	{
		return 1;
	}
	else if (f1 == f2)
		return 0;
	return -1;
}

void inputNFrac(PhanSo arrFrac[], int& N)
{
	cout << "Input N: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "Fraction " << i + 1 << ":\n";
		Input(arrFrac[i]);
	}
}

void outputNFrac(PhanSo arrFrac[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << "Fraction " << i + 1 << ": ";
		Output(arrFrac[i]);
	}
}

void Sum_NFrac(PhanSo source[], int N, PhanSo& result)
{
	result.iTuSo = 0;
	result.iMauSo = 1;
	for (int i = 0; i < N; i++)
	{
		Add(result, source[i], result);
		Simplify(result);
	}
}

void replaceSimplest(PhanSo source[], int N)
{
	for (int i = 0; i < N; i++)
	{
		Simplify(source[i]);
	}
}

void sort_arrFrac(PhanSo source[], int N)
{
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			if (Compare(source[j], source[j + 1]) == 1)
			{
				cout << "kdhskhf";
				swap(source[j], source[j + 1]);
			}
		}
	}
}

bool findFrac(PhanSo source[], int N, PhanSo K)
{
	PhanSo rep_source[MAX];
	for (int i = 0; i < N; i++)
	{
		rep_source[i] = source[i];
	}
	replaceSimplest(rep_source, N);
	Simplify(K);
	for (int i = 1; i < N; i++)
	{
		if (!Compare(source[i], K))
			return true;
	}
	return false;
}