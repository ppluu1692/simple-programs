#include<iostream>
#include <cmath>

#define MAXN 50

#ifndef _BT1_LIB_H_
#define _BT1_LIB_H_

void nhapMang(int arr[][MAXN], int& n);
void xuatMang(int arr[][MAXN], int n);
int TongCacPhanTu(int arr[][MAXN], int n);
int SoLanXuatHienCua1PhanTu(int arr[][MAXN], int n, int x);
bool ktraNgTo(int m);
int SoLanXuatHienCuaSoNgTo(int arr[][MAXN], int n);
int TongCacPhanTuKhongAm(int arr[][MAXN], int n);
int TongCheoChinh(int arr[][MAXN], int n);
bool CheoChinhTangDan(int arr[][MAXN], int n);
int TongCheoPhu(int arr[][MAXN], int n);
void bubbleSort(int arr[], int n);
void SapXepTangDanTungDong(int arr[][MAXN], int n);
void MinMaxDongCotMang(int arr[][MAXN], int n);
void LonNhatDongVeCheoChinh(int arr[][MAXN], int n);

#endif