#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo o número máximo de registros que o programa pode armazenar
#define MAX_REGISTROS 3000
#define TAM_STR 100

// Struct para armazenar os dados de cada linha do CSV
typedef struct {
    char linha[TAM_STR];
    int t_viag;
    int t_giros;
    int pagantes;
    int gratuidade;
    char data[TAM_STR];
    char mes[TAM_STR];
    int transportados;
} Registro;

void lerArquivo();
Registro registros[MAX_REGISTROS];
int i;

int main() {

	char linhaPesquisa[TAM_STR];

	lerArquivo();

    // Pesquisa
    printf("\nInforme o nome da LINHA a ser pesquisada: ");
    fgets(linhaPesquisa, TAM_STR, stdin);
    linhaPesquisa[strcspn(linhaPesquisa, "\n")] = 0; // Remove o \n do final

    printf("\nRegistros encontrados para a linha: %s\n", linhaPesquisa);
    printf("---------------------------------------------------------------\n");

    bool encontrados = false;
    for (int j = 0; j < i; j++) {
			if (strcmp(linhaPesquisa,))
            printf("LINHA: %s\n", registros[j].linha);
            printf("T_VIAG: %d\n", registros[j].t_viag);
            printf("T_GIROS: %d\n", registros[j].t_giros);
            printf("PAGANTES: %d\n", registros[j].pagantes);
            printf("GRATUIDADE: %d\n", registros[j].gratuidade);
            printf("DATA: %s\n", registros[j].data);
            printf("MES: %s\n", registros[j].mes);
            printf("TRANSPORTADOS: %d\n", registros[j].transportados);
            printf("---------------------------------------------------------------\n");
        
    }

    if (encontrados == false) {
        printf("Nenhum registro encontrado para a linha informada.\n");
    }

    return 0;
}


// Função para ler o arquivo de texto.
void lerArquivo(){
	char nomeArquivo[TAM_STR];

    FILE *arquivo;
    
    printf("Informe o nome do arquivo CSV (ex: dados.csv): ");
    fgets(nomeArquivo, TAM_STR, stdin);
    nomeArquivo[strcspn(nomeArquivo, "\n")] = 0; // Remove o \n do final
    
    arquivo = fopen(nomeArquivo, "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        //return 1;
    }

    char buffer[500];
    // Ignora o cabeçalho
    fgets(buffer, sizeof(buffer), arquivo);

    // Leitura dos dados do CSV
    while (fgets(buffer, sizeof(buffer), arquivo) != NULL && i < MAX_REGISTROS) {
        // Remove o \n no final da linha
        buffer[strcspn(buffer, "\n")] = 0;

        // Quebra os campos separados por ";"
        char *token = strtok(buffer, ";");
        if (token != NULL) strcpy(registros[i].linha, token);

        token = strtok(NULL, ";");
        if (token != NULL) registros[i].t_viag = atoi(token);

        token = strtok(NULL, ";");
        if (token != NULL) registros[i].t_giros = atoi(token);

        token = strtok(NULL, ";");
        if (token != NULL) registros[i].pagantes = atoi(token);

        token = strtok(NULL, ";");
        if (token != NULL) registros[i].gratuidade = atoi(token);

        token = strtok(NULL, ";");
        if (token != NULL) strcpy(registros[i].data, token);

        token = strtok(NULL, ";");
        if (token != NULL) strcpy(registros[i].mes, token);

        token = strtok(NULL, ";");
        if (token != NULL) registros[i].transportados = atoi(token);

        i++;
    }

    fclose(arquivo);

    printf("\nForam carregados %d registros.\n", i);
	
}
