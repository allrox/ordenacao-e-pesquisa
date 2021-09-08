#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//Definição do vetor para os valores a serem ordenados
	double vetor[2], aux;
	int x;
	
	//Loop para entrada dos valores
	for(x=0;x<2;x++){
		cout<<"Digite o "<<x+1<<"º valor: ";	
		cin>>vetor[x];
	}
	
	cout<<"\nAntes de comparar e ordenar";
	cout<<"\n"<<vetor[0]<<"\t"<<vetor[1];
	
	//Comparação e reorganização dos valores
	if(vetor[0]>vetor[1]){
		aux=vetor[0];
		vetor[0]=vetor[1];
		vetor[1]=aux;
	}
	
	cout<<"\n\nApós de comparar e ordenar";
	cout<<"\n"<<vetor[0]<<"\t"<<vetor[1];
	cout<<"\n\n";
	system("pause");
}
