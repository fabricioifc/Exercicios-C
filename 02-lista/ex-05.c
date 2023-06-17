/**
Escreva um algoritmo que leia o código de um aluno e suas três notas. 
Calcule a média ponderada do aluno, considerando que o peso para a maior 
nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, 
suas três notas, a média calculada e uma mensagem: "APROVADO" 
se a média for maior ou igual a 5 e "REPROVADO" se a média for menor que 5.
*/
#include <stdio.h>

int main() {
    int codigoAluno;
    float nota1, nota2, nota3, media, maiorNota;

    // Obter o código do aluno
    printf("Digite o código do aluno: ");
    scanf("%d", &codigoAluno);

    // Obter as três notas
    printf("Digite as três notas do aluno (separadas por espaço): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    // Verificar se as notas estão dentro da faixa correta (0 a 10)
    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10) {
        printf("Erro: As notas devem estar entre 0 e 10.\n");
        return 0;
    }

    // Determinar a maior nota
    if (nota1 >= nota2 && nota1 >= nota3) {
        maiorNota = nota1;
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        maiorNota = nota2;
    } else {
        maiorNota = nota3;
    }

    // Calcular a média ponderada
    media = (maiorNota * 4 + (nota1 + nota2 + nota3 - maiorNota) * 3) / 6;

    // Exibir o código do aluno, as notas e a média
    printf("Código do aluno: %d\n", codigoAluno);
    printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Média: %.2f\n", media);

    // Verificar se o aluno foi aprovado ou reprovado
    if (media >= 5) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
