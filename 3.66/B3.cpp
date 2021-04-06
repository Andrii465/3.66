#include "B3.h"


B3::B3() { b3 = 0; }

B3::B3(int v_b3) {
	b3 = v_b3;
}

B3::~B3() {}

void B3::show() {
	std::cout << "class B3:";
	std::cout << "show_B3()"
		<< "B3::b3 = " << b3;
}