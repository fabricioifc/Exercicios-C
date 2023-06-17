/**
Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. 
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$1.500,00
 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total.
*/
#include <stdio.h>

#define LIMITE_COMISSAO 1500.0
#define TAXA_COMISSAO_ATE_LIMITE 0.03
#define TAXA_COMISSAO_ACIMA_LIMITE 0.05

int main() {
    float salarioFixo, valorVendas, comissao, salarioTotal;

    printf("Calculo do Salario Total de um Vendedor\n");

    printf("Digite o valor do salario fixo: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor das vendas efetuadas: R$ ");
    scanf("%f", &valorVendas);

    if (valorVendas <= LIMITE_COMISSAO) {
        comissao = valorVendas * TAXA_COMISSAO_ATE_LIMITE;
    } else {
        comissao = LIMITE_COMISSAO * TAXA_COMISSAO_ATE_LIMITE +
                   (valorVendas - LIMITE_COMISSAO) * TAXA_COMISSAO_ACIMA_LIMITE;
    }

    salarioTotal = salarioFixo + comissao;

    printf("O salario total do vendedor eh: R$ %.2f\n", salarioTotal);

    return 0;
}
