# include <stdio.h>

#define QTD_FRUTAS 3
#define TAM_FRUTA 10

int main(void) {
    char* frutas[QTD_FRUTAS][TAM_FRUTA];

    // tamanho do vetor
    int tamanho = sizeof(frutas) / sizeof(frutas[0]);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o nome da fruta %d: ", i + 1);
        scanf("%s", frutas[i]);
    }

    printf("\nFrutas digitadas:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%s\n", frutas[i]);
    }
}