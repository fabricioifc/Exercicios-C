/**
Um posto está vendendo combustíveis com a seguinte tabela de descontos:

Álcool:
até 20 litros, desconto de 3% por litro
acima de 20 litros, desconto de 5% por litro
Gasolina:
até 20 litros, desconto de 4% por litro
acima de 20 litros, desconto de 6% por litro

Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível 
(codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a 
ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 7,30 e o 
preço do litro do álcool é R$ 5,90.

*/
#include <stdio.h>

int main() {
    int litros;
    char tipoCombustivel;
    float precoLitro, valorPago, desconto;

    printf("Calculo do Valor a Ser Pago\n");

    printf("Digite o número de litros vendidos: ");
    scanf("%d", &litros);

    printf("Digite o tipo de combustível (A-álcool, G-gasolina): ");
    scanf(" %c", &tipoCombustivel);

    if (tipoCombustivel == 'A' || tipoCombustivel == 'a') {
        precoLitro = 5.90;

        if (litros <= 20) {
            desconto = 0.03;
        } else {
            desconto = 0.05;
        }
    } else if (tipoCombustivel == 'G' || tipoCombustivel == 'g') {
        precoLitro = 7.30;

        if (litros <= 20) {
            desconto = 0.04;
        } else {
            desconto = 0.06;
        }
    } else {
        printf("Tipo de combustível inválido.\n");
        return 1; // Encerra o programa com código de erro
    }

    valorPago = (precoLitro * litros) * (1 - desconto);

    printf("Valor a ser pago: R$ %.2f\n", valorPago);

    return 0;
}
