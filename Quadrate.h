#pragma once
#include <iostream>
#include <cmath>
#include "Figure.h"

class Quadrate : public Figure 
{
private:
	double x1, x2, y1, y2, dlinaQ, dx, dy, r;
public:
	// Конструктор с 5 параметрами
	Quadrate(double a, double b, double c, double d, double r) : x1(a), x2(b), y1(c), y2(d), dlinaQ(r) {	}
	// Конструктор по умолчанию
	Quadrate() : x1(0), x2(0), y1(0), y2(0) {	}
	~Quadrate() { } // Деструктор
	void Create(); // метод создания фигуры
	void Deleted(); // метод удаления фигуры
	void Show(); // показ координатов фигуры
	void Verification(); // проверка существования фигуры
	void MoveO(); // перемещение фигуры (изменение координатов)
	int Compare(); // площадь фигуры
};
