#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <unistd.h>
using namespace std;

double f(double x)
{
    return x*x -2;
}

double thapphan(double x)
{
    double b = 0, k =0;
    b = log10(abs(x));
    if (b<0) k = ceil (b);
    else k = floor(b);
    return x/pow(10.0,k);
}

double giatri(double cs, double sm)
{
    return cs * pow(10.0,sm);
}

void innghiem(double solution)
{
    usleep(1000000);
    cout <<setprecision (10);
    cout <<"\t Nghiem la: "<<solution <<'\n';
    usleep(500000);
    cout <<setprecision (3);
    cout <<"\t L-R = "<<f(solution)<<"\n\n";
}
int main()
{
    //int i;
    //cout <<"nho hon 500000";
    //cin >>i;
    double nghiem = 0;
    for (double somu = -10.0 ; somu <= 10.0 ; somu++)
    {
        double xold, xnew, donvi, xthuc;
        bool run;
        run = 1;
        xold = 1.0;
        xnew = xold;
        donvi = 0.01;
        while (run)
        {
            xnew = xold + donvi;
            xthuc = giatri (xnew,somu);
            if ( f(giatri(xold,somu)) * f(giatri(xnew,somu)) <= 0)
            {
                donvi *= 0.1;
                xnew = xold;
            }
            xold = xnew;
            //dieu kien de stop while
            if (abs(f(xthuc)) < 1e-9) 
            {
                run = false; 
                nghiem = xthuc; //nghiem day
            }
            if (donvi < 1e-12) //khong thay nghiem
            {
                run = false;
                donvi = 0.01;
                
            }
            if (xnew > 10.0 ) 
            {
                xnew = 1.0;
                run = false;
            }
            //test biến
           // cout << xnew << " " << donvi << " "<< xthuc <<" " << f(xthuc) <<'\n';
          
        }
    }
    innghiem(nghiem);
    for (double somu = -10.0 ; somu <= 10.0 ; somu++)
    {
        double xold, xnew, donvi, xthuc;
        bool run;
        run = 1;
        xold = -1.0;
        xnew = xold;
        donvi = 0.01;
        while (run)
        {
            xnew = xold - donvi;
            xthuc = giatri (xnew,somu);
            if ( f(giatri(xold,somu)) * f(giatri(xnew,somu)) <= 0)
            {
                donvi *= 0.1;
                xnew = xold;
            }
            xold = xnew;
            //dieu kien de stop while
            if (abs(f(xthuc)) < 1e-9) 
            {
                run = false; 
                nghiem = xthuc; //nghiem day
            }
            if (donvi < 1e-12) //khong thay nghiem
            {
                run = false;
                donvi = 0.01;
                
            }
            if (xnew < -10.0 ) 
            {
                xnew = 1.0;
                run = false;
            }
            //test biến
           // cout << xnew << " " << donvi << " "<< xthuc <<" " << f(xthuc) <<'\n';
          
        }
    }
    innghiem (nghiem);
    return 0;
}
