/*Faça um programa em C que leia uma palavra e imprima a palavra invertida. Use laço de repetição*/

#include <stdio.h>

int main() {

    char p[100];
    int tamanho = 0;

    printf("Informe uma palavra: ");
    scanf("%s", p);

    while (p[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = tamanho; i >= 0; i--) {
        printf("%c", p[i]);
    }

    printf("\n");
    return 0;
}

// #include <stdio.h>

// int main() {

//     char p[] = {"palavra"};

//     int tamanho = sizeof(p);
//     for (int i = tamanho; i >= 0; i--) {
//         printf("%c", p[i]);
//     }

//     printf("\n");
//     return 0;
// }