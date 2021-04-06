#include <iostream>

#include "D2.h"
using namespace std;

int main()
{


	B1 b_1(777);
	cout << "B1 b_1(777);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "Hierarchy of class B1: " << endl;
	b_1.show();
	B2 b_2(666);
	cout << "B2 b_2(666);" << endl;
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "Hierarchy of class B2: " << endl;
	b_2.show();
	B3 b_3(555);
	cout << "B3 b_3(555);" << endl;
	cout << "sizeof(B3) = " << sizeof(B3) << endl;
	cout << endl << "Hierarchy of class B3: " << endl;
	b_3.show();
	D1 d_1(111, 222, 333, 444);
	cout << "D1 d_1(111, 222, 333, 444);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "Hierarchy of class D1: " << endl;
	d_1.show();
	D2 d_2(1, 2, 3, 3, 5);
	cout << "D2 d_2(1, 2, 3, 3, 5);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Hierarchy of class D2: " << endl;
	d_2.show();

	return 0;
}