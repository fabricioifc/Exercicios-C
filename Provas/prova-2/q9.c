/*Faça um programa em C que leia um número e imprima se o número é par ou ímpar. Use laço de repetição while*/

#include <stdio.h>

int main() {

    int n = 0;

    printf("Informe um número: ");
    scanf("%d", &n);

    while (n != 0) {
        if (n%2 == 0) {
            printf("O número %d é par!\n", n);
        } else {
            printf("O número %d é ímpar!\n", n);
        }
        printf("Informe um número: ");
        scanf("%d", &n);
    }

    printf("\n");
    return 0;
}