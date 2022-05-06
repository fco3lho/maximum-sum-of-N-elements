#include "maxsum.hpp"

void FLVazia(Lista *l){
	l->first = 0;
	l->last  = 0;
}

void LInsert(Lista *l, Item d){
	if (l->last >= MAXTAM){
		cout << "Lista cheia!" << endl;
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}

void readFile(Lista *l, Item d){
	string line;
	ifstream my_file;

	my_file.open("numbers.txt");

	if(my_file.is_open()){
		while(! my_file.eof()){
			getline(my_file, line);
			d.number = stoi(line);
			LInsert(l, d);
		}
		my_file.close();
		cout << "\n";
	}

	else{
		cout << "Arquivo não abriu.\n";
	} 
}

void calculateMaxSum(Lista *l, Item sum){
	sum.number = 0;

	for(int i = l->first; i < l->last; i++){
		if(l->vet[i].number > 0){
			sum.number += l->vet[i].number;
		}
	}

	cout << endl << "A máxima soma dos números do arquivo é: " << sum.number << endl << endl;
}

void LImprime(Lista *l){
	cout << "____________________________________" << endl;
	cout << "\tIMPRESSÃO DA LISTA\n\n";
	for(int i = l->first; i < l->last; i++)
		cout << l->vet[i].number << endl;
	cout << "____________________________________" << endl;
}