/*Questão 3
(2 pontos) Faça um programa em C que calcule a média das notas de um aluno.
- O usuário deve informar a quantidade de notas que serão lidas.
- O programa deve ler as notas e calcular a média.
- O programa deve imprimir a média.
- Caso a média seja maior ou igual a 7, o programa deve imprimir Aprovado. Caso contrário, deve imprimir Reprovado.
*/

#include <stdio.h>

int main() {

    int n;
    float nota, soma=0, media;

    printf("Informe a quantidade de notas: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Informe a nota %d: ", i+1);
        scanf("%f", &nota);
        soma+=nota;
    }

    media = soma/n;

    printf("\nA média é: %f", media);

    if (media >= 7) {
        printf("\nAprovado!");
    } else {
        printf("\nReprovado!");
    }

    printf("\n");
    return 0;
}