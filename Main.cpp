#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

#include "Binaria.h"

using namespace std;

int main(){
	int tamano = 4, numero = 2;
	int arreglo[tamano] = {0};
	srand(time(NULL));
	for (int i = 0; i < tamano; ++i ){
		arreglo[i] = rand() % numero;
	}
	cout << "Los valores del arreglo son: " << endl;
	for (int i = 0; i < tamano; ++i ) {
		cout <<"arreglo[" << i << "] = " << arreglo[i] << endl;
	}
	return 0;
}