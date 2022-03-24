#pragma once


int x, y;
const double _PI = 3.14; //Она взята из внешнего файла, так принято.

int mx[5][5];

void fillMX() { //Создание массива
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			mx[i][j] = i + j;
}

