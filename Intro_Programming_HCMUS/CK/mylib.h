#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;
#define MAX 100
struct city
{
	string name;
	float area;
	int population;
};

#ifndef _MY_LIB_
#define _MY_LIB_
void input(city ctList[], int& n);
void output(city ctList[], int n);
void densityRank(city ctList[], int n);
void seperateCity(city ctList[], int& n);
#endif