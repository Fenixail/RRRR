#pragma once
#include <iostream>
#include <cmath>

class Quadrate {
private:
	double x1, x2, y1, y2, dlinaQ, dx, dy, r;
public:
	// Конструктор с 4 параметрами
	Quadrate(double a, double b, double c, double d, double r) : x1(a), x2(b), y1(c), y2(d), dlinaQ(r) {	}
	// Конструктор по умолчанию
	Quadrate() : x1(0), x2(0), y1(0), y2(0) {	}
	~Quadrate() { } // Деструктор
	void Create(int& Number); // метод создания фигуры
	void Deleted(int& Number); // метод удаления фигуры
	void Show(int& Number); // показ координатов фигуры
	void Verification(int& Number); // проверка существования фигуры
	void MoveO(int& Number); // перемещение фигуры (изменение координатов)
};
