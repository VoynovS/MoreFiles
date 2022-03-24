//Персональный шаблон проекта С++
#include <iostream> // Главная библиотека
#include "Functions.h" //Подключаем заголовочный файл
#include "Structures.h"
#include "Data.h"
using namespace std; //Подключение пространства имен

int main() {
	setlocale(LC_ALL, "Russian");

	int n, m;
	/*cout << "Enter 2 number: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;

	int arr[10];
	fillArr(arr, 10, 2, 16);
	
	cout << "Elementary array:\n";
	showArr(arr, 10);

	person Tom = { "Tom Smith", {1,3,1970}, "director", 120000 };
	showObj(Tom); */

	x = 10; //Инициализация х находится в Data.h
	cout << x << endl;

	fillMX();

	for (int i = 0; i < 5; i++) { // Output array
		for (int j = 0; j < 5; j++)
			cout << mx[i][j] << "\t";
		cout << endl;
	}


	return 0;
}