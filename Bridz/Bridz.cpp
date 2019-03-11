#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, zbroj = 0;
	char karte[13];

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= 12; j++) {
			cin >> karte[j];
			if (karte[j] == 'A') {
				zbroj += 4;
			}
			else if (karte[j] == 'K') {
				zbroj += 3;
			}
			else if (karte[j] == 'Q') {
				zbroj += 2;
			}
			else if (karte[j] == 'J') {
				zbroj += 1;
			}
		}
	}

	//if (karte[0] == 'A') {
	//	zbroj += 4;
	//}
	//else if (karte[0] == 'K') {
	//	zbroj += 3;
	//}
	//else if (karte[0] == 'Q') {
	//	zbroj += 2;
	//}
	//else if (karte[0] == 'J') {
	//	zbroj += 1;
	//} 

	cout << zbroj;

}