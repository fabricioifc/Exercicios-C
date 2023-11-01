/*Questão 2
(1 pontos) Faça um programa em C que leia repetidamente um número inteiro e imprima esse número enquanto for maior que
zero. Caso o número seja menor ou igual a zero, o programa deve imprimir Número inválido! e encessar a execução
*/

#include <stdio.h>

int main() {

    int n = 1;

    while(n>0) {
        printf("\nInforme um número ou zero para encerrar: ");
        scanf("%d", &n);

        printf("\nNúmero: %d", n);

    }

    printf("\nNúmero Inválido!");

    return 0;
}