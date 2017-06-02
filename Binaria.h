#include <vector>

#ifndef BINARIA_H
#define BINARIA_H

using namespace std;

class Binaria {
	private:
		int* binBit;
	public:
		Binaria(int*);
		Binaria* operator+ (Binaria*);
		Binaria* operator- (Binaria*);
		Binaria* operator* (Binaria*);
		Binaria* operator/ (Binaria*);
		Binaria* operator^ (Binaria*);
		~Binaria();
};
#endif