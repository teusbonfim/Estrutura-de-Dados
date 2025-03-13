#include <stdio.h>
#include <time.h>
#define TAM 3  // Definindo o tamanho da matriz como 3x3
#include <cstdlib>
#include <ctime>
#include <string.h>

int main(void) {
    int i, j, aux, z = 0;  // Variáveis para laços de repetição e troca de valores
    int mat[TAM][TAM];  // Declara uma matriz 3x3
    int vet[TAM * TAM];  // Declara um vetor de 9 elementos (para armazenar os números da matriz)
    srand(time(0)); // Define a semente para geração de números aleatórios

    // Preenche a matriz com números aleatórios e imprime ao mesmo tempo
    for (i = 0; i < TAM; i++) {  // Laço que percorre as linhas da matriz
        for (j = 0; j < TAM; j++) {  // Laço que percorre as colunas da matriz
            mat[i][j] = rand() % 9;  // Gera um número aleatório entre 0 e 8 e coloca na posição mat[i][j]
            printf("\t [%d]", mat[i][j]);  // Imprime o número na tela
        }
        printf("\n");  // Pula para a próxima linha para imprimir a próxima linha da matriz
    }

    // Passa os números da matriz para o vetor
    for (i = 0; i < TAM; i++) {  // Laço para percorrer as linhas da matriz
        for (j = 0; j < TAM; j++) {  // Laço para percorrer as colunas da matriz
            vet[z] = mat[i][j];  // Coloca o número de mat[i][j] no vetor na posição z
            z++;  // Incrementa o índice z para a próxima posição do vetor
        }
    }

    // Ordenação do vetor em ordem decrescente
    for (i = 0; i < TAM * TAM; i++) {  // Laço para percorrer todas as posições do vetor
        for (j = 0; j < TAM * TAM; j++) {  // Laço para comparar cada número com os outros
            if (vet[j] > vet[i]) {  // Se o número em vet[j] for maior que vet[i], eles trocam de lugar
                aux = vet[i];  // Guarda o valor de vet[i] na variável auxiliar
                vet[i] = vet[j];  // Coloca o valor de vet[j] na posição de vet[i]
                vet[j] = aux;  // Coloca o valor guardado em aux na posição de vet[j]
            }
        }
    }

    // Imprime o vetor ordenado
    printf("\n\nVetor ordenado:\n");  // Exibe a mensagem de "Vetor ordenado"
    for (z = 0; z < TAM * TAM; z++) {  // Laço para percorrer o vetor e imprimir seus valores
        printf("%d ", vet[z]);  // Imprime o valor de vet[z] no vetor
    }
    printf("\n\n");  // Pula uma linha após imprimir todos os valores do vetor

    // Transforma o vetor ordenado de volta em uma matriz
    z = 0;  // Reseta o índice z para começar a preencher a matriz novamente
    for (i = 0; i < TAM; i++) {  // Laço para percorrer as linhas da matriz
        for (j = 0; j < TAM; j++) {  // Laço para percorrer as colunas da matriz
            mat[i][j] = vet[z];  // Coloca o valor de vet[z] na posição mat[i][j]
            z++;  // Incrementa o índice z para a próxima posição do vetor
        }
    }

    // Imprime a nova matriz ordenada
    printf("Matriz ordenada:\n");  // Exibe a mensagem de "Matriz ordenada"
    for (i = 0; i < TAM; i++) {  // Laço para percorrer as linhas da matriz
        for (j = 0; j < TAM; j++) {  // Laço para percorrer as colunas da matriz
            printf("\t [%d]", mat[i][j]);  // Imprime o valor de mat[i][j] na tela
        }
        printf("\n");  // Pula para a próxima linha após imprimir todos os valores de uma linha da matriz
    }
}

