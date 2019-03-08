
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int L, par = 1;
	cin >> L;

	if (L % 2 == 0 && L != 2) {
		cout << "DA";
	}
	else {
		cout << "NE";
	}
}
