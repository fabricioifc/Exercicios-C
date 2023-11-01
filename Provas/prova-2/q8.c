/*Faça um programa em C que imprima a tabuada de um número natural n informado pelo usuário. Use laço de
repetição*/

#include <stdio.h>

int main() {

    int n = 0;

    printf("Informe um número: ");
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    printf("\n");
    return 0;
}