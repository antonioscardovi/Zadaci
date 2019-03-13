#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int broj, brojevi[6], sifre[3];

	for (int i = 0; i < 6; i++) {
		cin >> broj;
		brojevi[i] = broj % 10;
	}

	for (int i = 0; i < 3; i++) {
		cin >> broj;
		sifre[i] = broj;
	}


	for (int i = 0; i < 3; i++) {

		if (brojevi[5] != sifre[i] % 10 || brojevi[4] != sifre[i] / 10 % 10) {
			cout << "Nedobitan" << endl;
		}
		else if (brojevi[3] != sifre[i] / 100 % 10) {
			cout << "V. vrsta" << endl;
		}
		else if (brojevi[2] != sifre[i] / 1000 % 10) {
			cout << "IV. vrsta" << endl;
		}
		else if (brojevi[1] != sifre[i] / 10000 % 10) {
			cout << "III. vrsta" << endl;
		}
		else if (brojevi[0] != sifre[i] / 100000 % 10) {
			cout << "II. vrsta" << endl;
		}
		else if (brojevi[0] == sifre[i] / 100000 % 10) {
			cout << "I. vrsta" << endl;
		}
	}


} 
