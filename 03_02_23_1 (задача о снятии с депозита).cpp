﻿// 03_02_23(задача).cpp 
//
//задача о банковском депозите
//пользователь должен ввести конвертацию курса рубля/доллара
//выбрать месяц когда будет снята сумма депозита в рублях с долларового счета
//нужно высчитать пулучившуюся суму в рублях

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    //srand(time(NULL));//рандомайзер
    setlocale(LC_ALL, "Rus");

    const int N = 12; //количество месяцев и размер массива
    int doll;//перевод в доллары накопленную сумму в рублях
    int X = 0;//сумма депозита
    int j = 0; // номер месяца в котором нужно снять деньги
    int proc = 0;//годовой процент рублевого депозита
    int deposProc = 0;//размер депозита с прибылью в рублях при указанном месяце
    int jan = 0, feb = 0, mar = 0, apr = 0, may = 0, jun = 0, jul = 0, aug = 0, sep = 0, oct = 0, nov = 0, dec = 0;
    int array[N];
    array[0] = jan;
    array[1] = feb;
    array[2] = mar;
    array[3] = apr;
    array[4] = may;
    array[5] = jun;
    array[6] = jul;
    array[7] = aug;
    array[8] = sep;
    array[9] = oct;
    array[10] = nov;
    array[11] = dec;


    cout << "Введите сумму на депозите в рублях: " << "\n";
    cin >> X;
    cout << "Введите годовой накопительный процент для депозита в рублях: " << "\n";
    cin >> proc;
    cout << "Введите курс доллара для каждого месяца: " << "\n";
    cout << "январь: ";
    cin >> jan;
    cout << "\nфевраль: ";
    cin >> feb;
    cout << "\nмарт: ";
    cin >> mar;
    cout << "\nапрель: ";
    cin >> apr;
    cout << "\nмай: ";
    cin >> may;
    cout << "\nиюнь: ";
    cin >> jun;
    cout << "\nиюль: ";
    cin >> jul;
    cout << "\nавгуст: ";
    cin >> aug;
    cout << "\nсентябрь: ";
    cin >> sep;
    cout << "\nоктябрь: ";
    cin >> oct;
    cout << "\nноябрь: ";
    cin >> nov;
    cout << "\nдекабрь: ";
    cin >> dec;

    cout << "Укажите номер месяца (от 1 до 12) в котором будут сняты деньги: ";
    cin >>  j;

    deposProc = X + ((X * proc / 100) / N) * j; // размер депозита с прибылью в рублях при указанном месяце

    cout << "Сумма накоплений в рублях на" << j << " месяц равна: " << deposProc<<" руб.";

    //int* dinamicArr = new int[N];//выделение памяти и объявление динамического массива
    ////int мы задаем размер памяти под массив
    //// * - это указатель на ячейку памяти в программе (чтобы выделить память при компиляции)
    //// по умолчанию заполняются пустые места нулями
   
    doll = array[j] * deposProc;
   
    cout << doll << "долларов" << "\n";//долларов в нужном месяце


    //delete[] dinamicArr;
    system("pause");
    return 0;
}

