//Не будет содержать метода main
//Описание функции которые находятся в function.h

#include "Functions.h" //Подключаем заголовок
#include <stdlib.h>
#include <time.h>


int sum(int a, int b) {
	return a + b;
}

void fillArr(int arr[], int length, int a, int b){
	srand(time(NULL)); //данная функция вызывается внутри функции, иначе она работать не будет.
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % (b - a) + a;
	}
}
