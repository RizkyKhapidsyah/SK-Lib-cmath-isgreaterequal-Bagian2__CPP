
#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	// Take any values
	float a = 5.5;
	double f1 = nan("1");
	bool hasil;

	hasil = isgreaterequal(a, f1);
	cout << a << " isgreaterequal " << f1 << ": " << hasil;

	_getch();
	return 0;
}
