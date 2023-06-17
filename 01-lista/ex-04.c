/**

Faça um algoritmo que leia uma temperatura em Fahrenheit e a 
apresente convertida em graus Celsius. A fórmula de conversão 
é C = (F – 32) * ( 5 / 9), na qual F é a temperatura em Fahrenheit e 
C é a temperatura em Celsius.

*/
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Obter valor da temperatura em graus Fahrenheit
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Converter para graus Celsius usando a fórmula C = (F - 32) * (5 / 9)
    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    // Apresentar o resultado na tela
    printf("A temperatura em graus Celsius é: %.2f\n", celsius);

    return 0;
}
