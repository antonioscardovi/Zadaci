
#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, p1, p2, p3, x, ukupno = 0;

	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> p1 >> p2;
		if (abs(p1 - p2) <= x) {
			if (p1 > p2) {
				ukupno += p1;
			}
			else if (p1 < p2) {
				ukupno += p2;
			}
			else if (p1 == p2) {
				ukupno += p1;
			}
		}
		else if (abs(p1 - p2) > x) {
			cin >> p3;
			ukupno += p3;
		}
	}

	cout << ukupno;
}

