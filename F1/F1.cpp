#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float x = 1;
	float bolid[15];
	int y, b1, b2;

	//do {
	//	y++;
	//	cin >> x;
	//	bolid[y] = x;
	//} while (x != 0);
	
	for (y = 1; x != 0; y++) {
		cin >> x;
		bolid[y] = x;
	}

	cin >> b1 >> b2;

	cout << bolid[y - b2] - bolid[y - b1];
	
}


