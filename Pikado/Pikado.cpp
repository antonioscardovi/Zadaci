#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int segment, dio, bodovi;
	int rez;

	cin >> bodovi >> segment >> dio;

	rez = bodovi - (segment*dio);

	if (rez == 1) {
		rez = bodovi;
	}

	if (rez == 0 && dio != 2) {
		rez = bodovi;
	}
	
	if (rez == bodovi) {
		cout << "Lose";
	}
	else if (rez > 0) {
		cout << "Dobro";
	}
	else if (rez == 0 && dio == 2) {
		cout << "Odlicno";
	}
}