#pragma once
#include <iostream>
#include <cmath>

class Pentagon {
private:
	double x1, x2, y1, y2, dlinaP, dx, dy, r;
	int dlina;
public:
	// ����������� � 4 �����������
	Pentagon(double a, double b, double c, double d, int t, double r) : x1(a), x2(b), y1(c), y2(d), dlina(t), dlinaP(r) { }
	// ����������� �� ���������
	Pentagon() : x1(0), x2(0), y1(0), y2(0) {	}
	~Pentagon() { } // ����������
	void Create(int& Number); // ����� ����� � ����������
	void Deleted(int& Number); // ����� ������ �� �����
	void Show(int& Number); // �����������
	void Verification(int& Number); // ��������� �������
	void MoveO(int& Number); // ���������� ������������
};


