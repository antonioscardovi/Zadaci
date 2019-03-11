

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int K, D, O;
	int x = 0;
	cin >> K >> D >> O;

	do {
		x++;
		if (x > D) {
			x = -1;
			break;
		}
	} while (!(x * K % D == O));

	cout << x;
}

