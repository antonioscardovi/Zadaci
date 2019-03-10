
#include "pch.h"
#include <iostream>

using namespace std;

using namespace std;

int main()
{
	int U, P;
	cin >> U >> P;

	if (P < 30) {
		cout << 8400;
	}
	else if (P >= 30 && P < 55) {
		cout << (U - P) * 140;
	}
	else if (P >= 55) {
		cout << 0;
	}
}

