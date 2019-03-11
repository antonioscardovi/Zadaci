#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	int serijski1, serijski2, serijski3;

	cin >> a >> b >> c >> d >> e >> f;

	a = a % 10;
	b = b % 10;
	c = c % 10;
	d = d % 10;
	e = e % 10;
	f = f % 10;

	int rez = stoi(to_string(a) + to_string(b) + to_string(c) + to_string(d) + to_string(e) + to_string(f));

	cout << rez;
	

	/*cin >> serijski1 >> serijski2 >> serijski3;

	cout << serijski1;*/


	//if (brojevi[5] % 10 ==  ) {
	//	cout << "I. vrsta";
	//}

	


		
} 
