#include "Derived.h"
#include "ClassA.h"
#include "ClassB.h"
#include <iostream>


Derived::Derived() : ClassB(), ClassA()
{
}


Derived::~Derived()
{
}

void Derived::Print_ab()
{
	std::cout << "a: " << a << " b:" << b << std::endl;
}
