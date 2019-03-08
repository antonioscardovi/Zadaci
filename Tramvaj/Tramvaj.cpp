

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int Ig, Tr;
	cin >> Ig >> Tr;
	if (Ig % Tr == 0) {
		cout << Ig / Tr - 1;
	}
	else
		cout << Ig / Tr;
}

