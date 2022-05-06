#include "maxsum.hpp"

int main(){

	Lista l;
	Item number;
	Item maxSum;
	ifstream my_file;

	FLVazia(&l);
	cout << "\nLista criada.\n";

	readFile(&l, number);
	LImprime(&l);
	calculateMaxSum(&l, maxSum);

	return 0;
}