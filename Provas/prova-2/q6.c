/*Faça um programa em C que exiba 1234 vezes na tela a mensagem “Eu gosto de estudar Algoritmos!”, usando a
estrutura de repetição do while*/

#include <stdio.h>

int main() {

    int n = 0;

    while (n<1234) {
        printf("Eu gosto de estudar Algoritmos!\n");
        n++;
    }

    printf("\n");
    return 0;
}