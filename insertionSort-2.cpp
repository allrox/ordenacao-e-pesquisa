#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main (){

	setlocale(LC_ALL,"Portuguese");
    system("cls");
    int i, j;
    double notas[5] = {15,7,36,28,130};
    double temp;
	
	//Loop que controla o avan�o de acordo com 
	//o n�mero de elementos do vetor
    for (i=0 ; i<4 ; i++){

		//Loop que controla a compara��o entre os �ndices do vetor
        for (j = i+1; j>0 ; j--){
        	
			//Aqui � realizado o swap entre o conte�do dos �ndices "j' 
			//utilizando a vari�vel tempor�ria
            if(notas[j] < notas[j-1]){
                temp = notas[j];
                notas[j] = notas[j-1];
                notas[j-1] = temp;
            } else {
            	break;
			}

        }
    }

	//Loop que imprime o vetor ordenado pelo m�todo Insertion Sort
    for (int i=0; i<5 ; i++){

        if ( i<4 ){
            cout<<notas[i]<<", ";
        } else {
            cout<<notas[i]<<endl;
        }

    }

    system("pause");
    return 0;
}
