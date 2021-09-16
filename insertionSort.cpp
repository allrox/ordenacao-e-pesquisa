//Exemplo Estácio (Não-funcional)

#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void insertionSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);

int main (){
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    int vetor[5] = {13,23,3,8,1};
    int i;

    cout<<"\nElementos não ordenados: \t{ ";
    for (i=0 ; i<5 ; i++){
        cout<<vetor[i]<<" ";
    }
    cout<<"}";

    insertionSort(vetor,5);

    cout<<"\nElementos ordenados: \t\t {";
    imprimirVetor(vetor,5);

    // system("pause");
    return 0;
}

void insertionSort(int vet[], int tam){

    int valueInsert, posInsert, i;

    for (i = 1 ; i < tam ; i++){
        valueInsert = vet[i];
        posInsert = i;
    }

    while (posInsert > 0 && vet[posInsert - 1] > valueInsert){
        vet[posInsert] = vet[posInsert - 1];
        posInsert--;
    }

}

void imprimirVetor(int vet[], int tam){
    int i;
    cout<<vet[0];
    for (i=1 ; i<5 ; i++){
        cout<<", "<<vet[i];
    }
    cout<<" }"<<endl;
}
