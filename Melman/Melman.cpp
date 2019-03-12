#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int sat, min, N, t;
	cin >> sat >> min >> N >> t;

	if (N == 0) {
		cout << t << sat << min;
	}

	for (int i = 0; i < N; i++) {
		cin >> t;
		min = min + 30;
	}

	if (min > 60) {
		sat++;
	}



}