/**
Faça um algoritmo que leia dois valores para as variáveis A e B e 
efetue a troca dos valores de forma que a variável A passe a possuir 
o valor da variável B e a variável B passe a possuir o valor da variável A. 

Apresente os valores trocados.
*/

#include <stdio.h>

int main() {
    int A, B, temp;

    // Obter valores das variáveis A e B
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Trocar os valores entre as variáveis A e B usando uma variável temporária
    temp = A;
    A = B;
    B = temp;

    // Apresentar os valores trocados na tela
    printf("Valores trocados:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
