#include "D1.h"


D1::D1() : B1(), B2(), B3() { d1 = 0; }

D1::D1(int v_d1, int v_b1, int v_b2, int  v_b3) : B1(v_b1), B2(v_b2), B3(v_b3) {
}

D1::~D1() {}

void D1::show() {
	std::cout << "class D1:";
	B1::show();
	B2::show();
	B3::show();
	std::cout << "show_D1()"
		<< "D1::d1 = " << d1;
}