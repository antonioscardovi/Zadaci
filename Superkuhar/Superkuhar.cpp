

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int t1, t2, t3, t4, t5, t6, t7, t8, t9, tin;
	int e1, e2, e3, e4, e5, e6, e7, e8, e9, edi;
	cin >> e1 >> e2 >> e3 >> e4 >> e5 >> e6 >> e7 >> e8 >> e9;
	cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6 >> t7 >> t8 >> t9;
	edi = e1 + e2 + e3 + e4 + e5 + e6 + e7 + e8 + e9;
	tin = t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9;
	if (edi > tin) {
		cout << "Edi" << " " << edi;
	}
	else if (tin > edi) {
		cout << "Tin" << " " << tin;
	}
	else  {
		cout << "Nema pobjednika" << " " << edi;
	}
}