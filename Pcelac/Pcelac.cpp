#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int cvijetovi[10];
	int pelud = 50;
	int unos;

	for (int i = 0; i < 9; i++) {
		cin >> unos;
		if (unos >= 0) {
			pelud += unos;
		}
		else if (unos < 0) {
			pelud -= unos;
		}

		if (pelud < 0) {
			return 0;
		}
	}

	//for (int i = 0; i < 10; i++) {
	//	cout << i << endl;
	//}

	cout << pelud;
}