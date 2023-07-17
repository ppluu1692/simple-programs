#define MAXN 100
#define MAXM 100

#ifdef _ARRAY_H
#define _ARRAY_H
#endif 

void nhapMang(float arr[MAXN], int& n);
void xuatMang(float arr[MAXN], int n);
float timMax(float arr[MAXN], int n);
float tongSoKhongAm(float arr[MAXN], int n);
float tongPhanTuTaiViTriChan(float arr[MAXN], int n);
bool ktraNgTo(float n);
int demNguyenTo(float arr[MAXN], int n);
float timMin(float arr[MAXN], int n);
float PhanTuAmLonNhat(float arr[MAXN], int n, bool& exist);
float PhanTuKhongAmNhoNhat(float arr[MAXN], int n, bool& exist);
bool ktraTangDan(float arr[MAXN], int n);
bool ktraSoChinhPhuong(float n);
float TongSoChinhPhuong(float arr[MAXN], int n);


