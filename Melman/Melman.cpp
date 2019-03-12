#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int sat, min, N, t[10];
	int maxt = 0;
	int sat1 = 0, min1 = 0;
	cin >> sat >> min >> N;
	for (int i = 0; i < N; i++) {
		cin >> t[i];
		min = min + 30;
		if (min >= 60) {
			sat++;
			min = min - 60;
		}
		if (t[i] > maxt) {
			maxt = t[i];
			sat1 = sat;
			min1 = min;
		}
	}
	if (N == 0) {
		cout << t << sat << min;
		return 0;
	}
	cout << maxt << endl << sat1 << endl << min1;
}
