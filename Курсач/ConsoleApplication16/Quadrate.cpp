#include "Quadrate.h"

using namespace std;

void Quadrate::Create(int& Number)
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
	cout << "�� ����� ��������� ���������� Quadrate:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
}

void Quadrate::Deleted(int& Number)
{
	setlocale(LC_ALL, "rus");
	cout << "������� �����" << endl;
}

void Quadrate::Show(int& Number)
{
	setlocale(LC_ALL, "rus");
	cout << "�� ����� ��������� ���������� Quadrate:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
}

void Quadrate::Verification(int& Number)
{
	setlocale(LC_ALL, "rus");
	cout << "������� ����������" << endl;
}

void Quadrate::MoveO(int& Number)
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
