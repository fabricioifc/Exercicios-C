#include <stdio.h>
#include <string.h>

int main(void) {
    char matriz[3][20];

    // Calculando o número de linhas e colunas
    int linhas = sizeof(matriz) / sizeof(matriz[0]);
    int colunas = sizeof(matriz[0]) / sizeof(matriz[0][0]);

    // Calculando o tamanho total
    int tamanhoTotal = linhas * colunas;

    // Imprimindo detalhes da matriz
    printf("Número de linhas: %d\n", linhas);
    printf("Número de colunas: %d\n", colunas);
    printf("Tamanho total: %d\n", tamanhoTotal);

    // Lendo os valores da matriz
    printf("\nLendo os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        printf("Nome do aluno %d: ", i);
        scanf("%s", matriz[i]);
    }

    // Imprimindo os valores da matriz
    printf("\nValores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        printf("Nome do aluno %d: %s\n", i, matriz[i]);
    }

    return 0;
}