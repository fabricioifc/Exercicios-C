/*Questão 3
(2 pontos) Faça um programa em C que calcule a média das notas de um aluno.
- O usuário deve informar a quantidade de notas que serão lidas.
- O programa deve ler as notas e calcular a média.
- O programa deve imprimir a média.
- Caso a média seja maior ou igual a 7, o programa deve imprimir Aprovado. Caso contrário, deve imprimir Reprovado.
*/

#include <stdio.h>
#include "utils.c"
#include <stdlib.h>

int ler_quantidade_de_notas() {
    int n = scan_int("Informe a quantidade de notas: ");
    return n;
}

float ler_nota(int i) {
    // char mensagem[20];
    char* mensagem = malloc(20*sizeof(char));
    sprintf(mensagem, "Informe a nota %d: ", i+1);
    float nota = scan_float(mensagem);
    return nota;
}

float* ler_notas(int n) {
    float* notas = malloc(n*sizeof(float));
    for (int i = 0; i < n; i++) {
        notas[i] = ler_nota(i);
    }
    return notas;
}


float calcular_media(float* notas, int n) {
    float soma=0, media;
    for (int i = 0; i < n; i++) {
        soma+=notas[i];
    }
    media = soma/n;
    return media;
}

char* verificar_aprovacao(float media) {
    return verificar_maior_igual(media, 7) ? "Aprovado" : "Reprovado";
    // return media >= 7 ? "Aprovado" : "Reprovado";
}

void imprimir_notas(float* notas, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nota %d: %.2f\n", i+1, notas[i]);
    }
}

void imprimir_resultado(float media) {
    // printf("\nA média é: %.2f", media);
    // printf("\nO aluno está %s", verificar_aprovacao(media));
    // printf("\n");
    imprimir_mensagem("A média é: %.2f", media);
    imprimir_mensagem("\nO aluno está %s", verificar_aprovacao(media));
    imprimir_mensagem("\n");
}

int main() {
    int n = ler_quantidade_de_notas();
    float* notas = ler_notas(n);
    float media = calcular_media(notas, n);

    imprimir_notas(notas, n);
    imprimir_resultado(media);
    free(notas);
    return 0;
}