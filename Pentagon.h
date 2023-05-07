#pragma once
#include <iostream>
#include <cmath>
#include "Figure.h"

class Pentagon : public Figure 
{
private:
	double x1, x2, y1, y2, dlinaP, dx, dy, r;
	int dlina;
public:
	// ����������� � 6 �����������
	Pentagon(double a, double b, double c, double d, int t, double r) : x1(a), x2(b), y1(c), y2(d), dlina(t), dlinaP(r) { }
	// ����������� �� ���������
	Pentagon() : x1(0), x2(0), y1(0), y2(0) {	}
	~Pentagon() { } // ����������
	void Create(); // ����� �������� ��������
	void Deleted(); // ����� ��������
	void Show(); // ����� ��������� ���������� ������
	void Verification(); // �������� ������� ������
	void MoveO(); // ����� ����������� �� ���������
	int Compare(); // ������� ������
};


