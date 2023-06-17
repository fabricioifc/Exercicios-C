/**
Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, 
caso contrário escrever NÃO É MAIOR QUE 10!
*/
#include <stdio.h>

int main() {
    int valor;

    // Obter o valor do usuário
    printf("Digite um valor: ");
    scanf("%d", &valor);

    // Verificar se o valor é maior que 10 e exibir a mensagem correspondente
    if (valor > 10) {
        printf("É MAIOR QUE 10!\n");
    } else {
        printf("NÃO É MAIOR QUE 10!\n");
    }

    return 0;
}
