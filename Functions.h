#pragma once //Это деректива препроцессора, исключает импорт данного файла
#include <iostream>
//Создаем прототипы функции

//Returns a + b
int sum(int a, int b); //Подчеркивается, потому что она без описания. Создаем исходный файл с описанием всех функций в source files

void fillArr(int arr[], int length, int a, int b);

template <typename T> void showArr(T arr[], int length) {//Шаблонные функции создаются в заголовочнике
	std::cout << "["; //Пространство имен не подключаем, так принято.
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}


