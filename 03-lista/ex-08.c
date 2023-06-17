/**
Exercício: Jogo da Adivinhação

Escreva um programa em C que implemente um jogo da adivinhação. 
O programa deve gerar um número aleatório entre 1 e 100 e solicitar ao jogador 
que tente adivinhar qual é esse número. O jogador terá um número máximo de tentativas para acertar.

*Regras do jogo*:

a) O programa gera um número aleatório entre 1 e 100.
b) O jogador tem um número máximo de tentativas para acertar o número gerado.
c) A cada tentativa, o programa informa se o número digitado pelo jogador é maior ou menor do que o número gerado.
d) Se o jogador acertar o número, o programa exibe uma mensagem de parabéns e o número de tentativas utilizadas.
e) Se o jogador exceder o número máximo de tentativas, o programa exibe uma mensagem informando que ele perdeu e qual era o número gerado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int MAX_TENTATIVAS = 5;
    int numeroSecreto;
    int tentativas = 0;
    int numero;
    int acertou = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera um número aleatório entre 1 e 100
    numeroSecreto = rand() % 100 + 1;

    printf("Bem-vindo ao Jogo da Adivinhacao!\n");
    printf("Tente adivinhar o numero secreto entre 1 e 100.\n");

    while (tentativas < MAX_TENTATIVAS) {
        printf("Tentativa %d: ", tentativas + 1);
        scanf("%d", &numero);

        if (numero == numeroSecreto) {
            acertou = 1;
            break;
        } else if (numero < numeroSecreto) {
            printf("Tente um numero maior!\n");
        } else {
            printf("Tente um numero menor!\n");
        }

        tentativas++;
    }

    if (acertou) {
        printf("Parabens! Voce acertou o numero secreto %d em %d tentativas.\n", numeroSecreto, tentativas + 1);
    } else {
        printf("Que pena! Voce nao conseguiu acertar o numero secreto %d.\n", numeroSecreto);
    }

    return 0;
}