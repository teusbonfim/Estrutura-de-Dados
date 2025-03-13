#include <stdio.h>
#define TAM 5

int main(void) {
    int i, j, aux, busca;
    int vet[TAM] = {18, 25, 12, 55, 33};

    printf("\nInforme um valor de acordo com o vetor: ");
    scanf("%d", &busca);

    // Algoritmo de ordenação 
    for (i = 0; i < TAM - 1; i++) {
        for (j = i + 1; j < TAM; j++) {
            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    printf("\n--- Vetor Organizado ---\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n");

    return 0;
}

