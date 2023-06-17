/**
Imprimir os múltiplos de 7 menores que 200.
*/

#include <stdio.h>

int main() {
    int limite = 200;

    printf("Multiplos de 7 menores que %d:\n", limite);

    for (int i = 1; i <= limite; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}