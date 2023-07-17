#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i <= 127) {
		if (i == 0)
			cout << i << "\tNUL" << endl;
		else if (i == 1)
			cout << i << "\tSOH" << endl;
		else if (i == 2)
			cout << i << "\tSTX" << endl;
		else if (i == 3)
			cout << i << "\tETX" << endl;
		else if (i == 4)
			cout << i << "\tEOT" << endl;
		else if (i == 5)
			cout << i << "\tENQ" << endl;
		else if (i == 6)
			cout << i << "\tACK" << endl;
		else if (i == 7)
			cout << i << "\tBEL" << endl;
		else if (i == 8)
			cout << i << "\tBF" << endl;
		else if (i == 9)
			cout << i << "\tHT" << endl;
		else if (i == 10)
			cout << i << "\tLT" << endl;
		else if (i == 11)
			cout << i << "\tVT" << endl;
		else if (i == 12)
			cout << i << "\tFF" << endl;
		else if (i == 13)
			cout << i << "\tCR" << endl;
		else if (i == 14)
			cout << i << "\tSO" << endl;
		else if (i == 15)
			cout << i << "\tSI" << endl;
		else if (i == 16)
			cout << i << "\tDLE" << endl;
		else if (i == 17)
			cout << i << "\tDC1" << endl;
		else if (i == 18)
			cout << i << "\tDC2" << endl;
		else if (i == 19)
			cout << i << "\tDC3" << endl;
		else if (i == 20)
			cout << i << "\tDC4" << endl;
		else if (i == 21)
			cout << i << "\tNAK" << endl;
		else if (i == 22)
			cout << i << "\tSYN" << endl;
		else if (i == 23)
			cout << i << "\tETB" << endl;
		else if (i == 24)
			cout << i << "\tCAN" << endl;
		else if (i == 25)
			cout << i << "\tEM" << endl;
		else if (i == 26)
			cout << i << "\tSUB" << endl;
		else if (i == 27)
			cout << i << "\tESC" << endl;
		else if (i == 28)
			cout << i << "\tFS" << endl;
		else if (i == 29)
			cout << i << "\tGS" << endl;
		else if (i == 30)
			cout << i << "\tRS" << endl;
		else if (i == 31)
			cout << i << "\tUS" << endl;
		else if (i == 127)
			cout << i << "\tDEL" << endl;
		else
			cout << i << "\t" << (char)i << endl;
        i++;
    }

    system("pause");
    return 0;
}