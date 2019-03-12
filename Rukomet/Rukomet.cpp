#include "pch.h"
#include <iostream>

int main()
{
	int H, S;
	std::cin >> H >> S;

	if (H > S) {
		std::cout << "HRVATSKA";
	}
	else if (S > H) {
		std::cout << "SPANJOLSKA";
	}
	else if (H == S) {
		std::cout << "NERIJESENO";
	}
}

