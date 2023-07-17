#include <iostream>
#include <ctime>
using namespace std;

bool LaNamNhuan(int nam);
int SoNgayTrongThang(int thang, int nam);
bool LaNgayHopLe(int ngay, int thang, int nam);
int SoNgayTu1_1_1(int ngay, int thang, int nam);
int ThuTuNgayTrongNam(int ngay, int thang, int nam);
int ThuTuNgayTrongTuan(int ngay, int thang, int nam);
void NgaySau(int ngay, int thang, int nam, int& ngaySau, int& thangSau, int& namSau);
void NgayTruoc(int ngay, int thang, int nam, int& ngayTruoc, int& thangTruoc, int& namTruoc);

int main()
{
	int year = 1990;
	int month = 1;
	int day = 1;
	cout << "--> Bai tap nay co tham khao mot so thuat toan tu daynhauhoc.com\n";
	cout << "https://daynhauhoc.com/t/thao-luan-c-tinh-khoang-thoi-gian-giua-2-thoi-diem-ngay-thang-nam/23812/4 \n\n";
	cout << "--> Ban nen nhap mot ngay tu nam 1583 den hien tai!" << endl;
	cout << "Nhap vao ngay: ";
	cin >> day;
	cout << "Nhap vao thang: ";
	cin >> month;
	cout << "Nhap vao nam: ";
	cin >> year;
	cout << endl;


	if (!LaNgayHopLe(day, month, year))
		cout << "-Ngay nhap vao khong hop le" << endl;
	else
	{
		if (year > 0)
		{
			cout << "-Ngay nhap vao hop le" << endl;
			int tempDay = day;
			int tempMonth = month;
			int tempYear = year;
			NgayTruoc(day, month, year, tempDay, tempMonth, tempYear);
			if (tempYear == 0)
				tempYear = -1;
			cout << "-Ngay hom truoc la " << tempDay << '/' << tempMonth << '/' << tempYear << endl;
			NgaySau(day, month, year, tempDay, tempMonth, tempYear);
			cout << "-Ngay hom sau la " << tempDay << '/' << tempMonth << '/' << tempYear << endl;
			cout << "-Ngay thu " << ThuTuNgayTrongNam(day, month, year) << " trong nam" << endl;
			cout << "-Ngay thu " << ThuTuNgayTrongTuan(day, month, year) << " trong tuan" << endl;
		}
		else
		{
			cout << "-Ngay nhap vao hop le." << endl;
			int tempDay = day;
			int tempMonth = month;
			int tempYear = year;
			NgayTruoc(day, month, year, tempDay, tempMonth, tempYear);
			cout << "-Ngay hom truoc la " << tempDay << '/' << tempMonth << '/' << tempYear << endl;
			NgaySau(day, month, year, tempDay, tempMonth, tempYear);
			if (tempYear == 0)
				tempYear = 1;
			cout << "-Ngay hom sau la " << tempDay << '/' << tempMonth << '/' << tempYear << endl;
			cout << "-Ngay thu " << SoNgayTu1_1_1(day, month, -year) << " trong nam" << endl;
			cout << "-Ngay thu " << ThuTuNgayTrongTuan(day-1, month, -year) << " trong tuan" << endl;
		}
	}

	system("pause");
	return 0;
}


bool LaNamNhuan(int nam)
{
	if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
	{
		return  true;
	}
	else
		return false;
}
int SoNgayTrongThang(int thang, int nam)
{

	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return  31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	case 2:
		if (LaNamNhuan(nam))
		{
			return 29;
		}
		else
		{
			return 28;
		}
		break;
	}
}
bool LaNgayHopLe(int ngay, int thang, int nam)
{
	if (thang < 1 || thang > 12)
	{
		return false;
	}
	if (ngay < 1 || ngay > SoNgayTrongThang(thang, nam))
	{
		return false;
	}
	if (nam == 0)
		return false;
}
int SoNgayTu1_1_1(int ngay, int thang, int nam)
{
	// tham khao: https://daynhauhoc.com/t/thao-luan-c-tinh-khoang-thoi-gian-giua-2-thoi-diem-ngay-thang-nam/23812/4
	if (thang < 3)
	{
		nam--;
		thang += 12;
	}
	return 365 * nam + nam / 4 - nam / 100 + nam / 400 + (153 * thang - 457) / 5 + ngay - 306;
}
int ThuTuNgayTrongNam(int ngay, int thang, int nam)
{
	int days1 = SoNgayTu1_1_1(ngay, thang, nam);
	int days2 = SoNgayTu1_1_1(0, 1, nam);
	return days1 - days2;
}
int ThuTuNgayTrongTuan(int ngay, int thang, int nam)
{
	return (SoNgayTu1_1_1(ngay, thang, nam) - 1) % 7 + 1;
}
void NgaySau(int ngay, int thang, int nam, int& ngaySau, int& thangSau, int& namSau)
{
	thangSau = thang;
	namSau = nam;
	if (thang < 12)
	{
		if (ngay < SoNgayTrongThang(thang, nam))
			ngaySau = ngay + 1;
		else
		{
			ngaySau = 1;
			thangSau = thang + 1;
		}
	}
	else
	{
		if (ngay < 31)
			ngaySau = ngay + 1;
		else
		{
			ngaySau = 1;
			thangSau = 1;
			namSau = nam + 1;
		}
	}
}
void NgayTruoc(int ngay, int thang, int nam, int& ngayTruoc, int& thangTruoc, int& namTruoc)
{
	thangTruoc = thang;
	namTruoc = nam;
	if (thang > 1)
	{
		if (ngay > 1)
			ngayTruoc = ngay - 1;
		else
		{
			ngayTruoc = SoNgayTrongThang(thang - 1, nam);
			thangTruoc = thang - 1;
		}
	}
	else
	{
		if (ngay > 1)
			ngayTruoc = ngay - 1;
		else
		{
			ngayTruoc = 31;
			thangTruoc = 12;
			namTruoc = nam - 1;
		}
	}
}