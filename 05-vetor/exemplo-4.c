# include <stdio.h>

int main(void) {
    char vetor[5];

    // tamanho do vetor
    int tamanho = sizeof(vetor) / sizeof(char);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor do vetor na posição %d: ", i);
        scanf(" %c", &vetor[i]); // espaço antes do %c
    }

    printf("Valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%c\n", vetor[i]);
    }

    return 0;
}