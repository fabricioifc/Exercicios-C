/**
As maçãs custam R$1,30 cada se forem compradas menos de uma dúzia, 
e R$1,00 se forem compradas pelo menos 12. Escreva um programa que 
leia o número de maçãs compradas, calcule e escreva o custo total da compra.
*/
#include <stdio.h>

int main() {
    int quantidade;
    float custoTotal;

    // Obter o número de maçãs compradas
    printf("Digite o número de maçãs compradas: ");
    scanf("%d", &quantidade);

    // Calcular o custo total da compra
    if (quantidade < 12) {
        custoTotal = quantidade * 1.30;
    } else {
        custoTotal = quantidade * 1.00;
    }

    // Exibir o custo total da compra
    printf("O custo total da compra é: R$%.2f\n", custoTotal);

    return 0;
}
