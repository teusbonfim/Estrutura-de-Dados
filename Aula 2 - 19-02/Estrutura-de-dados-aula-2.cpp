#include <stdio.h>
# define alunos 5
int main(){
float vet [alunos], media = 0, proc;
int i, achou = 0;
	
	for(i=0; i<alunos; i++){
		printf("\n insira uma nota; ", i+1);
		scanf("%i", &vet[i]);
		media = (media+ vet[i]);
	}
	
	printf("n\ Informe a nota para verificar: ");
	scanf("%f", &proc);
	
	for (i=0; i<alunos; i++){
		if(vet[i]==proc){
			achou=1;
		}
	}
	
	
	if(achou==1){
		printf("\n Esta presente.");
	}else{
		printf("\n Nao esta presente.");
	}
}
