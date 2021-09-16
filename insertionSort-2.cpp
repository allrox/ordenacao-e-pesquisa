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
	
	//Loop que controla o avanço de acordo com 
	//o número de elementos do vetor
    for (i=0 ; i<4 ; i++){

		//Loop que controla a comparação entre os índices do vetor
        for (j = i+1; j>0 ; j--){
        	
			//Aqui é realizado o swap entre o conteúdo dos índices "j' 
			//utilizando a variável temporária
            if(notas[j] < notas[j-1]){
                temp = notas[j];
                notas[j] = notas[j-1];
                notas[j-1] = temp;
            } else {
            	break;
			}

        }
    }

	//Loop que imprime o vetor ordenado pelo método Insertion Sort
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
