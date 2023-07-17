/*
* A program to convert DEC to BIN, OCT and HEX.
* 
* PL_small_problems#17, last update: 17.07.23
*/

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

string doicoso(string &coso, int ds)
{
    string kq = "";
    int cs = coso.length();
    int count = 0;
    while (ds > 0)
    {
        kq = kq + coso[ds % cs];
        ds = ds / cs;
        count++;
    }
    string kq1 = kq;
    for (int i = 0; i < count; i++)
    {
        kq1[i] = kq[count - i - 1];
    }

    return kq1;
}

int main()
{
    cout << "DOI CO SO\n\n";
    cout << "Nhap vao 1 so: ";
    int dec;
    cin >> dec;
    string bin = "01";
    string oct = "01234567";
    string hex = "0123456789ABCDEF";

    cout <<"BIN: "<<doicoso(bin,dec)<<"\n";
    cout <<"OCT: "<<doicoso(oct,dec)<<"\n";
    cout <<"HEX: "<<doicoso(hex,dec)<<"\n";

    return 0;
}