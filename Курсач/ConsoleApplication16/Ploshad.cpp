#include "Ploshad.h"
using namespace std;

void Ploshad::Compare(int& Number)
{
	int S_quad;
	int S_penta;
	cout << "dlinaQ= " << endl;
	cin >> dlinaQ;
	cout << "dlinaPP= " << endl;
	cin >> dlinaP;
	S_quad = dlinaQ *dlinaQ;
	cout << "Площадь Квадрата= " << S_quad << endl;
	S_penta = (5 * dlinaP * dlinaP) / 3;
	cout << "Площадь Пятиугольника= " << S_penta << endl;

	if (S_quad > S_penta)
	{
		cout << "Ploshad Quadrate bolshe ploshadi Pentagon" << endl;
	}
	else if (S_quad == S_penta)
	{
		cout << "Ploshad Quadrate ravno ploshadi Pentagon" << endl;
	}
	else 
	{
		cout << "Ploshad Pentagon bolshe ploshadi Quadrate" << endl;
	}
}
