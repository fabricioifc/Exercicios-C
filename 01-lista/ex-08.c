/**
O sistema de avaliação de determinada disciplina, é composto por três provas. 
A primeira prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. 
Faça um algoritmo para calcular a média final ponderada de um aluno desta disciplina.
*/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Obter as notas das três provas
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    // Calcular a média final ponderada
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

    // Apresentar a média final na tela
    printf("A média final ponderada é: %.2f\n", media);

    return 0;
}
