# include <stdio.h>

int main(void) {
    int vetor[5];
    // float vetor[5];

    // tamanho do vetor
    int tamanho = sizeof(vetor) / sizeof(int);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor do vetor na posição %d: ", i);
        scanf("%d: ", &vetor[i]);
    }

    printf("Valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}