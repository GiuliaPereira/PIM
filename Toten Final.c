#include <stdio.h>

int main() {
    char resposta;

    // Perguntas
    printf("1 - Qual dos 4 museus mais lhe agradou?\n");
    printf("\nA - 100 anos da semana de arte moderna\n");
    printf("\nB - 150 anos de Santos Dumont\n");
    printf("\nC - Jogos olimpicos de Paris 2024\n");
    printf("\nD - Historia do Cinema\n");
    printf("Escolha a opção (A, B, C ou D): ");
    scanf(" %c", &resposta);
    salvarResposta("respostas.csv", resposta);

    printf("\n2 - Qual dos 4 museus menos lhe agradou?\n");
    printf("\nA - 100 anos da semana de arte moderna\n");
    printf("\nB - 150 anos de Santos Dumont\n");
    printf("\nC - Jogos olimpicos de Paris 2024\n");
    printf("\nD - Historia do Cinema\n");
    printf("Escolha a opção (A, B, C ou D): ");
    scanf(" %c", &resposta);
    salvarResposta("respostas.csv", resposta);

    printf("\n3 - O quanto voce recomendaria este museu a um amigo?\n");
    printf("\nA - Definitivamente nao recomendaria\n");
    printf("\nB - Recomendaria a um amigo específico\n");
    printf("\nC - Recomendaria\n");
    printf("\nD - Recomendaria com toda certeza\n");
    printf("Escolha a opcao (A, B, C ou D): ");
    scanf(" %c", &resposta);
    salvarResposta("respostas.csv", resposta);

    int nota;
    printf("\n4 - De um modo geral, atribua uma nota de 0 a 10 para a sua experiencia neste museu\n");
    printf("Digite um numero de 0 a 10: ");
    scanf("%d", &nota);
    salvarNota("notas.csv", nota);


    return 0;
}

// Função para salvar a resposta no arquivo CSV
void salvarResposta(const char *arquivo, char resposta) {
    FILE *fp = fopen(arquivo, "a");
    if (fp != NULL) {
        fprintf(fp, "%c,", resposta);
        fclose(fp);
    } else {
        printf("Erro ao abrir o arquivo %s.\n", arquivo);
    }
}

// Função para salvar a nota no arquivo CSV
void salvarNota(const char *arquivo, int nota) {
    FILE *fp = fopen(arquivo, "a");
    if (fp != NULL) {
        fprintf(fp, "%d,", nota);
        fclose(fp);
    } else {
        printf("Erro ao abrir o arquivo %s.\n", arquivo);
    }
}



