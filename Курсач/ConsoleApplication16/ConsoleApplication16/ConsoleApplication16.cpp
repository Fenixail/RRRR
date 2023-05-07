#include <iostream>   // консольный ввод-вывод
#include <cmath>
#include<vector>  //Вектор
#include "Quadrate.h" // Дочерний класс Квадрата
#include <algorithm> // Find
#include "Pentagon.h" // Дочерний класс Пятиугольника
#include "Menu1.h"
#include "Figure.h"


using namespace std;




int main()
{
    vector<int> v1, v2;
    int Number;
    setlocale(LC_ALL, "Russian");
    Quadrate Q; // Создаем объект без параметров, то есть будет использован конструктор по умолчанию
    Pentagon P;
    Menu1 M;

    int select;
    int selectQ;
    int selectP;
    int selectC;
    do
    {
        select = M.Menu(); 
        switch (select) // Главноен меню
        {
        case 1:
        {
            do
            {
                selectQ = M.MenuQ();
                switch (selectQ) //Главное меню Квадрата
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
                        Q.Create();
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
                        Q.Deleted();
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
                        Q.Show();
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
                        Q.Verification();
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
                        Q.MoveO();
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
                selectP = M.MenuP(); 
                switch (selectP) //Главное меню Пятиугольника
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
                        P.Create();
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
                        P.Deleted();
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
                        P.Show();
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
                        P.Verification();
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
                        P.MoveO();
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
        case 3:
        {
            do
            {
                selectC = M.MenuC();
                switch (selectC) //Главное меню Compare
                {
                case 1:
                {
               
                    bool found;
                    cout << "Введите номер ваших фигур: " << endl;
                    cin >> Number;
                    if ((found = find(v1.begin(), v1.end(), Number) != v1.end()) && (found = find(v2.begin(), v2.end(), Number) != v2.end()))
                    {
                        if (Q.Compare() > P.Compare())
                        {
                            cout << "Площадь квадрата больше площади пятиугольника" << endl;
                        }
                        else if (Q.Compare() == P.Compare())
                        {
                            cout << "Площадь квадрата равна площади пятиугольника" << endl;
                        }
                        else
                        {
                            cout << "Площадь пятиугольника больше площади квадрата" << endl;
                        }
                        system("pause");
                        break;
                    }
                    else
                    {
                        cout << "Таких фигур не существуют" << endl << endl;
                        cout << endl;
                        system("pause");
                        break;
                    }
                    break;
                }
                if (selectC != 22)
                {
                    cout << endl << endl;
                }
                }
            } while (selectC != 22);
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
