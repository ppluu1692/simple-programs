/*
* A program to solve triangle from three point's coordinates.
* 
* Method: 
* Length of sides: Euclidean distance
* Angles: Law of cosines
* Area: Heron's formula
*
* PL_small_problems#04, last update: 17.07.23
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool ss (double a, double b)
{
	double delta = 1E-4;
	if (abs((a-b)/((a+b)/2))<delta) return true;
	else return false;		
}

using namespace std;

int main(int argc, char *argv[])
{

	cout <<"XAC DINH CAC DAC TINH CUA TAM GIAC\n\n";
	
	double xA,yA,xB,yB,xC,yC;
	
	cout <<"Nhap vao toa do diem A: ";	cin >>xA>>yA;
	cout <<"Nhap vao toa do diem B: ";	cin >>xB>>yB;
	cout <<"Nhap vao toa do diem C: ";	cin >>xC>>yC;
	
	double a, b, c, gA, gB, gC;
	
	// tim do dai 3 canh
	a = sqrt((xB-xC)*(xB-xC) + (yB-yC)*(yB-yC));
	b = sqrt((xA-xC)*(xA-xC) + (yA-yC)*(yA-yC));
	c = sqrt((xB-xA)*(xB-xA) + (yB-yA)*(yB-yA));
	
	// kiem tra 3 diem co thang hang hay khong
	if (ss((a+b),c)||ss((a+c),b)||ss((b+c),a)) 
	{
		cout<<"\nTam giac nay khong ton tai!";
		return 0;
	};
	
	// tim 3 goc dua tren dinh ly cosine 
	gA = acos((b*b+c*c-a*a)/(2*b*c));
	gB = acos((-b*b+c*c+a*a)/(2*a*c));
	gC = acos((b*b+-c*c+a*a)/(2*b*a));
	printf ("\n\nAB = %.3f",c);
	printf ("\nAC = %.3f",b);
	printf ("\nBC = %.3f",a);
	
	double pi = 3.141592653589793;
	
	printf ("\n\nGoc A = %.1f",gA*180/pi);
	printf ("\nGoc B = %.1f",gB*180/pi);
	printf ("\nGoc C = %.1f",gC*180/pi);
	
	// dung he thuc Heron de tim dien tich
	printf ("\n\nDien tich: %.3f\n",0.5*a*b*sin(gC));
	printf ("Chu vi: %.3f\n\n",a+b+c);
	
	bool deu, can, vuong;
	deu = 0; can = 0; vuong = 0;
	std::string diem;
	double p = pi/2; // p = pi/2 = 90 do
	
	// kiem tra tam giac co vuong khong
	if ((ss(gA,p))||(ss(gB,p))||(ss(gC,p))) 
	{
		if (ss(gA,p)) diem = 'A';
		if (ss(gB,p)) diem = 'B';
		if (ss(gC,p)) diem = 'C';
		vuong = 1;
	};

	// kiem tra tam giac co deu khong 
	if ((ss(a,b))&&(ss(b,c))) deu=1;
	// kiem tra tam giac co can khong
	else if ((ss(a,b))||(ss(c,b))||(ss(a,c))) 
	{
		if (ss(a,b)) diem = 'C';
		if (ss(a,c)) diem = 'B';
		if (ss(b,c)) diem = 'A';
		can = 1;
	};
	if (deu)
		cout<<"ABC la tam giac deu";
	if ((vuong)&&(can))
		cout<<"ABC la tam giac vuong can tai "<<diem;
	else if (can)
		cout<<"ABC la tam giac can tai "<<diem;
	else if (vuong)
		cout<<"ABC la tam giac vuong tai "<<diem;

	return 0;
}