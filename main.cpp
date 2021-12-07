#include <iostream>
#include <stdlib.h>
#define TAM 5
using namespace std;


void insere(int v[]){
    //laço "for" para inserir valores no vetor
    for(int c = 0; c < TAM; c++){
        cout << "Insira o valor na posicao " << c << ": ";
        cin  >> v[c];
    }

}
//função busca binária com chamada recursiva
int buscaBinaria(int v[] ,int d, int ini, int fim){
    int meio = (ini + fim) / 2;

    if (ini > fim){
        return -1;
    }
    if(v[meio] == d){
        return meio;
    }
    else if(v[meio] > d){
        buscaBinaria(v, d, ini, meio - 1);
    }
    else if(v[meio] < d){
        buscaBinaria(v,d,meio + 1, fim);
    }


}

int main(){
    int vet[TAM];
    insere(vet);
    int b = buscaBinaria(vet,8,0,TAM-1);

    cout << "Resultado da Busca Binaria: " << b << endl;
    return 0;
}
