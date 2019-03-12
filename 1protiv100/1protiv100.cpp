#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int N, ostali = 100;
	int dobitak = 1;
	int podjela;
	char Mirko;

	do {
		cin >> Mirko >> N;
		if (Mirko == 'F') {
			dobitak = 0;
			break;
		}
		if (N == 100) {
			dobitak = 100000;
			break;
		}
		ostali = ostali - N;
		cout << "Ostali: " << ostali << endl;
		podjela = 100000 / ostali;
		cout << "Podjela: " << podjela << endl;
		dobitak = dobitak + (podjela*N);
		cout << "Dobitak: " << dobitak << endl;
	} while (ostali > 0);


	cout << dobitak;
}