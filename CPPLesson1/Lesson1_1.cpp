﻿//
// Это моя первая программа   Ctrl+K+C  - установить комментарий на строку
//                            Ctrl+K+U  - снять комментарий со строки

//  \b // возврат курсора на предыдущую позицию
//  \n // Перейти на начало новой строки
//  \t // Перейти к следующей позиции табуляции
//  \\ // Вывести обратную черту \
//  \" // Вывести двойную кавычку "
//  \' // Вывести одинарную кавычку '




#include <iostream>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Rus");

	//cout << "Hello World! \n";  // Это вывод надписи на экран
	cout << "Привет!\n\tКак тебя зовут?\n";  // 
	cout << R"(Мой дядя, самых честных правил,
когда не в шутку занемог...)" << endl;

	
	// Типв данных в С++
	//	7 8 
	// int  - целочисленный 4 байта от -2 147 483 648	до 2147483647
	// unsigned int   от 0 до 4294967294.
	// long long - 8 байт от –9,223,372,036,854,775,808	до 9,223,372,036,854,775,807

	// float  double  7.8
	// char 1 байт  символ
	
	// bool  1 байт    true   false  (для c++ false = 0, остальное - true )
	
	//0x00007FF7A9812210  - какой-то адрес памяти
	
	//  Тип_данных имя_переменной

	int goldInChest = 10;  // camel case
	int gold;
	int counter2;
	string first_name; // snake case
	int a; // номер счета
	int accountNumber = 1234;

	// const Тип_данных имя_константы = значение
	const float PI = 3.14; // вещественная константа двойной точности.
	char INT; // можно но, не рекомендуется.
	int ЦелоеЧисло = 87; //можно но не желательно

	
	// Литералы.

	cout << 123.0 << endl;  // double
	cout << 123.0e-2 << endl;  // double
	cout << 123.0f << endl; // float
	cout << 123 << endl; // int
	cout << 'a' << endl; // char  символьный
	cout << '\141' << endl; // char  символьный
	cout << 123L << endl; // long


	cout << endl;
	cout << "Хо-хо-хо! У меня в сундучке " << goldInChest << " золотых монет!" << endl;

	//Ввод Данных
	cout << "Сколько денежек ты готов положить в мой сундучек? " << endl;
	cin >> gold;
	cout << "Ух, ты!!! У меня в сундучке " << goldInChest+gold << " золотых монет!" << endl;
	
	// Арифметические действия.

	
	//system("pause");
}
