#define MAXN 100

#ifndef _ARRAY_H
#define _ARRAY_H


void nhapMang(float arr[], int& n);
void xuatMang(float arr[], int n);
float timMax(float arr[], int n);
float tongSoKhongAm(float arr[], int n);
float tongPhanTuTaiViTriChan(float arr[], int n);
bool ktraNgTo(float n);
int demNguyenTo(float arr[], int n);
float timMin(float arr[], int n);
float PhanTuAmLonNhat(float arr[], int n, bool& exist);
float PhanTuKhongAmNhoNhat(float arr[], int n, bool& exist);
bool ktraTangDan(float arr[], int n);
bool ktraSoChinhPhuong(float n);
float TongSoChinhPhuong(float arr[], int n);

#endif 

