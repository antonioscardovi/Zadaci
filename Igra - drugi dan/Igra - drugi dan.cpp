
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a,b, tis, sto, des, jed;
	cin >> a;

	tis = a / 1000;
	sto = a % 1000 / 100;
	des = a % 1000 % 100 / 10;
	jed = a % 1000 % 100 % 10;

	

	if (tis == 1 || tis == 2 || tis == 3 || tis == 4 || tis == 5 || tis == 6 || tis == 7 || tis == 8) {
		tis += 1;
	}
	else if (sto == 1 || sto == 2 || sto == 3 || sto == 4 || sto == 5 || sto == 6 || sto == 7 || sto == 8) {
		sto += 1;
	}
	else if (des == 1 || des == 2 || des == 3 || des == 4 || des == 5 || des == 6 || des == 7 || des == 8 ) {
		des += 1;
	}
	else if (jed == 1 || jed == 2 || jed == 3 || jed == 4 || jed == 5 || jed == 6 || jed == 7 || jed == 8 ) {
		jed += 1;
	}

	

	a = tis*1000 + sto*100 + des*10 + jed;

	cout << a;
	
}

