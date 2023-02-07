﻿// Операторы.
//Оператор — конструкция языка позволяющая производить различные действия над данными, 
// приводящие к определенному результату
//  a + 2 = 4
// операнды - то с чем производят действия.
//Унарные — операторы, которым необходим, только один операнд
// оператор операнд;  3 и -3 
// операнд оператор;
//Бинарные — операторы, которым необходимо два операнда слева и справа от оператора
//Тернарные — операторы, которым необходимо три операнда.

// Задача
// Напишите программу вычисления площади прямоугольника.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	{
		//cout << "---Программа вычисления площади прямоугольника!---\n";
		//int height = 0, width = 0, square = 0; //высота, ширина, площадь
		////Введите Ширину прямоугольника
		//cout << "Введите ширину прямоугольника: ";
		//cin >> width;
		//		
		//	//Введите Высоту прямоугольника
		//	cout << "Введите высоту прямоугольника: ";
		//	cin >> height;
		//
		////Вычисляем Площадь прямоугольника по формуле Ширина*Высота
		//square = width * height;

		////Выводим результат на экран
		//cout << "Площадь прямоугольника = " << square << endl;
	}
	
	{
		cout << "---Программа вычисления стороны прямоугольника!---\n";
		double height = 0, width = 0, square = 0;
		//int height = 0, width = 0, square = 0;
		cout << "Введите Площадь прямоугольника: ";
		cin >> square;
		cout << "Введите сторону прямоугольника: ";
		cin >> height;
		width = square / height; // вычисляем сторону
		//width = square % height; // вычисляем остаток от целочисленного деления

		cout << "Вторая сторона прямоугольника = " << width << endl;
		//cout << "Вторая сторона прямоугольника = " << square % height << endl;
	
		//square = width * width;
		square = pow(width,2);

		cout << "Для длины стороны "<< width << " Площадь квадрата = " << square << endl;
	
	}
	// Задача 3.
	//Дана диагональ телевизора в дюймах.
	// Написать программу, определяющую эту же диагональ в сантиметрах
	//(1 дюйм = 2.54 сантиметров).
	double sizeInch = 43;
	const double inchToCM = 2.54;
	double sizeCM = sizeInch * inchToCM;
	cout << "Размер диагонали телевизора 43\" = " << sizeCM << " см \n";




}

