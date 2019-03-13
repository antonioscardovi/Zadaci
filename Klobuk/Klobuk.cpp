#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int unos;
	int harry = 0;
	int hermiona = 0;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> unos;
		harry *= 10;
		harry += unos;
	}
	for (int i = 0; i < b; i++) {
		cin >> unos;
		hermiona *= 10;
		hermiona += unos;
	}
	cout << "HARRY:" << harry << endl;
	cout << "HERMIONA:" << hermiona << endl;
	if (harry > hermiona) {
		cout << "HARRY " << harry - hermiona << endl;
	}
	else if (harry == hermiona) {
		cout << "JEDNAKO 0" << endl;
	}
	else {
		cout << "HERMIONA " << hermiona - harry << endl;
	}
}