#include "Binaria.h"

using namespace std;

Binaria :: Binaria(int* binBit) {
	this -> binBit = new int[4];
}

Binaria* Binaria :: operator+ (Binaria* temporal) {

}

Binaria* Binaria :: operator- (Binaria* temporal) {

}

Binaria* Binaria :: operator* (Binaria* temporal) {

}

Binaria* Binaria :: operator/ (Binaria* temporal) {

}

Binaria* Binaria :: operator^ (Binaria* temporal) {
	
}

Binaria :: ~Binaria() {
	if (binBit) {
		delete[] binBit;
	}
}