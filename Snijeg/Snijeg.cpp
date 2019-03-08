
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a, s1, s2, s3, sx = 0;
	cin >> a >> s1 >> s2 >> s3;
	sx = s1 - s2 + s3;
	if (sx > a) {
		cout << sx << endl << "DA";
	}
	else {
		cout << sx << endl << "NE";
	}
}

