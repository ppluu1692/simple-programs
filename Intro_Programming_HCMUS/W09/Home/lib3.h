#include <iostream>
#include <string>
using namespace std;
const int MAX = 100;
struct Student
{
	string Name = "";
	float Point = 0.0;
};

#ifndef _LIB_2_H_
#define _LIB_2_H_

void input(Student list_Std[], int& n);
void output(Student list_Std[], int n);
string reverserStr(string s);
void getStdName(Student list_Std[], int n, string Std_name[]);
void sortList(string Std_name[], string sort_name[], int n);
void findDifName(string std_name[], int n, string difName[], int& n_difName);
void reward(Student list_Std[], int n, string top[3]);

#endif
