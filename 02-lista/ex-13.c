/**
Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito. 
Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito). 
Também testar se saldo atual for maior ou igual a zero escrever a mensagem 'Saldo Positivo', 
senão escrever a mensagem 'Saldo Negativo'.
*/
#include <stdio.h>

int main() {
    int numeroConta;
    float saldo, debito, credito, saldoAtual;

    printf("Calculo do Saldo Atual\n");

    printf("Digite o numero da conta do cliente: ");
    scanf("%d", &numeroConta);

    printf("Digite o saldo do cliente: R$ ");
    scanf("%f", &saldo);

    printf("Digite o valor do debito: R$ ");
    scanf("%f", &debito);

    printf("Digite o valor do credito: R$ ");
    scanf("%f", &credito);

    saldoAtual = saldo - debito + credito;

    printf("O saldo atual do cliente na conta %d eh: R$ %.2f\n", numeroConta, saldoAtual);

    if (saldoAtual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}
