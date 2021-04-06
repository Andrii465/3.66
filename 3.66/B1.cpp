#include "B1.h"


B1::B1() { b1 = 0; }

B1::B1(int v_b1) {
	b1 = v_b1;
}

B1::~B1() {}

void B1::show() {
	std::cout << "class B1:";
	std::cout << "show_B1()"
		<< "B1::b1 = " << b1;
}