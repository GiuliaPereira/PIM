
#include <stdio.h>

int main() {
    char resposta;

    // Perguntas
    printf("PERGUNTAS RELACIONADAS AS OLIMPIADAS \n");
    printf("\n1 - Voce tem o costume de acompanhar as olimpiadas?\n");
    printf("\nA - Nao\n");
    printf("\nB - Raramente\n");
    printf("\nC - Sim\n");
    printf("\nD - Sim, acompanho todos os esportes?\n");
    printf("\nEscolha a opcao (A, B, C ou D): ");
    scanf(" %c", &resposta);
    salvarResposta("respostas.csv", resposta);

    printf("\n2 - O quanto voce considera importante para os atletas a transmissao dos jogos olImpicos?\n");
    printf("\nA - Nada importante\n");
    printf("\nB - Pouco importante\n");
    printf("\nC - Importante\n");
    printf("\nD - Muito importante\n");
    printf("Escolha a opcao (A, B, C ou D): ");
    scanf(" %c", &resposta);
    salvarResposta("respostas.csv", resposta);

    printf("\n3 - Voce ja quis ser um atleta profissional?\n");
    printf("\nA - Nao\n");
    printf("\nB - Quando era criança apenas\n");
    printf("\nC - Pratico esportes somente por diversaon");
    printf("\nD - E o meu sonho ser atleta profissional\n");
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
