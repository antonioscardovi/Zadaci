
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, bon, sretan=0, ocek = 1;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> bon;
		if (bon >= ocek) {
			sretan++;
		}
		ocek++;
	}
	
	cout << sretan;
}


