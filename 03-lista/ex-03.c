/**
Calcular a soma dos 100 primeiros números naturais.
*/

#include <stdio.h>

int main() {
    int n = 100;
    int soma = 0;
    
    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    // A Soma de Gauss
    // int soma = (n / 2) * (2 + (n - 1));

    printf("A soma dos 100 primeiros numeros naturais e: %d\n", soma);

    return 0;
}