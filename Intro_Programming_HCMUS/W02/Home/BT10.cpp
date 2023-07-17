#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int year = 2021;
	int month = 3;
	int day = 1;
	cout << "--> Bai tap nay co tham khao mot so chuong trinh tu daynhauhoc.com va howkteam.com\n";
	cout << "https://daynhauhoc.com/t/thao-luan-c-tinh-khoang-thoi-gian-giua-2-thoi-diem-ngay-thang-nam/23812/4 \n";
	cout << "https://www.howkteam.vn/course/xuat-ra-day-so-fibonacci/kiem-tra-ngay-hop-le-1303 \n\n";
	cout << "--> Ban nen nhap mot ngay tu 1/1/1500 den hien tai!" << endl;
	cout << "Nhap vao ngay: ";
	cin >> day;
	cout << "Nhap vao thang: ";
	cin >> month;
	cout << "Nhap vao nam: ";
	cin >> year;
	cout << endl;

	int tempDay = day;
	int tempMonth = month;
	int tempYear = year;

	bool ngayHople = true;
	bool laNamNhuan = false;
	// kiem tra nam nhuan
	//tham khao: https://www.howkteam.vn/course/xuat-ra-day-so-fibonacci/kiem-tra-ngay-hop-le-1303
	if ((tempYear % 4 == 0 && tempYear % 100 != 0) || tempYear % 400 == 0)
	{
		laNamNhuan = true;
	}

	//tinh so ngay trong nam va so ngay trong thang

	int nDayofYear = 0;
	int nDayofMonth = 0;

	if (laNamNhuan)
		nDayofYear = 366;
	else
		nDayofYear = 365;

	switch (tempMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		nDayofMonth = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		nDayofMonth = 30;
		break;
	case 2:
		if (laNamNhuan)
		{
			nDayofMonth = 29;
		}
		else
		{
			nDayofMonth = 28;
		}
		break;
	}

	//kiem tra ngay nhap vao co hop le ko

	if (month < 1 || month > 12)
	{
		ngayHople = false;
	}
	if (day < 1 || day > nDayofMonth)
	{
		ngayHople = false;
	}

	if (!ngayHople)
		cout << "Ngay nhap vao khong hop le" << endl;
	else
	{
		cout << "Ngay nhap vao hop le" << endl;
		cout << "-Thang do co " << nDayofMonth << " ngay" << endl;

		// tinh xem do la ngay thu may trong nam
		//tham khao: https://daynhauhoc.com/t/thao-luan-c-tinh-khoang-thoi-gian-giua-2-thoi-diem-ngay-thang-nam/23812/4
		int nDays = 0;
		int nDaysNam = 0;

		if (tempMonth < 3)
		{
			tempYear--;
			tempMonth += 12;
		}
		nDays = 365 * tempYear + tempYear / 4 - tempYear / 100 + tempYear / 400 + (153 * tempMonth - 457) / 5 + tempDay - 306; //this is magic 

		tempDay = 0;
		tempMonth = 1;
		tempYear = year;
		if (tempMonth < 3)
		{
			tempYear--;
			tempMonth += 12;
		}
		nDaysNam = 365 * tempYear + tempYear / 4 - tempYear / 100 + tempYear / 400 + (153 * tempMonth - 457) / 5 + tempDay - 306;
		nDaysNam = nDays - nDaysNam;

		cout << "-Ngay thu " << nDaysNam << " trong nam" << endl;

		//tinh xem do la ngay thu may trong tuan

		cout << "-Ngay thu " << (nDays - 1) % 7 + 1 << " trong tuan " << endl;

		// tinh ngay hom sau
		tempDay = day;
		tempMonth = month;
		tempYear = year;

		if (month < 12)
		{
			if (day < nDayofMonth)
				tempDay = day + 1;
			else
			{
				tempDay = 1;
				tempMonth = month + 1;
			}
			tempYear = year;
		}
		else
		{
			if (day < nDayofMonth)
				tempDay = day + 1;
			else
			{
				tempDay = 1;
				tempMonth = 1;
			}
			tempYear = year + 1;
		}
		cout << "-Ngay hom sau la " << tempDay << '/' << tempMonth << '/' << tempYear << endl;

		// tinh ngay hom truoc(phu: so ngay trong thang truoc do)

		tempDay = day;
		tempMonth = month;
		tempYear = year;
		int nDayoflastMonth;
		switch (tempMonth - 1)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			nDayoflastMonth = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			nDayoflastMonth = 30;
			break;
		case 2:
			if (laNamNhuan)
			{
				nDayoflastMonth = 29;
			}
			else
			{
				nDayoflastMonth = 28;
			}
			break;
		case 0:
			nDayoflastMonth = 31;
			break;
		}
		if (month > 1)
		{
			if (day > 1)
				tempDay = day - 1;
			else
			{
				tempDay = nDayoflastMonth;
				tempMonth = month - 1;
			}
			tempYear = year;
		}
		else
		{
			if (day > 1)
				tempDay = day - 1;
			else
			{
				tempDay = nDayoflastMonth;
				tempMonth = 12;
			}
			tempYear = year - 1;
		}
		cout << "-Ngay hom truoc la " << tempDay << '/' << tempMonth << '/' << tempYear << endl;

		//in ra nam nhuan hoac khong

		if (laNamNhuan)
			cout << "-La nam nhuan" << endl;
		else
			cout << "-Khong phai la nam nhuan" << endl;
	}

	system("pause");
	return 0;
}