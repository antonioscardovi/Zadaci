
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int mb, mj, pot, ostatak = 0;
	cin >> mb >> mj;
	cin >> pot;
	ostatak = mb - pot;
	for (int i = 1; i < mj; i++) {
		cin >> pot;
		ostatak = ostatak - pot;                                                                       
		ostatak += mb;                                                       
	}

	cout << ostatak + mb;
}