#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaBinaria(int baixo, int alto) {
    return (baixo + alto) / 2;
}

int main() {
    int min = 1; // Número mínimo possível
    int max = 100; // Número máximo possível
    int alvo; // O número escolhido pelo jogador
    int palpite; // O palpite do computador
    char resposta;

    srand(time(NULL)); // Inicialize o gerador de números aleatórios
    printf("Bem-vindo ao Jogo de Adivinhação!\n");
    printf("Pense em um número entre %d e %d.\n", min, max);

    do {
        alvo = rand() % (max - min + 1) + min;
        printf("Seu número é %d? (s/n): ", alvo);
        scanf(" %c", &resposta);

        if (resposta == 's' || resposta == 'S') {
            printf("Uau! Eu adivinhei o seu número.\n");
        } else if (resposta == 'n' || resposta == 'N') {
            printf("Seu número é maior ou menor do que %d? (m/M): ", alvo);
            scanf(" %c", &resposta);

            if (resposta == 'm' || resposta == 'M') {
                min = alvo + 1;
            } else if (resposta == 'l' || resposta == 'L') {
                max = alvo - 1;
            } else {
                printf("Resposta inválida. Por favor, digite 'm' para maior ou 'l' para menor.\n");
            }
        } else {
            printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
        }

        // Calcule o próximo palpite usando a busca binária
        palpite = buscaBinaria(min, max);

    } while (resposta != 's' && resposta != 'S');

    return 0;
}