/**
Imprimir a tabuada de qualquer número inteiro recebido como entrada.
*/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro entre 1 e 10: ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 10) {
        printf("Tabuada do numero %d:\n", numero);

        for (int i = 1; i <= 10; i++) {
            int resultado = numero * i;
            printf("%d x %d = %d\n", numero, i, resultado);
        }
    } else {
        printf("Numero invalido. O numero deve estar entre 1 e 10.\n");
    }

    return 0;
}
