#include <stdio.h>
#define TAM 5

int main(void)
{
    int i, j, busca;
    int vet[] = {18, 25, 12, 55, 33};
    printf("\n Informe um valor de acordo com o vetor: ");
    scanf(% d, &vet[i]);
}

for (i = 0; i < TAM; i++)
{
    for (j = 0; j < TAM; j++)
    {
        if (vet[i] < vet[j])
        {
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
    }
}

printf("---Vetor Organizado---\n");
For (i = 0; i < TAM; i++){
    printf("\n %d",vet[i]);
}


