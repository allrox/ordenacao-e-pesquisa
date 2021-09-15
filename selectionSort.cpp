#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

//Aqui s�o chamados os prot�tipos de fun��o,
//Declarados ap�s a fun��o Main
void selectionSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o das vari�veis do vetor 
	//e do contador para as itera��es
	int i, vetor[5];
		
	//Loop para inser��o dos valores do vetor
	for(i=0;i<5;i++){
		cout<<"Informe o "<<i+1<<"� termo: ";
		cin>>vetor[i];
	}
	
	
	//Chamada para a exibi��o do vetor in-natura
	cout<<"\nSeu vetor n�o ordenado com os dados inseridos: ";
	cout<<"{ ";
	imprimirVetor(vetor,5);
	cout<<" }";
	cout<<"\n\n";
	
	//Chamada da fun��o que reordena e exibe os elementos
	selectionSort(vetor,5);
	
	//Chama a fun��o que exibe o vetor com os elementos reordenados
	cout<<"\nSeu vetor ordenado utilizando o m�todo Selection Sort: ";
	cout<<"{ ";
	imprimirVetor(vetor, 5);
	cout<<" }";
	cout<<"\n\n";
	
	system("pause");
	return 0;
	
}

void selectionSort(int vet[], int tam){
	
	int indexMin, i, j;
	
	//A partir de um contador "i" zerado, 
	//enquanto menor que a vari�vel "tam", incremente 1
	for(i=0;i<tam-1;i++){
		
		//Declara��o da vari�vel que receber�
		//o menor valor atual admiss�vel para o �ndice
		indexMin=i;
		
		//A partir da var�avel "j" maior que zero, 
		//enquanto "j" menor que "tam", incremente 1
		for(j=i+1;j<tam;j++){
			
			//Se o elemento "j" do vetor for menor que o elemento "indexMin",
			//indexMin recebe o valor de "j"
			if(vet[j]<vet[indexMin]){
				indexMin=j;
			}
		}
		
		//Exibe o elemento "i" do vetor seguido do elemento atribu�do a "indexMin
		cout<<"Troca: "<<vet[i]<<" <= "<<vet[indexMin]<<endl;
		
		//Troca de posi��o dos elementos no vetor a partir da compara��o
		//Aprofundar...
		if(indexMin != i) {
			int temp = vet[indexMin];
			vet[indexMin]=vet[i];
			vet[i]=temp;
		}
	}
}

//Fun��o que imprime o vetor
void imprimirVetor (int vet[],int tam){
	int i;
	
	//Sa�da do primeiro elemento
	cout<<vet[0];
	
	//Loop para exibi��o dos demais elementos do vetor
	for(i=1;i<5;i++){
		cout<<", "<<vet[i];
	}
	
}
