#include "Quadrate.h"
#include "Figure.h"

using namespace std;

void Quadrate ::Create()
{
	setlocale(LC_ALL, "rus");
	cout << "������� ���������� 1-�� �����" << endl; 
	cin >> x1;
	cout << "������� ���������� 2-�� �����" << endl;
	cin >> y1;
	cout << "������� ���������� 3-�� �����" << endl;
	cin >> x2;
	cout << "������� ���������� 4-�� �����" << endl; 
	cin >> y2;
	cout << "������� ����� ��������" << endl;
	cin >> dlinaQ;
	cout << "�� ����� ��������� ���������� Quadrate:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
}

void Quadrate::Deleted()
{
	setlocale(LC_ALL, "rus");
	cout << "������� �����" << endl;
}

void Quadrate::Show()
{
	setlocale(LC_ALL, "rus");
	cout << "�� ����� ��������� ���������� Quadrate:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
}

void Quadrate::Verification()
{
	setlocale(LC_ALL, "rus");
	cout << "������� ����������" << endl;
}

void Quadrate::MoveO()
{
	setlocale(LC_ALL, "rus");
	cout << " �� ������� ������ �� ������ ����������� �������� �� ��� X ?" << endl;
	cin >> dx;
	cout << " �� ������� ������ �� ������ ����������� �������� �� ��� Y ?" << endl;
	cin >> dy;
	cout << "���������� ��������� ���������� ��������:" << endl;
	cout << " A:" << "(" << x1 + dx << "," << y1 + dy << ")" << endl;
	cout << " B:" << "(" << x2 + dx << "," << y1 + dy << ")" << endl;
	cout << " C:" << "(" << x2 + dx << "," << y2 + dy << ")" << endl;
	cout << " D:" << "(" << x1 + dx << "," << y2 + dy << ")" << endl;
}

int Quadrate::Compare()
{
	setlocale(LC_ALL, "rus");
	int w;
	w = dlinaQ * dlinaQ;
	cout << "������� ��������= " << w << endl;
	return w;
}
