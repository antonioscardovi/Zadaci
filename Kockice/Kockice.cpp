
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int m=0, s=0;
	cout << "mirko: ";
	cin >> m;
	cout << "slavko: ";
	cin >> s;

	int m1 = m;
	int s1 = s;

	if (m1 == 1) {
		m = 6;
	}
	else if (m1 == 2) {
		m = 5;
	}
	else if (m1 == 3) {
		m = 4;
	}

	if (s1 == 1) {
		s = 6;
	}
	else if (s1 == 2) {
		s = 5;
	}
	else if (s1 == 3) {
		s = 4;
	}
	

	cout << "mirko => " << m << endl << "slavko => " << s << endl;



	if (m > s) {
		cout << "mirko";
	}
	else if (m == s){
		cout << "nerijeseno";
	}
	else if (m < s) {
		cout << "slavko";
	}

}


