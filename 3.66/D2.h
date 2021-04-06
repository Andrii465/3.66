#pragma once
#include "D1.h"



class D2 : public D1 {
	int d2;
public:
	D2();
	D2(int v_d2, int v_b1, int v_b2, int v_b3, int v_d1);
	~D2();

	void show();
};
