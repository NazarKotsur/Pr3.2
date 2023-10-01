#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
	double a, b, c, x, F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	
	//Cпосіб 1
	if (x < 0 && b != 0)
		F = a * pow(x, 2) + b;
	if (x > 0 && b == 0)
		F = x - a / x - c;
	if (!(x < 0 && b != 0) && !(x > 0 && x == 0))
		F = x / c;

	cout << endl;
	cout << "1) F =" << F << endl;

	//Cпосіб 2
	if (x < 0 && b != 0)
		F = a * pow(x, 2) + b;
	else
		if (x > 0 && b == 0)
	F = x - a / x - c;
		else
			F = x / c;

	cout << "2) F= " << F << endl;

	cin.get();
	return 0;
}

