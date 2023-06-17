/**
O cardápio de uma lanchonete é o seguinte: 

| Código		| Descrição e Preço unitário |
| 100 		    | Cachorro quente 1,10       |
| 101 		    | Bauru simples 1,30 	     |
| 102 		    | Bauru c/ovo 1,50 	         |
| 103 		    | Hamburger 1,10 	         |
| 104 		    | Cheeseburger 1,30 	     |
| 105 		    | Refrigerante 1,00 	     |

Escrever um algoritmo que leia o código do item pedido, 
a quantidade e calcule o valor a ser pago por aquele lanche. 
Considere que a cada execução somente será calculado um item.
*/

#include <stdio.h>

int main() {
    int codigo;
    float valorUnitario, valorTotal;
    int quantidade;

    // Obter o código do item pedido
    printf("Digite o código do item: ");
    scanf("%d", &codigo);

    // Obter a quantidade do item pedido
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    // Calcular o valor unitário e total com base no código
    switch (codigo) {
        case 100:
            valorUnitario = 1.10;
            break;
        case 101:
            valorUnitario = 1.30;
            break;
        case 102:
            valorUnitario = 1.50;
            break;
        case 103:
            valorUnitario = 1.10;
            break;
        case 104:
            valorUnitario = 1.30;
            break;
        case 105:
            valorUnitario = 1.00;
            break;
        default:
            printf("Código de item inválido!\n");
            return 0;
    }

    // Calcular o valor total do lanche
    valorTotal = valorUnitario * quantidade;

    // Exibir o valor a ser pago
    printf("Valor a ser pago: R$%.2f\n", valorTotal);

    return 0;
}
