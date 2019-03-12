#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int lin = 0, feng = 0, tao = 0;
	int l1, l2, l3;
	int f1, f2, f3;
	int t1, t2, t3;

	cin >> l1 >> l2 >> l3;
	cin >> f1 >> f2 >> f3;
	cin >> t1 >> t2 >> t3;


	if (l1 == 1) {
		lin = lin + 4;
	}
	else if (l1 == 2) {
		lin = lin + 6;
	}
	else if (l1 == 3) {
		lin = lin + 8;
	}
	else if (l1 == 4) {
		lin = lin + 10;
	}
	else if (l1 == 0) {
		lin = lin + 0;
	}

	if (l2 == 1) {
		lin = lin + 4;
	}
	else if (l2 == 2) {
		lin = lin + 6;
	}
	else if (l2 == 3) {
		lin = lin + 8;
	}
	else if (l2 == 4) {
		lin = lin + 10;
	}
	else if (l2 == 0) {
		lin = lin + 0;
	}

	if (l3 == 1) {
		lin = lin + 4;
	}
	else if (l3 == 2) {
		lin = lin + 6;
	}
	else if (l3 == 3) {
		lin = lin + 8;
	}
	else if (l3 == 4) {
		lin = lin + 10;
	}
	else if (l3 == 0) {
		lin = lin + 0;
	}

	if (f1 == 1) {
		feng = feng + 4;
	}
	else if (f1 == 2) {
		feng = feng + 6;
	}
	else if (f1 == 3) {
		feng = feng + 8;
	}
	else if (f1 == 4) {
		feng = feng + 10;
	}
	else if (f1 == 0) {
		feng = feng + 0;
	}

	if (f2 == 1) {
		feng = feng + 4;
	}
	else if (f2 == 2) {
		feng = feng + 6;
	}
	else if (f2 == 3) {
		feng = feng + 8;
	}
	else if (f2 == 4) {
		feng = feng + 10;
	}
	else if (f2 == 0) {
		feng = feng + 0;
	}

	if (f3 == 1) {
		feng = feng + 4;
	}
	else if (f3 == 2) {
		feng = feng + 6;
	}
	else if (f3 == 3) {
		feng = feng + 8;
	}
	else if (f3 == 4) {
		feng = feng + 10;
	}
	else if (f3 == 0) {
		feng = feng + 0;
	}

	if (t1 == 1) {
		tao = tao + 4;
	}
	else if (t1 == 2) {
		tao = tao + 6;
	}
	else if (t1 == 3) {
		tao = tao + 8;
	}
	else if (t1 == 4) {
		tao = tao + 10;
	}
	else if (t1 == 0) {
		tao = tao + 0;
	}

	if (t2 == 1) {
		tao = tao + 4;
	}
	else if (t2 == 2) {
		tao = tao + 6;
	}
	else if (t2 == 3) {
		tao = tao + 8;
	}
	else if (t2 == 4) {
		tao = tao + 10;
	}
	else if (t2 == 0) {
		tao = tao + 0;
	}

	if (t3 == 1) {
		tao = tao + 4;
	}
	else if (t3 == 2) {
		tao = tao + 6;
	}
	else if (t3 == 3) {
		tao = tao + 8;
	}
	else if (t3 == 4) {
		tao = tao + 10;
	}
	else if (t3 == 0) {
		tao = tao + 0;
	}

	if (lin > feng && lin > tao) {
		cout << "LIN" << " " << lin;
	}
	else if (feng > lin && feng > tao) {
		cout << "FENG" << " " << feng;
	}
	else if (tao > feng && tao > lin) {
		cout << "TAO" << " " << tao;
	}
	else if (lin == feng && lin > tao) {
		cout << "LIN" << " " << lin << endl;
		cout << "FENG" << " " << feng;
	}
	else if (lin == tao && lin > feng) {
		cout << "LIN" << " " << lin << endl;
		cout << "TAO" << " " << tao;
	}
	else if (feng == tao && feng > lin) {
		cout << "FENG" << " " << feng << endl;
		cout << "TAO" << " " << tao;
	}
	else if (feng == tao && feng == lin) {
		cout << "FENG" << " " << feng << endl;
		cout << "LIN" << " " << lin << endl;
		cout << "TAO" << " " << tao;
	}
}