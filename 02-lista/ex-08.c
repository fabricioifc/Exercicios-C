/**
Ler as notas das avaliações A1 e A2 de um aluno. 
Calcular a média aritmética simples e escrever uma mensagem que diga se o aluno foi ou não aprovado 
(considerar que nota igual ou maior que 7 o aluno é aprovado). Escrever também a média calculada.
*/
#include <stdio.h>

int main() {
    float notaA1, notaA2, media;

    printf("Digite a nota da A1: ");
    scanf("%f", &notaA1);

    printf("Digite a nota da A2: ");
    scanf("%f", &notaA2);

    media = (notaA1 + notaA2) / 2;

    printf("A média do aluno é: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aluno APROVADO!\n");
    } else {
        printf("Aluno REPROVADO!\n");
    }

    return 0;
}
