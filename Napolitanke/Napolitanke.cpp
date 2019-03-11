#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int kutija = 40, otv1, kut1, otv2, kut2, p_nap=0, p_kut=1;
	cin >> otv1 >> kut1 >> otv2 >> kut2;

	if (kut1 == kut2) {
		cout << otv1 - otv2 << endl<<1;
		return 0;
	}
	else if (kut2 < kut1) {
		p_nap = (otv1)+(40 - otv2) + (kutija * (kut1 - kut2 -1));
		cout << p_nap << endl;
		do {
			p_kut++;
			kutija += kutija;
		} while (kutija < p_nap);
		cout << p_kut;
	}
}
