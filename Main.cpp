#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <vector>

#include "Binaria.h"

using namespace std;

int main(){
	int opcion;
	vector <Binaria*> lista_binarios;
	cout << "		MENU" << endl
	<< "1.- Agregar Binario" << endl
	<< "2.- Resolver Disyunción" << endl
	<< "3.- Resolver Conjunción" << endl
	<< "4.- Resolver Implicación" << endl
	<< "5.- Resolver Doble Implicación" << endl
	<< "6.- Resolver Disyunción Exclusiva" << endl
	<< "7.- Salir" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;
	cout << endl;
	while (opcion < 1 || opcion > 7) {
		cout << "Ingrese una opción valida" << endl;
		cin >> opcion;
		cout << endl;
	}
	if (opcion == 1) {
		int tamano = 4, numero = 2;
		int arreglo[tamano] = {0};
		srand(time(NULL));
		for (int i = 0; i < tamano; ++i ){
			arreglo[i] = rand() % numero;
		}
		lista_binarios.push_back(new Binaria(arreglo));
		cout << "Arreglo binario creado exitosamente" << endl;
	/*	cout << "Los valores del arreglo son: " << endl;
		for (int i = 0; i < tamano; ++i ) {
			cout <<"arreglo[" << i << "] = " << arreglo[i] << endl;
		}*/

	} 
	if (opcion == 2) {
		int pos1, pos2;
		if (lista_binarios.size() >= 2) {
			cout << "Elija dos posiciones en el vector de binarios a elegir: " << endl;
			for (int i = 0; i < lista_binarios.size(); ++i) {
				cout << i;
				for (int j = 0; j < lista_binarios.size(); ++j) {
					cout << "[" << lista_binarios.at(i) -> getbinBit() << "]";
				}
				cout << endl;
			}
			cin >> pos1;
			cin >> pos2;
			Binaria* BinBit = new Binaria();
			BinBit = *lista_binarios.at(pos1) + lista_binarios.at(pos2);
			cout << "Result: " << endl;
			int* binarrs = BinBit -> getbinBit();
			for (int i = 0; i < 4; ++i) {
				cout << "[" << binarrs[i] << "]" << endl;
			}
		}
	}
	if (opcion == 3) {
		int pos1, pos2;
		if (lista_binarios.size() >= 2) {
			cout << "Elija dos posiciones en el vector de binarios a elegir: " << endl;
			for (int i = 0; i < lista_binarios.size(); ++i) {
				cout << i;
				for (int j = 0; j < lista_binarios.size(); ++j) {
					cout << "[" << lista_binarios.at(i) -> getbinBit() << "]";
				}
				cout << endl;
			}
			cin >> pos1;
			cin >> pos2;
			Binaria* BinBit = new Binaria();
			BinBit = *lista_binarios.at(pos1) - lista_binarios.at(pos2);
			cout << "Result: " << endl;
			int* binarrs = BinBit -> getbinBit();
			for (int i = 0; i < 4; ++i) {
				cout << "[" << binarrs[i] << "]" << endl;
			}
		}
	}
	if (opcion == 4) {
		int pos1, pos2;
		if (lista_binarios.size() >= 2) {
			cout << "Elija dos posiciones en el vector de binarios a elegir: " << endl;
			for (int i = 0; i < lista_binarios.size(); ++i) {
				cout << i;
				for (int j = 0; j < lista_binarios.size(); ++j) {
					cout << "[" << lista_binarios.at(i) -> getbinBit() << "]";
				}
				cout << endl;
			}
			cin >> pos1;
			cin >> pos2;
			Binaria* BinBit = new Binaria();
			BinBit = *lista_binarios.at(pos1) * lista_binarios.at(pos2);
			cout << "Result: " << endl;
			int* binarrs = BinBit -> getbinBit();
			for (int i = 0; i < 4; ++i) {
				cout << "[" << binarrs[i] << "]" << endl;
			}
		}
	} 
	if (opcion == 5) {
		int pos1, pos2;
		if (lista_binarios.size() >= 2) {
			cout << "Elija dos posiciones en el vector de binarios a elegir: " << endl;
			for (int i = 0; i < lista_binarios.size(); ++i) {
				cout << i;
				for (int j = 0; j < lista_binarios.size(); ++j) {
					cout << "[" << lista_binarios.at(i) -> getbinBit() << "]";
				}
				cout << endl;
			}
			cin >> pos1;
			cin >> pos2;
			Binaria* BinBit = new Binaria();
			BinBit = *lista_binarios.at(pos1) / lista_binarios.at(pos2);
			cout << "Result: " << endl;
			int* binarrs = BinBit -> getbinBit();
			for (int i = 0; i < 4; ++i) {
				cout << "[" << binarrs[i] << "]" << endl;
			}
		}
	}
	if (opcion == 6) {
		int pos1, pos2;
		if (lista_binarios.size() >= 2) {
			cout << "Elija dos posiciones en el vector de binarios a elegir: " << endl;
			for (int i = 0; i < lista_binarios.size(); ++i) {
				cout << i;
				for (int j = 0; j < lista_binarios.size(); ++j) {
					cout << "[" << lista_binarios.at(i) -> getbinBit() << "]";
				}
				cout << endl;
			}
			cin >> pos1;
			cin >> pos2;
			Binaria* BinBit = new Binaria();
			BinBit = *lista_binarios.at(pos1) ^ lista_binarios.at(pos2);
			cout << "Result: " << endl;
			int* binarrs = BinBit -> getbinBit();
			for (int i = 0; i < 4; ++i) {
				cout << "[" << binarrs[i] << "]" << endl;
			}
		}
	}
	return 0;
}