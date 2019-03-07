

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int KZ = 0;
	cin >> KZ;

	if (KZ < 1) {
		return 0;
	}
	else if (KZ <= 50) {
		cout << "dobra kvalitete zraka";
	}
	else if (KZ <= 100) {
		cout << "umjerena kvaliteta zraka";
	}
	else if (KZ <= 150) {
		cout << "zrak nezdrav za osjetljive grupe";
	}
	else if (KZ <= 200) {
		cout << "nezdrav zrak";
	}
	else if (KZ <= 300) {
		cout << "vrlo nezdrav zrak";
	}
	else if (KZ <= 500) {
		cout << "opasan zrak";
	}
	else {
		return 0;
	}
}


