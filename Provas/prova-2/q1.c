/* Questão 1
(1 ponto) Faça um programa em C que leia um número natural n e imprima os n primeiros números naturais ímpares. Por exemplo, se n = 5, o programa deve imprimir 1 3 5 7 9
*/
#include <stdio.h>

int main() {

    int n;

    printf("Escreva um número natural: ");
    scanf("%d", &n);

    for (int i = 1; i < n*2; i+=2) {
        printf("%d ", i);
    }

    return 0;
}