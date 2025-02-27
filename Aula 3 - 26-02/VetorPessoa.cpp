#include <stdio.h>
#define TAM 5

struct Pessoa
{
    int Idade;
    char Nome[50];
};

int main()
{
    struct pessoa p;
    strcpy(p.nome "Mateus");
    p.idade = 20;

    printf("\n Nome: %s", p.nome);
    printf("\n Idade: %d", p.idade);
}
