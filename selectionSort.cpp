#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

//Aqui são chamados os protótipos de função,
//Declarados após a função Main
void selectionSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	//Declaração das variáveis do vetor 
	//e do contador para as iterações
	int i, vetor[5];
		
	//Loop para inserção dos valores do vetor
	for(i=0;i<5;i++){
		cout<<"Informe o "<<i+1<<"º termo: ";
		cin>>vetor[i];
	}
	
	
	//Chamada para a exibição do vetor in-natura
	cout<<"\nSeu vetor não ordenado com os dados inseridos: ";
	cout<<"{ ";
	imprimirVetor(vetor,5);
	cout<<" }";
	cout<<"\n\n";
	
	//Chamada da função que reordena e exibe os elementos
	selectionSort(vetor,5);
	
	//Chama a função que exibe o vetor com os elementos reordenados
	cout<<"\nSeu vetor ordenado utilizando o método Selection Sort: ";
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
	//enquanto menor que a variável "tam", incremente 1
	for(i=0;i<tam-1;i++){
		
		//Declaração da variável que receberá
		//o menor valor atual admissível para o índice
		indexMin=i;
		
		//A partir da varíavel "j" maior que zero, 
		//enquanto "j" menor que "tam", incremente 1
		for(j=i+1;j<tam;j++){
			
			//Se o elemento "j" do vetor for menor que o elemento "indexMin",
			//indexMin recebe o valor de "j"
			if(vet[j]<vet[indexMin]){
				indexMin=j;
			}
		}
		
		//Exibe o elemento "i" do vetor seguido do elemento atribuído a "indexMin
		cout<<"Troca: "<<vet[i]<<" <= "<<vet[indexMin]<<endl;
		
		//Troca de posição dos elementos no vetor a partir da comparação
		//Aprofundar...
		if(indexMin != i) {
			int temp = vet[indexMin];
			vet[indexMin]=vet[i];
			vet[i]=temp;
		}
	}
}

//Função que imprime o vetor
void imprimirVetor (int vet[],int tam){
	int i;
	
	//Saída do primeiro elemento
	cout<<vet[0];
	
	//Loop para exibição dos demais elementos do vetor
	for(i=1;i<5;i++){
		cout<<", "<<vet[i];
	}
	
}
