
#include <stdio.h>

int main() {
    char resposta;

    // Perguntas
    printf("PERGUNTAS RELACIONADAS A SEMANA DE ARTE MODERNA\n");
    printf("\n1 - Voce ja sabia o que foi a semana da arte moderna?\n");
    printf("\nA - Nao\n");
    printf("\nB - So ouvi falar\n");
    printf("\nC - Tinha um breve conhecimento\n");
    printf("\nD - Sou um admirador do movimento modernista\n");
    printf("\nEscolha a opcao (A, B, C ou D): ");
    scanf(" %c", &resposta);
    salvarResposta("respostas.csv", resposta);

    printf("\n2 - O quanto voce acredita que a semana de arte moderna tem de influencia nos dias atuais?\n");
    printf("\nA - Nada influente\n");
    printf("\nB - Pouco influente\n");
    printf("\nC - Influente\n");
    printf("\nD - Muito influente\n");
    printf("\nEscolha a opcao (A, B, C ou D): ");
    scanf(" %c", &resposta);
    salvarResposta("respostas.csv", resposta);

    printf("\n3 - Qual das categorias de arte presentes na semana de arte moderna voce mais gosta\n");
    printf("\nA - Pintura\n");
    printf("\nB - Escultura\n");
    printf("\nC - Literatura\n");
    printf("\nD - Musica\n");
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
