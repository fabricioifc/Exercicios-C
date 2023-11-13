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

// float* ler_notas(int n) {
//     float* notas = malloc(n*sizeof(float));
//     for (int i = 0; i < n; i++) {
//         notas[i] = ler_nota(i);
//     }
//     return notas;
// }

float calcular_media(int n) {
    float nota, soma=0, media;
    for (int i = 0; i < n; i++) {
        nota = ler_nota(i);
        soma += nota;
    }
    media = soma/n;
    return media;
}

char* verificar_aprovacao(float media) {
    return verificar_maior_igual(media, 7) ? "Aprovado" : "Reprovado";
    // return media >= 7 ? "Aprovado" : "Reprovado";
}

// void imprimir_notas(float* notas, int n) {
//     imprimir_mensagem("\n***Notas***");
//     for (int i = 0; i < n; i++) {
//         imprimir_mensagem("\nNota %d: %.2f", i+1, notas[i]);
//     }
// }

void imprimir_resultado(float media) {
    // printf("\nA média é: %.2f", media);
    // printf("\nO aluno está %s", verificar_aprovacao(media));
    // printf("\n");
    imprimir_mensagem("\n--- Resultado ---");
    imprimir_mensagem("\nA média é: %.2f", media);
    imprimir_mensagem("\nO aluno está %s", verificar_aprovacao(media));
}

int main() {
    int n = ler_quantidade_de_notas();
    // float* notas = ler_notas(n);
    float media = calcular_media(n);

    // imprimir_notas(notas, n);
    imprimir_resultado(media);
    pular_linha();
    return 0;
}