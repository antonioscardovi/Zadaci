#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int N, ostali = 100;
	int iznos = 100000;
	int dobitak = 0;
	int podjela;
	char Mirko;

	do {
		cin >> Mirko;
		if (Mirko == 'F') {
			cin >> N;
			dobitak = 0;
			break;
		}
		if (Mirko == 'T') {
			cin >> N;
			podjela = iznos / ostali;
			dobitak += (podjela*N);
			ostali -= N;
		}
		if (Mirko == 'P') {
			cin >> N;
			ostali -= N;
		}
		
	} while (ostali > 0);


	cout << dobitak;
}