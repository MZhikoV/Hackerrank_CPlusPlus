#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while (T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		cout << left;
		cout <<showbase << nouppercase;
		cout << hex<<static_cast<long long int>(A) << endl;

		cout << dec;
		cout << setiosflags(ios::uppercase);
		cout << fixed << showpos << setprecision(2);
		cout << setfill('_') << right << setw(0xf) << B << endl;


		cout << fixed << noshowpos << setprecision(9);
		cout << scientific;
		cout << C << endl;
	}
	return 0;

}



/*
Sample Input

1
100.345 2006.008 2331.41592653498



Sample Output

0x64
_______+2006.01
2.331415927E+03*/


//284234683308.129272460938 18168843.250304613262 529550387095.728393554688