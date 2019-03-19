#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	int broj[6];
	int novi_broj[5];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> broj[i];
		if (broj[i] % 10 < broj[i] / 10 % 10 && broj[i] % 10 < broj[i] / 100 % 10) {
			novi_broj[i] = broj[i] % 10;
		}
		else if (broj[i] / 10 % 10 < broj[i] % 10 && broj[i] / 10 % 10 < broj[i] / 100 % 10) {
			novi_broj[i] = broj[i] / 10 % 10;
		}
		else if (broj[i] / 100 % 10 < broj[i] % 10 && broj[i] / 100 % 10 < broj[i] / 10 % 10) {
			novi_broj[i] = broj[i] / 100 % 10;
		}
		else if (broj[i] / 1000 % 10 < broj[i] / 10 % 10 && broj[i] / 1000 % 10 < broj[i] / 100 % 10 && broj[i] / 1000 % 10 < broj[i] % 10) {
			novi_broj[i] = broj[i] / 1000 % 10;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << novi_broj[i];
	}
}