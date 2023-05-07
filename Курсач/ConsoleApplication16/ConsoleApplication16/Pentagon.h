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
	// Конструктор с 6 параметрами
	Pentagon(double a, double b, double c, double d, int t, double r) : x1(a), x2(b), y1(c), y2(d), dlina(t), dlinaP(r) { }
	// Конструктор по умолчанию
	Pentagon() : x1(0), x2(0), y1(0), y2(0) {	}
	~Pentagon() { } // Деструктор
	void Create(); // метод создания квадрата
	void Deleted(); // метод удаления
	void Show(); // метод показания координаты фигуры
	void Verification(); // проверка наличие фигуры
	void MoveO(); // метод пересечения на плоскости
	int Compare(); // площадь фигуры
};


