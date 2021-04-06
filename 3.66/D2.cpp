#include "D2.h"


D2::D2() : D1() { d2 = 0; }

D2::D2(int v_d2, int v_b1, int v_b2, int v_b3, int v_d1)
	: D1(v_d1, v_b1, v_b2, v_b3)
{
	d2 = v_d2;
}

D2::~D2() {}

void D2::show() {
	std::cout << "class D2:";
	D1::show();
	std::cout << "show_D2()"
		<< "D2::d2 = " << d2;
}