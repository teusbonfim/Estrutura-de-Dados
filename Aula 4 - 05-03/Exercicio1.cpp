#include <stdio.h>
#include <time.h>
#define TAM 3
#include <cstdlib>
#include <ctime>
#include <string.h>

// using namespace std;
int main(void) {
	int i, j, aux, z=0; 
	int mat [TAM][TAM];
	int vet [TAM * TAM];
	srand(time(0)); // define a semente de srand time
	// Preenche a matriz com números aleatórios e imprime ao mesmo tempo
	for (i=0; i < TAM; i++) { //condição a continuação do laço enqaunto i for menor que TAM
		for(j=0; j < TAM; j++) { //condição a continuação do laço enqaunto j for menor que TAM
		mat[i][j] = rand()%9; // tudo que for gerado aleatoriamente será colocado dentro de "mat[i][j]"
		printf("\t [%d]", mat [i][j]); // irá imprimir os valores em colunas
		}
		printf ("\n"); // jogar o proximo conteúdo para baixo
	}
	
	// Passa a matriz para um vetor
		for(i = 0; i < TAM; i++) {
				for(j = 0; j < TAM; j++) {
					vet[z] = mat[i][j];
					z++;
				}
		} 
	
	for(i = 0; i < TAM*TAM; i++) { //condição a continuação do laço enqaunto i for menor que TAM	
			for (j = 0; j < TAM*TAM; j++) { // se vet i for maior que vet J será colocado em AUX
				if(vet[j] > vet[i]){
				aux = vet[i]; // Valor de "vet i" por ser maior
                vet[i] = vet[j];// vet i se torna vet J por ser menor
                vet[j] = aux; // vet j se torna vet i que estava em I
            }
			}
		}
	// Imprime o vetor
		printf("\n\n");
		for(z = 0; z < TAM * TAM; z++) {
			printf ("\n %d ", vet[z]);
			printf ("\n");
		}
}

