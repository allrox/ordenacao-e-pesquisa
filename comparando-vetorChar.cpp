#include <iostream>
#include <cstring>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char vetor[][15]={"Jo�o Renato", "Anita Maciel"}, aux[15];
	cout<<"\nAntes da compara��o";
	cout<<"\n"<<vetor[0]<<"\t"<<vetor[1];
	
	if(strcmp(vetor[0],vetor[1])>0){
		strcpy(aux,vetor[0]);
		strcpy(vetor[0],vetor[1]);
		strcpy(vetor[1],aux);
	}
	
	cout<<"\n\nAp�s a compara��o";
	cout<<"\n"<<vetor[0]<<"\t"<<vetor[1];
	cout<<"\n\n";
	system("pause");
	
}
