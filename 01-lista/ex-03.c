/**
Faça um algoritmo que leia uma temperatura em graus Celsius e 
apresente-a convertida em graus Fahrenheit. 

A fórmula de conversão é: F = (9 * C + 160) / 5, 
na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius;

*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Obter valor da temperatura em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Converter para graus Fahrenheit usando a fórmula F = (9 * C + 160) / 5
    fahrenheit = (9 * celsius + 160) / 5;

    // Apresentar o resultado na tela
    printf("A temperatura em graus Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}
