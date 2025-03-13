// biblioteca padrão de entrada e saida
#include <stdio.h>
// Definindo a struct

struct Pessoa {
	char nome[50];
	int idade;
	float altura;
};

// Função principal / Inicio do bloco
int main() {
	// Declarando uma variavel do tipo struct "Pessoa" préviamente preenchida
	struct Pessoa p;
	// Recdbendo os dados do usuário
	printf("\n Digite o seu nome: ");
	fgets(p.nome, sizeof(p.nome), stdin); // Lê nome com a função Fgets
	printf("\n Digite a sua idade: ");
	scanf("%d", &p.idade); // Lê a idade
	printf("\n Digite a sua altura: ");
	printf("%f", &p.altura); // lê altura
	// Imprimindo os dados na tela
	printf("\n Nome: %s", p.nome);
	printf("\n Idade: %d", p.idade);
	printf("\n Altura: %.2f", p.altura);

	return 0;
}
