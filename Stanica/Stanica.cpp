
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int S, b1, b2;
	int	stanica1, stanica2;

	cin >> S >> b1 >> b2;

	stanica1 = b1 - S;
	stanica2 = stanica1 + b2;

	if (stanica1 < 0) {
		cout << "STANICA 1: " << "ZAKASNIT CE" << endl;
	}
	else {
		cout << "STANICA 1: " << stanica1 << endl;
	}

	if (stanica2 < 0) {
		cout << "STANICA 2: " << "ZAKASNIT CE" << endl;
	}
	else {
		cout << "STANICA 2: " << stanica2 << endl;
	}

	
}


