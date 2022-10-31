#include "Listaa.h"

Lista::Lista(){
    ini = 0;
    fim = -1;
}

bool Lista::vazia(){
    if(ini > fim)
        return true;
    else
        return false;
}

int Lista::getIni(){
    return ini;
}

int Lista::getFim(){
    return fim;
}


bool Lista::Full(){
    if(fim == (MAXTAM - 1))
        return true;
    else
        return false;
}

int Lista::Tam(){
    return fim + 1;
}

void Lista::insere_fim(int valor){
    if(!Full()){
        lista[fim+1] = valor;
        fim++;
    }
    else
        cout << "Lista cheia!" << endl;
}

void Lista::imprime(){
    if(vazia())
        cout << "Lista Vazia!" << endl;
    else{
        cout << "A Lista contem os seguintes elementos: ";
        for(int i = ini; i < fim + 1; i++)
            cout << lista[i] << " ";
        cout << endl << endl;
    }
}

int Lista::Particiona(int aux_ini, int aux_fim){
    int direita, esquerda, pivo, aux;
    esquerda = aux_ini;
    direita = aux_fim;
    pivo = lista[esquerda];

    while(esquerda < direita){
        while(lista[esquerda] <= pivo)
            esquerda++;
        while(lista[direita] > pivo)
            direita--;
        if(esquerda < direita){
            aux = lista[esquerda];
            lista[esquerda] = lista[direita];
            lista[direita] = aux;
        }
    }
    lista[aux_ini] = lista[direita];
    lista[direita] = pivo;
    return direita;
}

void Lista::quickSort(int aux_ini, int aux_fim){
    int pivo;

    if(aux_fim > aux_ini){
        pivo = Particiona(aux_ini, aux_fim);
        quickSort(aux_ini, pivo - 1);
        quickSort(pivo + 1, aux_fim);
    }

}


