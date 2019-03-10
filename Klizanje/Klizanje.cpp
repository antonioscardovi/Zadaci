
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, A, B;
	cin >> a >> b;
	cin >> A >> B;

	if (a + b >= A + B) {
		cout << A + B;
	}
	else if (a + b < A + B) {
		cout << a+b;
	}
}

