/*Questão 4
(3 pontos) Faça um programa em C para um jogo de adivinhação, onde:
- Uma pessoa deve informar um número inteiro positivo entre 1 e 100.
- Outra pessoa deve tentar adivinhar o número.
- A cada tentativa, o programa deve informar se o número informado é maior ou menor que o número a ser adivinhado.
- Quando a pessoa acertar o número, o programa deve imprimir Parabéns! Você acertou!, mostrar a quantidade de tentativas
e encerrar o programa
*/

#include <stdio.h>

int main() {

    int n, tentativa, tentativas=0;

    printf("Informe um número entre 1 e 100: ");
    scanf("%d", &n);

    while (tentativa != n) {
        printf("Qual é o número?\n");
        scanf("%d", &tentativa);

        if (tentativa>n) {
            printf("\nO número é menor que %d", tentativa);
        } else {
            printf("\nO número é maior que %d", tentativa);
        }

        tentativas++;
        printf("\n");    
    }

    printf("\nAcertou em %d", tentativas);
    

    printf("\n");
    return 0;
}