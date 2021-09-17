#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main (){

	setlocale(LC_ALL,"Portuguese");
    system("cls");
    
    int i, j, ELEM;
    int notas[ELEM];
    int temp;
    
    cout<<"Quantos elementos deseja ordenar? ";
    cin>>ELEM;
      
    //Preenchendo o vetor com os elementos informados pelo usu�rio
    for (int i=0 ; i<ELEM ; i++){
    	cout<<"Informe o "<<i+1<<"� elemento: ";
    	cin>>notas[i];
	}
	
	//Loop que controla o avan�o de acordo com 
	//o n�mero de elementos do vetor
    for (int i=0 ; i<ELEM ; i++){

		//Loop que controla a compara��o entre os �ndices do vetor
        for (int j = i+1; j>0 ; j--){
        	
			//Aqui � realizado o swap entre o conte�do dos �ndices "j"
			//utilizando a vari�vel tempor�ria
            if(notas[j] < notas[j-1]){
                temp = notas[j];
                notas[j] = notas[j-1];
                notas[j-1] = temp;
            } 

        }
    }

	//Loop que imprime o vetor ordenado pelo m�todo Insertion Sort
	cout<<"\n{ ";
    for (int i=0; i<ELEM ; i++){
    	if(i<(ELEM-1)){
			cout<<notas[i]<<", ";
		} else {
			cout<<notas[i]<<" }"<<endl;
		}
    }

    system("pause");
    return 0;
}
