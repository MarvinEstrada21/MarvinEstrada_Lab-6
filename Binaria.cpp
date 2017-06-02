#include "Binaria.h"

using namespace std;

Binaria :: Binaria() {

}

Binaria :: Binaria(int* binBit) {
	this -> binBit = new int[4];
}

int* Binaria :: getbinBit() {
	return binBit;
}

void Binaria :: setbinBit(int* sbinBit) {
	binBit = sbinBit;
}

Binaria* Binaria :: operator+ (Binaria* temporal) {
	int disyun;
	Binaria* temporalret = new Binaria();
	int* arrs = new int[4];
	int* numerosarr = temporal -> getbinBit();
	for (int i = 0; i < 4; ++i) {
		disyun = binBit[i] + numerosarr[i];
		if (disyun == 0 || disyun == 1) {
			arrs[i] = 0;
		} else {
			arrs[i] = 1;
		}
	}
	temporalret -> setbinBit(arrs);
	return temporalret;
}

Binaria* Binaria :: operator- (Binaria* temporal) {
	int conjun;
	Binaria* temporalret = new Binaria();
	int* arrs = new int[4];
	int* numerosarr = temporal -> getbinBit();
	for (int i = 0; i < 4; ++i) {
		conjun = binBit[i] + numerosarr[i];
		if (conjun == 0) {
			arrs[i] = 0;
		} else {
			arrs[i] = 1;
		}
	}
	temporalret -> setbinBit(arrs);
	return temporalret;
}

Binaria* Binaria :: operator* (Binaria* temporal) {
	Binaria* temporalret = new Binaria();
	int* arrs = new int[4];
	int* numerosarr = temporal -> getbinBit();
	for (int i = 0; i < 4; ++i) {
		if (binBit[i] == 0 && numerosarr[i] == 1) {
			arrs[i] = 1;
		} else {
			arrs[i] = 0;
		}
	}
	temporalret -> setbinBit(arrs);
	return temporalret;
}

Binaria* Binaria :: operator/ (Binaria* temporal) {
	Binaria* temporalret = new Binaria();
	int* arrs;
	int* numerosarr = temporal -> getbinBit();
	for (int i = 0; i < 4; ++i) {
		if (binBit[i] == numerosarr[i]) {
			arrs[i] = 0;
		} else {
			arrs[i] = 1;
		}
	}
	temporalret -> setbinBit(arrs);
	return temporalret;
}

Binaria* Binaria :: operator^ (Binaria* temporal) {
	Binaria* temporalret = new Binaria();
	int* arrs;
	int* numerosarr = temporal -> getbinBit();
	for (int i = 0; i < 4; ++i) {
		if (binBit[i] == numerosarr[i]) {
			arrs[i] = 1;
		} else {
			arrs[i] = 0;
		}
	}
}

Binaria :: ~Binaria() {
	if (binBit) {
		delete[] binBit;
	}
}