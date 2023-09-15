/* Exemplos básicos para iniciar 

1. Escreva um programa que imprima os números de 1 a 10 em ordem crescente.
2. Escreva um programa que imprima os números de 1 a 10 em ordem decrescente.
3. Escreva um programa que imprima os números de 1 a 10 em ordem crescente, 
    mas apenas os números ímpares.
4. Escreva um programa que imprima os números de 1 a 10 em ordem crescente, 
    mas apenas os números múltiplos de 3 e de 5.
5. Escreva um programa que imprima o nome de uma pessoa letra por letra. 
    O nome deve ser lido do teclado e o programa deve imprimir uma letra por linha.
*/

#include <stdio.h>

int main() {
    // 1. Escreva um programa que imprima os números de 1 a 10 em ordem crescente.
    printf("1. Escreva um programa que imprima os números de 1 a 10 em ordem crescente.\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // 2. Escreva um programa que imprima os números de 1 a 10 em ordem decrescente usando while
    printf("2. Escreva um programa que imprima os números de 1 a 10 em ordem decrescente usando while.\n");
    int i = 10;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n\n");

    // 3. Escreva um programa que imprima os números de 1 a 10 em ordem crescente, mas apenas os números ímpares.
    printf("3. Escreva um programa que imprima os números de 1 a 10 em ordem crescente, mas apenas os números ímpares.\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 4. Escreva um programa que imprima os números de 1 a 10 em ordem crescente, mas apenas os números múltiplos de 3 e de 5.
    printf("4. Escreva um programa que imprima os números de 1 a 10 em ordem crescente, mas apenas os números múltiplos de 3 e de 5.\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    return 0;

    // 5. Escreva um programa que imprima o nome de uma pessoa letra por letra. O nome deve ser lido do teclado e o programa deve imprimir uma letra por linha. Conte quantas letras A existem no nome.
    printf("5. Escreva um programa que imprima o nome de uma pessoa letra por letra. O nome deve ser lido do teclado e o programa deve imprimir uma letra por linha. Conte quantas letras A existem no nome.\n");
    char nome[100];
    int i = 0;
    int contador = 0;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    while (nome[i] != '\0') {
        printf("%c\n", nome[i]);

        if (nome[i] == 'A' || nome[i] == 'a') {
            contador++;
        }

        i++;
    }

    printf("O nome %s tem %d letras A.\n", nome, contador);
    return 0;
}