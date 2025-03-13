#include <stdio.h>
#include <string.h>
#define MAX_REGISTROS 3000
#define TAM_STR 100

//defindo a struct Pessoa
typedef struct {
	char nome[50];
	int idade;
	float altura;
} Registro;

struct Pessoa {
	char nome[50];
	int idade;
	float altura;
};



int main() {
	// Criando um variavel do tipo Pessoa
	struct Pessoa p;

	
	printf("Digite o nome: ");
	fgets(p.nome, sizeof(p.nome), stdin);
	// Remove a nova, se presente
	p.nome[strcspn(p.nome, "\n")] = 0;
	
	printf("Digite o idade: ");
	scanf("%d",&p.idade);
	
	printf("Digite a altura: ");
	scanf("%f",&p.altura);
	
	
	printf("Nome: %s\n", p.nome);
	printf("Idade: %d\n", p.idade);
	printf("Altura: %.2f\n", p.altura);

	return 0;
}
