#include <iostream>
#include <cmath>
#include<vector>
#include "Quadrate.h"
#include <algorithm>
#include "Pentagon.h"
#include "Ploshad.h"



using namespace std;

int Menu(void)
{
    setlocale(LC_ALL, "rus");
    int select;
    do
    {
        system("CLS");
        cout << "Выберите фигуру:" << endl << endl;
        cout << "Press 1 -  Quadrate" << endl;
        cout << "Press 2 -  Pentagon" << endl << endl;
        cout << "EXIT" << endl << endl;
        cout << "Press 11 - Выход из меню" << endl << endl;
        cout << "Выбор: ";
        cin >> select;
        cout << endl;
    } while ((select < 1) || (select > 111));
    return select;
}

int MenuQ(void)
{
    setlocale(LC_ALL, "rus");
    int select;
    do
    {
        system("CLS");
        cout << "Выберите пункт : " << endl << endl;
        cout << "Quadrate:" << endl;
        cout << "Press 1 - Create Quadrate" << endl;
        cout << "Press 2 - Delited Quadrate" << endl;
        cout << "Press 3 - Show Quadrate" << endl;
        cout << "Press 4 - Verification Quadrate" << endl;
        cout << "Press 5 - MoveO Quadrate" << endl;
        cout << "Press 6 - Compare" << endl << endl;
        cout << "EXIT" << endl << endl;
        cout << "Press 22 - Вернуться  в главное меню" << endl << endl;
        cout << "Выбор: ";
        cin >> select;
        cout << endl;
    } while ((select < 1) || (select >> 111));
    return select;
}

int MenuP(void)
{
    setlocale(LC_ALL, "rus");
    int select;
    do
    {
        system("CLS");
        cout << "Выберите пункт:" << endl << endl;
        cout << "Pentagon" << endl;
        cout << "Press 1 - Create Pentagon" << endl;
        cout << "Press 2 - Delited Pentagon" << endl;
        cout << "Press 3 - Show Pentagon" << endl;
        cout << "Press 4 - Verification Pentagon" << endl;
        cout << "Press 5 - MoveO Pentagon" << endl;
        cout << "Press 6 - Compare" << endl << endl;
        cout << "EXIT" << endl << endl;
        cout << "Press 22 - Вернуться в главное меню" << endl << endl;
        cout << "Выбор: ";
        cin >> select;
        cout << endl;
    } while ((select < 1) || (select >> 111));
    return select;
}


int main()
{
    vector<int> v1, v2;
    int Number;
    setlocale(LC_ALL, "Russian");
    Quadrate Q; // Создаем объект без параметров, то есть будет использован конструктор по умолчанию
    Pentagon P;
    Ploshad S;
    int select;
    int selectQ;
    int selectP;
    do
    {
        select = Menu();
        switch (select)
        {
        case 1:
        {
            do
            {
                selectQ = MenuQ();
                switch (selectQ)
                {
                case 1:
                {
                    bool found;
                    cout << "Введите номер вашего квадрата: ";
                    cin >> Number;
                    if (found = find(v1.begin(), v1.end(), Number) != v1.end()) {
                        cout << "Уже существует данный квадрат!" << endl;
                        system("pause");
                        break;
                    }
                    else {
                        v1.push_back(Number);
                        cout << endl;
                        Q.Create(Number);
                        cout << endl;
                        system("pause");
                        break;
                    }
                }
                case 2:
                {
                    bool found;
                    cout << "Введите номер вашего квадрата: ";
                    cin >> Number;
                    if (found = find(v1.begin(), v1.end(), Number) != v1.end()) {
                        Q.Deleted(Number);
                        cout << endl;
                        v1.erase(std::remove(v1.begin(), v1.end(), Number), v1.end());
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого квадрата не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 3:
                {
                    bool found;
                    cout << "Введите номер вашего квадрата: ";
                    cin >> Number;
                    if (found = find(v1.begin(), v1.end(), Number) != v1.end()) {
                        Q.Show(Number);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого квадрата не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 4:
                {
                    bool found;
                    cout << "Введите номер вашего квадрата: ";
                    cin >> Number;
                    if (found = find(v1.begin(), v1.end(), Number) != v1.end()) {
                        Q.Verification(Number);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого квадрата не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 5:
                {
                    bool found;
                    cout << "Введите номер вашего квадрата: ";
                    cin >> Number;
                    if (found = find(v1.begin(), v1.end(), Number) != v1.end()) {
                        Q.MoveO(Number);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого квадрата не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 6:
                {
                    bool found;
                    cout << "Введите номер вашего квадрата: ";
                    cin >> Number;
                    if (found = find(v1.begin(), v1.end(), Number) != v1.end()) {
                        S.Compare(Number);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого квадрата не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                if (selectQ != 22)
                {
                    cout << endl << endl;
                    system("pause");
                }
                }
            } while (selectQ != 22);
            break;
        }
        case 2:
        {
            do
            {
                selectP = MenuP();
                switch (selectP)
                {
                case 1:
                {
                    bool found;
                    cout << "Введите номер вашего пятиугольника: ";
                    cin >> Number;
                    if (found = find(v2.begin(), v2.end(), Number) != v2.end()) {
                        cout << "Уже существует данный пятиугольник!" << endl;
                        system("pause");
                        break;
                    }
                    else {
                        v2.push_back(Number);
                        cout << endl;
                        P.Create(Number);
                        cout << endl;
                        system("pause");
                        break;
                    }
                }
                case 2:
                {
                    bool found;
                    cout << "Введите номер вашего пятиугольника: ";
                    cin >> Number;
                    if (found = find(v2.begin(), v2.end(), Number) != v2.end()) {
                        P.Deleted(Number);
                        cout << endl;
                        v2.erase(std::remove(v2.begin(), v2.end(), Number), v2.end());
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого пятиугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 3:
                {
                    bool found;
                    cout << "Введите номер вашего пятиугольника: ";
                    cin >> Number;
                    if (found = find(v2.begin(), v2.end(), Number) != v2.end()) {
                        P.Show(Number);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого пятиугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 4:
                {
                    bool found;
                    cout << "Введите номер вашего пятиугольника: ";
                    cin >> Number;
                    if (found = find(v2.begin(), v2.end(), Number) != v2.end()) {
                        P.Verification(Number);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого пятиугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 5:
                {
                    bool found;
                    cout << "Введите номер вашего пятиугольника: ";
                    cin >> Number;
                    if (found = find(v2.begin(), v2.end(), Number) != v2.end()) {
                        P.MoveO(Number);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого пятиугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 6:
                {
                    bool found;
                    cout << "Введите номер вашего пятиугольника: ";
                    cin >> Number;
                    if (found = find(v2.begin(), v2.end(), Number) != v2.end()) {
                        S.Compare(Number);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого пятиугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                if (selectP != 22)
                {
                    cout << endl << endl;
                    system("pause");
                }
                }
            } while (selectP != 22);
            break;
        }
        }
        if (select != 111)
        {
            cout << endl << endl;
            system("pause");
        }
    } while (select != 111);
    return EXIT_SUCCESS;
}
