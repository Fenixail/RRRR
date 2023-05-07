#include "Quadrate.h"

using namespace std;

void Quadrate::Create(int& Number)
{
	setlocale(LC_ALL, "rus");
	cout << "Введите координату 1-ой точки" << endl; 
	cin >> x1;
	cout << "Введите координату 2-ой точки" << endl;
	cin >> y1;
	cout << "Введите координату 3-ей точки" << endl;
	cin >> x2;
	cout << "Введите координату 4-ой точки" << endl; 
	cin >> y2;
	cout << "Вы ввели следующие координаты Quadrate:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
}

void Quadrate::Deleted(int& Number)
{
	setlocale(LC_ALL, "rus");
	cout << "Квадрат удалён" << endl;
}

void Quadrate::Show(int& Number)
{
	setlocale(LC_ALL, "rus");
	cout << "Вы ввели следующие координаты Quadrate:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
}

void Quadrate::Verification(int& Number)
{
	setlocale(LC_ALL, "rus");
	cout << "Квадрат Существует" << endl;
}

void Quadrate::MoveO(int& Number)
{
	setlocale(LC_ALL, "rus");
	cout << " На сколько единиц вы хотите переместить Квадрата по оси X ?" << endl;
	cin >> dx;
	cout << " На сколько единиц вы хотите переместить Квадрата по оси Y ?" << endl;
	cin >> dy;
	cout << "Получились следующие координаты Квадрата:" << endl;
	cout << " A:" << "(" << x1 + dx << "," << y1 + dy << ")" << endl;
	cout << " B:" << "(" << x2 + dx << "," << y1 + dy << ")" << endl;
	cout << " C:" << "(" << x2 + dx << "," << y2 + dy << ")" << endl;
	cout << " D:" << "(" << x1 + dx << "," << y2 + dy << ")" << endl;
}
