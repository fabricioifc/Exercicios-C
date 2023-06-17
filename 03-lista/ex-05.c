/**
Calcular e imprimir os números divisíveis por 4 menores que 100.
*/
#include <stdio.h>

int main() {
    int limite = 100;

    printf("Numeros divisiveis por 4 menores que %d:\n", limite);

    for (int i = 1; i < limite; i++) {
        if (i % 4 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
