/** 

Faça um algoritmo que calcule a quantidade de litros de combustível 
gasta em uma viagem, utilizando um automóvel que faz 12Km por litro. 

Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem 
e a velocidade média durante ela. Desta forma, será possível obter a 
distância percorrida com a fórmula DISTANCIA = TEMPO * VELOCIDADE. 

Tendo o valor da distância, basta calcular a quantidade de litros 
de combustível utilizada na viagem com a fórmula: LITROS_USADOS = DISTANCIA / 12. 

O programa deve apresentar os valores da velocidade média, tempo gasto na viagem, 
a distância percorrida e a quantidade de litros utilizada na viagem.

Calcule o custo da viagem sabendo que o preço do combustível é de R$5,50 por litro.
*/
#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros_usados, custo;

    // Obter valores do tempo gasto e velocidade média
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média durante a viagem (em km/h): ");
    scanf("%f", &velocidade);

    // Calcular a distância percorrida e a quantidade de litros utilizada
    distancia = tempo * velocidade;
    litros_usados = distancia / 12;

    // Calcular o custo da viagem com base no preço do combustível
    custo = litros_usados * 5.50;

    // Apresentar os resultados na tela
    printf("Velocidade média: %.2f km/h\n", velocidade);
    printf("Tempo gasto na viagem: %.2f horas\n", tempo);
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Litros de combustível utilizados: %.2f litros\n", litros_usados);
    printf("Custo da viagem: R$ %.2f\n", custo);

    return 0;
}
