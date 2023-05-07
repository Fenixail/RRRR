#include "Pentagon.h"
#include "Quadrate.h"


using namespace std;

void Pentagon::Create(int& Number)
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
	cout << "Введите координату 5-ой точки" << endl;
	cin >> dlina;
	cout << "Вы ввели следующие координаты Pentagon:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
	cout << " E:" << "(" << x1 + (dlina / 2) << ";" << y1 + dlina << ")" << endl;
}

void Pentagon::Deleted(int& Number)
{

	cout << "Пятиугольник удалён" << endl;
}

void Pentagon::Show(int& Number)
{

	setlocale(LC_ALL, "rus");
	cout << "Вы ввели следующие координаты Pentagon:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
	cout << " E:" << "(" << x1 + (dlina / 2) << ";" << y1 + dlina << ")" << endl;
}

void Pentagon::Verification(int& Number)
{

	setlocale(LC_ALL, "rus");
	cout << "Пятиугольник Существует" << endl;
}

void Pentagon::MoveO(int& Number)
{

	setlocale(LC_ALL, "rus");
	cout << " На сколько единиц вы хотите переместить Пятиугольник по оси X ?" << endl;
	cin >> dx;
	cout << " На сколько единиц вы хотите переместить Пятиугольник по оси Y ?" << endl;
	cin >> dy;
	cout << "Получились следующие координаты Пятиугольника:" << endl;
	cout << " A:" << "(" << x1 + dx << "," << y1 + dy << ")" << endl;
	cout << " B:" << "(" << x2 + dx << "," << y1 + dy << ")" << endl;
	cout << " C:" << "(" << x2 + dx << "," << y2 + dy << ")" << endl;
	cout << " D:" << "(" << x1 + dx << "," << y2 + dy << ")" << endl;
	cout << " E:" << "(" << x1 + (dlina / 2) + dx << ";" << y1 + (dlina * 2) + dy << ")" << endl;
}
