#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int R, S, G, M, cokolada;
	cin >> R >> S >> G >> M;

	if (R*S*G <= M) {
		cout << R * S*G;
	}
	else if (R*S*G > M) {
		cout << 0;
	}
}