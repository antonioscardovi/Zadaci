#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int unos;

	cout << "Unesi broj: ";
	cin >> unos;

	srand(time(0));

	int broj = (int)(1 + rand() % 100);

	if (unos > broj) {
		cout << "BROJ JE MANJI." << endl;
	}
	else if (unos < broj) {
		cout << "BROJ JE VECI." << endl;
	}
	else if (unos == broj) {
		cout << "POGODAK!!!";
		return 0;
	}

	
	do {
		cout << "Unesi broj: ";
		cin >> unos;
		if (unos > broj) {
			cout << "BROJ JE MANJI." << endl;
		}
		else if (unos < broj) {
			cout << "BROJ JE VECI." << endl;
		}
		else if (unos == broj) {
			cout << "POGODAK!!!";
			break;
		}
	} while (unos != broj);


	


}