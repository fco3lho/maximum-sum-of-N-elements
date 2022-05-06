#ifndef MAXSUM_HPP
#define MAXSUM_HPP
#include <iostream>
#include <string>
#include <fstream>
#define MAXTAM 20

using namespace std;

typedef struct Item{
    int number;
}Item;

typedef struct Lista{
    Item vet[MAXTAM];
    int first;
    int last;
}Lista;

void FLVazia(Lista *l);
void LInsert(Lista *l, Item d);
void readFile(Lista *l, Item d);
void calculateMaxSum(Lista *l, Item sum);
void LImprime(Lista *l);

#endif