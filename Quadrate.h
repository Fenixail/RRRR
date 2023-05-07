#pragma once
#include <iostream>
#include <cmath>
#include "Figure.h"

class Quadrate : public Figure 
{
private:
	double x1, x2, y1, y2, dlinaQ, dx, dy, r;
public:
	// ����������� � 5 �����������
	Quadrate(double a, double b, double c, double d, double r) : x1(a), x2(b), y1(c), y2(d), dlinaQ(r) {	}
	// ����������� �� ���������
	Quadrate() : x1(0), x2(0), y1(0), y2(0) {	}
	~Quadrate() { } // ����������
	void Create(); // ����� �������� ������
	void Deleted(); // ����� �������� ������
	void Show(); // ����� ����������� ������
	void Verification(); // �������� ������������� ������
	void MoveO(); // ����������� ������ (��������� �����������)
	int Compare(); // ������� ������
};
