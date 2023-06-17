/**
Faça um algoritmo que:
    a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
    b) Obtenha o valor para a variável VH (valor/hora trabalhada);
    c) Obtenha o valor para a variável PD (percentual de desconto);
    d) Calcule o salário bruto (SB <- HT * VH);
    e) Calcule o valor total de desconto (TD <- (PD/100)*SB);
    f) Calcule o salário líquido (SL <- SB - TD);
    g) Apresente os valores na tela
*/

#include <stdio.h>

int main() {
    float HT, VH, PD, SB, TD, SL;

    printf("Digite a quantidade de horas trabalhadas no mês: ");
    scanf("%f", &HT);

    printf("Digite o valor por hora trabalhada: ");
    scanf("%f", &VH);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &PD);

    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;

    printf("Salário bruto: %.2f\n", SB);
    printf("Valor total de desconto: %.2f\n", TD);
    printf("Salário líquido: %.2f\n", SL);

    return 0;
}

