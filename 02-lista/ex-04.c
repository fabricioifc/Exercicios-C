/**
Um hotel cobra R$60.00 a diária e mais uma taxa de serviços. A taxa de serviços é de: 

R$5.50 por diária, se o número de diárias for maior que 15; 
R$6.00 por diária, se o número de diárias for igual a 15; 
R$8.00 por diária, se o número de diárias for menor que 15. 
*/
#include <stdio.h>

int main() {
    int numDiarias;
    float taxaServicos, custoTotal;

    // Obter o número de diárias
    printf("Digite o número de diárias: ");
    scanf("%d", &numDiarias);

    // Calcular a taxa de serviços
    if (numDiarias > 15) {
        taxaServicos = 5.50;
    } else if (numDiarias == 15) {
        taxaServicos = 6.00;
    } else {
        taxaServicos = 8.00;
    }

    // Calcular o custo total de hospedagem
    custoTotal = (60.00 + taxaServicos) * numDiarias;

    // Exibir o custo total de hospedagem
    printf("O custo total de hospedagem é: R$%.2f\n", custoTotal);

    return 0;
}
