#pragma once
#include "B1.h"
#include "B2.h"
#include "B3.h"


class D1 : public B1, public B2, private B3 {
	int d1;
public:
	D1();
	D1(int v_d1, int v_b1, int v_b2, int  v_b3);
	~D1();
	void show();
};