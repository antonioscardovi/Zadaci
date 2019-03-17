#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	int broj[6];
	int novi_broj; // Evaluator ne prima string

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> broj[i];
		if (broj[i] % 10 < broj[i] / 10 % 10 && broj[i] % 10 < broj[i] / 100 % 10) {
			novi_broj += to_string(broj[i] % 10);
		}
		else if (broj[i] / 10 % 10 < broj[i] % 10 && broj[i] / 10 % 10 < broj[i] / 100 % 10) {
			novi_broj += to_string(broj[i] / 10 % 10);
		}
		else if (broj[i] / 100 % 10 < broj[i] % 10 && broj[i] / 100 % 10 < broj[i] / 10 % 10) {
			novi_broj += to_string(broj[i] / 100 % 10);
		}
		/*else if (broj[i] / 1000 % 10 < broj[i] / 10 % 10 && broj[i] / 1000 % 10 < broj[i] / 100 % 10 && broj[i] / 1000 % 10 < broj[i] % 10) {
			novi_broj += to_string(broj[i] / 1000 % 10);
		}*/
	}

	cout << "Novi broj: " << novi_broj << endl;

	cout << "325 % 10 : " << 325 % 10 << endl;
	cout << "325 / 10 % 10 : " << 325 / 10 % 10 << endl;
	cout << "325 / 100 % 10: " << 325 / 100 % 10 << endl;
	cout << "325 / 1000 % 10: " << 325 / 1000 % 10 << endl;
}