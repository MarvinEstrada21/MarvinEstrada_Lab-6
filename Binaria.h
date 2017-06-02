#include <vector>

#ifndef BINARIA_H
#define BINARIA_H

using namespace std;

class Binaria {
	private:
		int* binBit;
	public:
		Binaria();
		Binaria(int*);
		int* getbinBit();
		void setbinBit(int*);
		Binaria* operator+ (Binaria*);
		Binaria* operator- (Binaria*);
		Binaria* operator* (Binaria*);
		Binaria* operator/ (Binaria*);
		Binaria* operator^ (Binaria*);
		~Binaria();
};
#endif