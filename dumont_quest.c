#include <stdio.h>

int main() {
    char resposta;

    // Perguntas
    printf("PERGUNTAS RELACIONADAS AO SANTOS DUMONT\n");
    printf("\n1 - Voce sabia que Santos Dumont, um brasileiro, e o criador do primeiro aviao funcional da historia?\n");
    printf("\nA - Nao fazia ideia\n");
    printf("\nB - Nao tinha certeza se era o primeiro\n");
    printf("\nC - Sabia mas considero os irmaos Wright como os pioneiros\n");
    printf("\nD - Sabia e tenho muito orgulho.\n");
    printf("\nEscolha a opcao (A, B, C ou D): ");
    scanf(" %c", &resposta);
    salvarResposta("respostas.csv", resposta);

    printf("\n2 - O quao revolucionario vocae considera a invencao de Santos Dumont?\n");
    printf("\nA - Nada revolucionario\n");
    printf("\nB - Pouco revolucionario\n");
    printf("\nC - Revolucionario\n");
    printf("\nD - Muito revolucionario\n");
    printf("Escolha a opcao (A, B, C ou D): ");
    scanf(" %c", &resposta);
    salvarResposta("respostas.csv", resposta);

    printf("\n3 - Quantas vezes você ja andou de aviao?\n");
    printf("\nA - Nunca andei de aviao\n");
    printf("\nB - Andei uma vez de aviao\n");
    printf("\nC - Andei menos de 5 vezes\n");
    printf("\nD - Andei mais de 5 vezes\n");
    printf("\nEscolha a opcao (A, B, C ou D): ");
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
