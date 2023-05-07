#include "Pentagon.h"
#include "Quadrate.h"


using namespace std;

void Pentagon::Create(int& Number)
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
	cout << "������� ���������� 5-�� �����" << endl;
	cin >> dlina;
	cout << "�� ����� ��������� ���������� Pentagon:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
	cout << " E:" << "(" << x1 + (dlina / 2) << ";" << y1 + dlina << ")" << endl;
}

void Pentagon::Deleted(int& Number)
{

	cout << "������������ �����" << endl;
}

void Pentagon::Show(int& Number)
{

	setlocale(LC_ALL, "rus");
	cout << "�� ����� ��������� ���������� Pentagon:" << endl;
	cout << " A:" << "(" << x1 << "," << y1 << ")" << endl;
	cout << " B:" << "(" << x2 << "," << y1 << ")" << endl;
	cout << " C:" << "(" << x2 << "," << y2 << ")" << endl;
	cout << " D:" << "(" << x1 << "," << y2 << ")" << endl;
	cout << " E:" << "(" << x1 + (dlina / 2) << ";" << y1 + dlina << ")" << endl;
}

void Pentagon::Verification(int& Number)
{

	setlocale(LC_ALL, "rus");
	cout << "������������ ����������" << endl;
}

void Pentagon::MoveO(int& Number)
{

	setlocale(LC_ALL, "rus");
	cout << " �� ������� ������ �� ������ ����������� ������������ �� ��� X ?" << endl;
	cin >> dx;
	cout << " �� ������� ������ �� ������ ����������� ������������ �� ��� Y ?" << endl;
	cin >> dy;
	cout << "���������� ��������� ���������� �������������:" << endl;
	cout << " A:" << "(" << x1 + dx << "," << y1 + dy << ")" << endl;
	cout << " B:" << "(" << x2 + dx << "," << y1 + dy << ")" << endl;
	cout << " C:" << "(" << x2 + dx << "," << y2 + dy << ")" << endl;
	cout << " D:" << "(" << x1 + dx << "," << y2 + dy << ")" << endl;
	cout << " E:" << "(" << x1 + (dlina / 2) + dx << ";" << y1 + (dlina * 2) + dy << ")" << endl;
}
