
#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n1, n2, n3, n4, n5;
	float prosjek;
	float z1=0, z2=0, z3=0, z4=0, z5=0;

	cin >> n1 >> n2 >> n3 >> n4 >> n5;

	for (int i = 0; i < n1; i++) {
		z1 += 2;
	}
	for (int i = 0; i < n2; i++) {
		z2 += 2;
	}
	for (int i = 0; i < n3; i++) {
		z3 += 3;
	}
	for (int i = 0; i < n4; i++) {
		z4 += 4;
	}
	for (int i = 0; i < n5; i++) {
		z5 += 5;
	}

	prosjek = (z1 + z2 + z3 + z4 + z5) / (n1 + n2 + n3 + n4 + n5);

	if (n1 > 0) {
		cout << setprecision(2) << fixed << prosjek << endl;
		cout << "nedovoljan";
		return 0;
	}

	if (prosjek >= 4.50) {
		cout << setprecision(2) << fixed << prosjek << endl;
		cout << "odlican";
	}
	else if (prosjek < 4.50 && prosjek >= 3.50) {
		cout << setprecision(2) << fixed << prosjek << endl;
		cout << "vrlo dobar";
	}
	else if (prosjek < 3.50 && prosjek >= 2.50) {
		cout << setprecision(2) << fixed << prosjek << endl;
		cout << "dobar";
	}
	else if (prosjek < 2.50 && prosjek >= 2.00) {
		cout << setprecision(2) << fixed << prosjek << endl;
		cout << "dovoljan";
	}
}


