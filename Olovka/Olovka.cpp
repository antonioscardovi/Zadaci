
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int s = n / 100;
	int j = n % 100 % 10;

	if (s < j) {
		cout << "DESNI NAGIB";
	}
	else if (s == j) {
		cout << "RAVNOTEZA";
	}
	else {
		cout << "LIJEVI NAGIB";
	}
}

