#define MAXN 200

#ifndef _ARRLIB_H_
#define _ARRLIB_H_
void nhapMang(unsigned int arr[], int& n);
void xuatMang(unsigned int arr[], int n);
void xoa1PhanTu(unsigned int arr[], int& n, int pos);
void xoakPhanTu(unsigned int arr[], int& n, int k, int i);
void demvainCacPhanTuKhacNhau(unsigned int arr[], int n);
unsigned int timSoLonThuHai(unsigned int arr[], int n);
unsigned int PhanTuXuatHienNhieuNhat(unsigned int arr[], int n);
unsigned int PhanTuNhoNhatTrenDoanXY(unsigned int arr[], int x, int y);
unsigned int TongLonNhatCacPhanTuLienTiep(unsigned int arr[], int n, int k);
void daonguocMang(unsigned int arr[], int n);
void bubbleSort(unsigned int arr[], int n);
void sapxepChanLe(unsigned int arr[], int n);
bool ktraSoChinhPhuong(unsigned int n);
void sapxepChinhPhuong(unsigned int arr[], int n);
void daoMangmn(unsigned int arr[], int n, int m);
bool ktraTangDan(unsigned int arr[], int n);
void inDayConTangDan(unsigned int arr[], int n);
void inTatCaDayConTangDan(unsigned int arr[], int n);
bool ktraNgTo(float n);
void inSoNgToNhoNhat(unsigned int arr[], int n);
#endif // !_ARRLIB_H_
