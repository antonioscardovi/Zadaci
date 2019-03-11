
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;

	b = a;

	if (a % 5 == 0) {
		cout << a;
		return 0;
	}

	while (a % 5 != 0 && b % 5 != 0) {
		a++;
		b--;
	}
	
	if (a % 5 == 0) {
		cout << a;
	}
	else if (b % 5 == 0) {
		cout << b;
	}
}


