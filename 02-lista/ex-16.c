/**
Faça um algoritmo para ler as 3 notas obtidas por um aluno nas 3 avaliações e 
a média dos exercícios que fazem parte da avaliação. Calcular a média de aproveitamento, 
usando a fórmula abaixo e escrever o conceito do aluno de acordo com a tabela de conceitos mais abaixo:

media_de_aproveitamento = (N1 + N2 * 2 + N3 * 3 + MEDIA_EXERCICIOS) / 7

|Média de Aproveitamento    | Conceito  |
|---	                    |---	    |
|>= 9,0                     | A         |
|>= 7,5 e < 9.0             | B         |
|>= 6,0 e < 7,5             | B         |
|< 6,0                      | D         |

*/

#include <stdio.h>

int main() {
    float n1, n2, n3, mediaExercicios, mediaAproveitamento;

    printf("Calculo da Media de Aproveitamento\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a media dos exercicios: ");
    scanf("%f", &mediaExercicios);

    mediaAproveitamento = (n1 + n2 * 2 + n3 * 3 + mediaExercicios) / 7;

    printf("Media de Aproveitamento: %.2f\n", mediaAproveitamento);

    if (mediaAproveitamento >= 9) {
        printf("Conceito: A\n");
    } else if (mediaAproveitamento >= 7.5) {
        printf("Conceito: B\n");
    } else if (mediaAproveitamento >= 6) {
        printf("Conceito: C\n");
    } else {
        printf("Conceito: D\n");
    }

    return 0;
}
