/* Questão 1
(1 ponto) Faça um programa em C que leia um número natural n e imprima os n primeiros números naturais ímpares. Por exemplo, se n = 5, o programa deve imprimir 1 3 5 7 9
*/
#include <stdio.h>

int main() {

    int n;

    printf("Escreva um número natural: ");
    scanf("%d", &n);

    for (int i = 1; i < n*2; i+=2) {
        printf("%d ", i);
    }

    return 0;
}

/*Questão 2
(1 pontos) Faça um programa em C que leia repetidamente um número inteiro e imprima esse número enquanto for maior que
zero. Caso o número seja menor ou igual a zero, o programa deve imprimir Número inválido! e encessar a execução
*/

#include <stdio.h>

int main() {

    int n = 1;

    while(n>0) {
        printf("\nInforme um número ou zero para encerrar: ");
        scanf("%d", &n);

        printf("\nNúmero: %d", n);

    }

    printf("\nNúmero Inválido!");

    return 0;
}

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

/*
(0.5 ponto) Faça um programa em C que escreva o seu nome na tela 1000 vezes
*/

#include <stdio.h>

int main() {

    for (int i = 0; i < 1000; i++) {
        printf("\nFabricio");
    }
    

    printf("\n");
    return 0;
}
/*Faça um programa em C que exiba 1234 vezes na tela a mensagem “Eu gosto de estudar Algoritmos!”, usando a
estrutura de repetição do while*/

#include <stdio.h>

int main() {

    int n = 0;

    while (n<1234) {
        printf("Eu gosto de estudar Algoritmos!\n");
        n++;
    }

    printf("\n");
    return 0;
}

/*Faça um programa em C que leia uma palavra e imprima a palavra invertida. Use laço de repetição*/

#include <stdio.h>

int main() {

    char p[] = {"palavra"};

    int tamanho = sizeof(p);
    for (int i = tamanho; i >= 0; i--) {
        printf("%c", p[i]);
    }

    printf("\n");
    return 0;
}

/*Faça um programa em C que imprima a tabuada de um número natural n informado pelo usuário. Use laço de
repetição*/

#include <stdio.h>

int main() {

    int n = 0;

    printf("Informe um número: ");
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    printf("\n");
    return 0;
}

/*Faça um programa em C que leia um número e imprima se o número é par ou ímpar. Use laço de repetição while*/

#include <stdio.h>

int main() {

    int n = 0;

    printf("Informe um número: ");
    scanf("%d", &n);

    while (n != 0) {
        if (n%2 == 0) {
            printf("O número %d é par!\n", n);
        } else {
            printf("O número %d é ímpar!\n", n);
        }
        printf("Informe um número: ");
        scanf("%d", &n);
    }

    printf("\n");
    return 0;
}

/*Faça um programa em C que desenhe uma árvore de natal na tela com * (asterisco). Use laço de repetição*/

#include <stdio.h>

int main() {

    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i*2+1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            printf(" ");
        }
        printf("***\n");
    }

    return 0;
}