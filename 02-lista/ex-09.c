/**
Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.
*/
#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 < valor2) {
        printf("Valores em ordem crescente: %d, %d\n", valor1, valor2);
    } else {
        printf("Valores em ordem crescente: %d, %d\n", valor2, valor1);
    }

    return 0;
}
