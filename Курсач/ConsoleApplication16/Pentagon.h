#pragma once
#include <iostream>
#include <cmath>

class Pentagon {
private:
	double x1, x2, y1, y2, dlinaP, dx, dy, r;
	int dlina;
public:
	// Конструктор с 4 параметрами
	Pentagon(double a, double b, double c, double d, int t, double r) : x1(a), x2(b), y1(c), y2(d), dlina(t), dlinaP(r) { }
	// Конструктор по умолчанию
	Pentagon() : x1(0), x2(0), y1(0), y2(0) {	}
	~Pentagon() { } // Деструктор
	void Create(int& Number); // метод ввода с клавиатуры
	void Deleted(int& Number); // метод вывода на экран
	void Show(int& Number); // перемещение
	void Verification(int& Number); // изменение размера
	void MoveO(int& Number); // построение минимального
};


