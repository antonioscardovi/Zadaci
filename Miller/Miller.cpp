
#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float S, A, Sf;
	cin >> S >> A;
	Sf = S * 9 / 5 + 32;
	cout << abs(Sf - A);
}

