# include <stdio.h>

int main(void) {
    int vetor[5];

    scanf("%d", &vetor[0]);
    scanf("%d", &vetor[1]);
    scanf("%d", &vetor[2]);
    scanf("%d", &vetor[3]);
    scanf("%d", &vetor[4]);

    printf("\nOs valores digitados foram:\n");
    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]);
    printf("%d\n", vetor[3]);
    printf("%d\n", vetor[4]);
    // printf("%d\n", vetor[5]); // Acessa um índice inválido


    return 0;
}