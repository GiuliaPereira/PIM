#include <stdio.h>

int main() {
    char resposta;

    // Perguntas
    printf("Perguntas relacionadas ao cinema \n");
    printf("\n1 - Quanto voce ja conhecia sobre a historia do cinema?\n");
    printf("\nA - Nada.\n");
    printf("\nB - Muito pouco.\n");
    printf("\nC - Ja possuia este conhecimento.\n");
    printf("\nD - Sou um amante da setima0 arte e tenho muito conhecimento sobre.\n");
    printf("Escolha a opcao (A, B, C ou D): ");
    scanf(" %c", &resposta);
    salvarResposta("respostas.csv", resposta);

    printf("\n2 - O quao revolucionario voce considera a ideia dos irmaos Lumiere\n");
    printf("\nA - Nada revolucionario\n");
    printf("\nB - Pouco revolucionario\n");
    printf("\nC - Revolucionario\n");
    printf("\nD - Muito revolucionario\n");
    printf("Escolha a opcao (A, B, C ou D): ");
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


    printf("\n3 - Com que frequencia vai ao cinema?\n");
    printf("\nA - 1 vez a cada 15 dias\n");
    printf("\nB - 1 vez ao mes\n");
    printf("\nC - 1 vez a cada 2 meses\n");
    printf("\nD - Nao tenho o costume de ir ao cinema\n");
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



