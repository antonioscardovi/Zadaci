#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float N;
	float broj[100];
	float prosjek;
	int zbroj = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> broj[i];
		zbroj += broj[i];
	}

	prosjek = zbroj / N;
	cout << prosjek;
}