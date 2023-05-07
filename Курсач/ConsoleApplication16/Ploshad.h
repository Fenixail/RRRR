#pragma once
#include <iostream>
#include "Quadrate.h"
#include <cmath>

class Ploshad : public Quadrate
{
private:
	double dlinaQ;
	double dlinaP;
public:
	Ploshad(double a, double b) : dlinaQ(a), dlinaP(b) { }
	Ploshad() : dlinaQ(0), dlinaP(0) { };
	void Compare(int& Number);
};
