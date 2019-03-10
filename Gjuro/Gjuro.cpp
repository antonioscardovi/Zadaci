
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n % 5 == 0) {
		cout << n;
	}
	else if (n % 100 % 10 == 9) {
		n++;
	}
	else if (n % 100 % 10 == 8) {
		n + 2;
	}
	else if (n % 100 % 10 == 7) {
		n - 2;
	}
	else if (n % 100 % 10 == 6) {
		n - 1;
	}
	else if (n % 100 % 10 == 4) {
		n + 1;
	}
	else if (n % 100 % 10 == 3) {
		n + 2;
	}
	else if (n % 100 % 10 == 2) {
		n - 2;
	}
	else if (n  % 10 == 1) {
		n - 1;
	}
	
	cout << n;
}


