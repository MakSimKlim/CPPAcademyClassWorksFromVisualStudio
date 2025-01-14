﻿// 08_02_23_3 (задача на массив заполнение числами)
//
//дано число n не превышающее 100
//создать массив размером n х n и заполнить его по следующему правилу
//на главной диагонали записаны 0
//на двух диагоналях, прилегающих к главной числа 1
// на следующих двух диагоналях числа 2 и т.д.

//руководство google  по стилю С++ статья на Хабр - стандарты оформления кода!!!

#include <iostream>
//#include <time.h>
#include <cmath>


using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    //srand(time(NULL));

    int arrSize = 0;
    int arrMatrix[10][10];

    cout << "Заполнение квадратной матрицы"<<"\n";
    cout << "Укажите размер матрицы. Значение должно быть не больше 10" << "\n";
    cin >> arrSize;
    //заполнение массива
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize; j++)
        {
            arrMatrix[i][j] = (int)abs(i - j); // abs - модуль

        }
    }
    //вывод массива на экран
    for (int r = 0; r < arrSize; r++)
    {
        for (int k = 0; k < arrSize; k++)
        {
            cout << arrMatrix[r][k];
        }
        cout << "\n";
    }

    system("pause");
    return 0;
}
