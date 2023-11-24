// Crie um programa em C para usar um vetor de notas de 5 alunos e os pesos. Leia as notas dos 5 alunos, calcule e imprima a média ponderada das notas.

#include <stdio.h>

int main(void) {
    float notas[3], pesos[3], soma = 0, somaPesos = 0;

    // tamanho do vetor
    int tamanho = sizeof(notas) / sizeof(float);

    // Lendo os valores da matriz
    printf("\nLendo os valores da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &notas[i]);
        printf("Digite o peso da nota %d: ", i);
        scanf("%f", &pesos[i]);
    }

    // Imprimindo os valores da matriz
    printf("\nValores da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Nota do aluno %d: %.2f\n", i, notas[i]);
        printf("Peso da nota do aluno %d: %.2f\n", i, pesos[i]);
    }

    // Calculando a média ponderada
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }

    float media = soma / somaPesos;
    printf("Média ponderada: %.2f\n", media);

    if (media >= 6) {
        printf("Aprovado\n");
    } else if (media >= 4) {
        printf("Recuperação\n");
    } else {
        printf("Reprovado\n");
    }
    
    return 0;
}