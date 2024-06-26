//specification file for the MathStack class
#ifndef MATHSTACK_H
#define MATHSTACK_H
#include "IntStack.h"

class MathStack : public IntStack
{
public:
	//constructor 
	MathStack(int s) : IntStack(s) {}

	//MathStack operations
	void add();
	void sub();
};
#endif
