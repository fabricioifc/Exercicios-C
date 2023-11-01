/*Faça um programa em C que desenhe uma árvore de natal na tela com * (asterisco). Use laço de repetição*/

#include <stdio.h>

int main() {

    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i*2+1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            printf(" ");
        }
        printf("***\n");
    }

    return 0;
}