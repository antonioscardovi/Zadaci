#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int barkod;
	int cijena = 0;
	char linije[5];

	cin >> barkod;

	for (int i = 0; i < 5; i++) {
		cin >> linije[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << linije[i];
	}

	if (linije[0] == 'D') {
		cijena = cijena + (barkod / 10000);
	}
	if (linije[1] == 'D') {
		cijena = cijena + (barkod / 1000 % 10);
	}
	if (linije[2] == 'D') {
		cijena = cijena + (barkod / 100 % 10);
	}
	if (linije[3] == 'D') {
		cijena = cijena + (barkod / 10 % 10);
	}
	if (linije[4] == 'D') {
	cijena = cijena + (barkod % 10);
	}

	cout << cijena;


}
