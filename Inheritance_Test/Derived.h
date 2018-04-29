#pragma once
#include "ClassA.h"
#include "ClassB.h"

class Derived: public ClassA, public ClassB
{
	//int a, b;
public:
	Derived();
	~Derived();
	void Print_ab();
};

