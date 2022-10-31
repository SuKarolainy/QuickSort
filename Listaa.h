#ifndef LISTAA_H_INCLUDED
#define LISTAA_H_INCLUDED

#include <iostream>

#define MAXTAM 1000

using namespace std;

class Lista
{

    int ini, fim;
    int lista[MAXTAM];

public:
    Lista();

    int getIni();
    int getFim();
    bool vazia();
    bool Full();
    int Tam();
    void insere_fim(int valor);
    void imprime();
    void quickSort(int aux_ini, int aux_fim);
    int Particiona(int aux_ini, int aux_fim);

};


#endif // LISTAA_H_INCLUDED
