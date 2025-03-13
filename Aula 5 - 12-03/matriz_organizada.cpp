#include <stdio.h>
#include <time.h>
#define TAM 3  // Definindo o tamanho da matriz como 3x3
#include <cstdlib>
#include <ctime>
#include <string.h>

int main(void) {
    int i, j, aux, z = 0;  // Vari�veis para la�os de repeti��o e troca de valores
    int mat[TAM][TAM];  // Declara uma matriz 3x3
    int vet[TAM * TAM];  // Declara um vetor de 9 elementos (para armazenar os n�meros da matriz)
    srand(time(0)); // Define a semente para gera��o de n�meros aleat�rios

    // Preenche a matriz com n�meros aleat�rios e imprime ao mesmo tempo
    for (i = 0; i < TAM; i++) {  // La�o que percorre as linhas da matriz
        for (j = 0; j < TAM; j++) {  // La�o que percorre as colunas da matriz
            mat[i][j] = rand() % 9;  // Gera um n�mero aleat�rio entre 0 e 8 e coloca na posi��o mat[i][j]
            printf("\t [%d]", mat[i][j]);  // Imprime o n�mero na tela
        }
        printf("\n");  // Pula para a pr�xima linha para imprimir a pr�xima linha da matriz
    }

    // Passa os n�meros da matriz para o vetor
    for (i = 0; i < TAM; i++) {  // La�o para percorrer as linhas da matriz
        for (j = 0; j < TAM; j++) {  // La�o para percorrer as colunas da matriz
            vet[z] = mat[i][j];  // Coloca o n�mero de mat[i][j] no vetor na posi��o z
            z++;  // Incrementa o �ndice z para a pr�xima posi��o do vetor
        }
    }

    // Ordena��o do vetor em ordem decrescente
    for (i = 0; i < TAM * TAM; i++) {  // La�o para percorrer todas as posi��es do vetor
        for (j = 0; j < TAM * TAM; j++) {  // La�o para comparar cada n�mero com os outros
            if (vet[j] > vet[i]) {  // Se o n�mero em vet[j] for maior que vet[i], eles trocam de lugar
                aux = vet[i];  // Guarda o valor de vet[i] na vari�vel auxiliar
                vet[i] = vet[j];  // Coloca o valor de vet[j] na posi��o de vet[i]
                vet[j] = aux;  // Coloca o valor guardado em aux na posi��o de vet[j]
            }
        }
    }

    // Imprime o vetor ordenado
    printf("\n\nVetor ordenado:\n");  // Exibe a mensagem de "Vetor ordenado"
    for (z = 0; z < TAM * TAM; z++) {  // La�o para percorrer o vetor e imprimir seus valores
        printf("%d ", vet[z]);  // Imprime o valor de vet[z] no vetor
    }
    printf("\n\n");  // Pula uma linha ap�s imprimir todos os valores do vetor

    // Transforma o vetor ordenado de volta em uma matriz
    z = 0;  // Reseta o �ndice z para come�ar a preencher a matriz novamente
    for (i = 0; i < TAM; i++) {  // La�o para percorrer as linhas da matriz
        for (j = 0; j < TAM; j++) {  // La�o para percorrer as colunas da matriz
            mat[i][j] = vet[z];  // Coloca o valor de vet[z] na posi��o mat[i][j]
            z++;  // Incrementa o �ndice z para a pr�xima posi��o do vetor
        }
    }

    // Imprime a nova matriz ordenada
    printf("Matriz ordenada:\n");  // Exibe a mensagem de "Matriz ordenada"
    for (i = 0; i < TAM; i++) {  // La�o para percorrer as linhas da matriz
        for (j = 0; j < TAM; j++) {  // La�o para percorrer as colunas da matriz
            printf("\t [%d]", mat[i][j]);  // Imprime o valor de mat[i][j] na tela
        }
        printf("\n");  // Pula para a pr�xima linha ap�s imprimir todos os valores de uma linha da matriz
    }
}

