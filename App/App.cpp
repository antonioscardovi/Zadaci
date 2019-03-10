
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int A, B, a1, a2, b1, b2;
	cin >> A >> B >> a1 >> a2 >> b1 >> b2;

	if (A > B && a1 > a2) {
		cout << a2;
	}
	else if (A > B && a1 < a2) {
		cout << a1;
	}
	else if (A > B && a1 == a2) {
		cout << a1;
	}
	else if (A < B && b1 < b2) {
		cout << b1;
	}
	else if (A < B && b1 > b2) {
		cout << b2;
	}
	else if (A < B && b1 == b2) {
		cout << b2;
	}
}

