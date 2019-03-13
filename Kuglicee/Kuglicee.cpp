#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int k1, k2;
	cin >> k1 >> k2;
	int p1, p2;
	for (int i = 0; i < 5; i++)
	{
		cin >> p1 >> p2;
		if (k1 == p1) {
			k1 = p2;
		}
		else if (k1 == p2) {
			k1 = p1;
		}

		if (k2 == p1) {
			k2 = p2;
		}
		else if (k2 == p2) {
			k2 = p1;
		}
	}
	if (k1 > k2) {
		cout << k2 << ' ' << k1 << endl;
	}
	else {
		cout << k1 << ' ' << k2 << endl;
	}
}
