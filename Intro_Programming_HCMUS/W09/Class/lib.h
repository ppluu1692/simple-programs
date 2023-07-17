#include <iostream>
using namespace std;
const int MAX = 100;

struct PhanSo
{
	int iTuSo = 0;
	int iMauSo = 1;
};

#ifndef _LIB_1_H_
#define _LIB_1_H_

void Input(PhanSo& Frac);
void Output(PhanSo& myFrac);
int GCD(int n1, int n2);
int LCM(int n1, int n2);
void Add(PhanSo Frac1, PhanSo Frac2, PhanSo& Frac3);
void Subtract(PhanSo Frac1, PhanSo Frac2, PhanSo& Frac3);
void Multiply(PhanSo Frac1, PhanSo Frac2, PhanSo& Frac3);
void Divide(PhanSo Frac1, PhanSo Frac2, PhanSo& Frac3, bool& error);
void Simplify(PhanSo& Frac);
int Compare(PhanSo Frac1, PhanSo Frac2);
void inputNFrac(PhanSo arrFrac[], int& N);
void outputNFrac(PhanSo arrFrac[], int N);
void Sum_NFrac(PhanSo source[], int N, PhanSo& result);
void replaceSimplest(PhanSo source[], int N);
void sort_arrFrac(PhanSo source[], int N);
bool findFrac(PhanSo source[], int N, PhanSo K);

#endif // !_LIB_1_H_

