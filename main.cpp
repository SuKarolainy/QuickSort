#include "Listaa.h"
#include "Lista.cpp"
#include<ctime>

int main()
{
    Lista L;
    int qtd;

    cout << "Digite a quantidade de elementos a ser inserido: ";
    cin >> qtd;

    cout << "Digite os elementos: ";
    int var;
    for(int i = 0; i < qtd; i++){
        cin >> var;
        L.insere_fim(var);
    }
    cout << "**********************" <<  endl << endl;
    L.imprime();
    cout <<  endl << "**********************"  << endl;

    L.quickSort(L.getIni(), L.getFim());

    cout << "**********************" <<  endl << endl;
    L.imprime();
    cout <<  endl << "**********************"  << endl;


    return 0;
}
