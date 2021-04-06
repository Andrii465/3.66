#include "B2.h"


B2::B2() { b2 = 0; }

B2::B2(int v_b2) {
	b2 = v_b2;
}

B2::~B2() {}

void B2::show() {
	std::cout << "class B2:";
	std::cout << "show_B2()"
		<< "B2::b2 = " << b2;
}