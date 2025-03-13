// biblioteca padr�o de entrada e saida
#include <stdio.h>
// Definindo a struct

struct Pessoa {
	char nome[50];
	int idade;
	float altura;
};

// Fun��o principal / Inicio do bloco
int main() {
	// Declarando uma variavel do tipo struct "Pessoa" pr�viamente preenchida
	struct Pessoa p;
	// Recdbendo os dados do usu�rio
	printf("\n Digite o seu nome: ");
	fgets(p.nome, sizeof(p.nome), stdin); // L� nome com a fun��o Fgets
	printf("\n Digite a sua idade: ");
	scanf("%d", &p.idade); // L� a idade
	printf("\n Digite a sua altura: ");
	printf("%f", &p.altura); // l� altura
	// Imprimindo os dados na tela
	printf("\n Nome: %s", p.nome);
	printf("\n Idade: %d", p.idade);
	printf("\n Altura: %.2f", p.altura);

	return 0;
}
