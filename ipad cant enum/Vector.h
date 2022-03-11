#pragma once
#include <iostream>

#define TEST 1

class Vector {
private:
	float x;
	float y;
public:
	Vector();
	void print();
};

typedef Vector myVector;