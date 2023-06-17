/**
Faça um algoritmo que escreva na tela os números de um número inicial a um número final. 
Os números inicial e final devem ser informados pelo usuário;
*/
#include <stdio.h>

int main() {
    int numero_inicial, numero_final;

    printf("Digite o número inicial: ");
    scanf("%d", &numero_inicial);

    printf("Digite o número final: ");
    scanf("%d", &numero_final);

    for (int numero = numero_inicial; numero <= numero_final; numero++) {
        printf("%d\n", numero);
    }

    return 0;
}