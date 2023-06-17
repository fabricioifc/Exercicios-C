/**
Faça um algoritmo que leia os valores de COMPRIMENTO, LARGURA e ALTURA e 
apresente o valor do volume de uma caixa retangular. 
Utilize para o cálculo a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.
*/
#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    // Obter os valores de comprimento, largura e altura
    printf("Digite o valor do comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite o valor da largura: ");
    scanf("%f", &largura);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    // Calcular o volume da caixa retangular
    volume = comprimento * largura * altura;

    // Apresentar o valor do volume na tela
    printf("O volume da caixa retangular é: %.2f\n", volume);

    return 0;
}
