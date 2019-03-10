
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int Op, Oz, p1, p2;
	
	cin >> Op >> Oz >> p1 >> p2;

	if (Op <p1 && Oz > p1) {
		cout << p2;
	}
	else if (Op <p2 && Oz > p2){
		cout << p1;
	}
	else if (Op == p1) {
		cout << p2;
	}
	else if (Op == p2) {
		cout << p1;
	}
	else if (p1 < p2) {
		cout << p1;
	}
	else if (p1 > p2) {
		cout << p2;
	}
}
