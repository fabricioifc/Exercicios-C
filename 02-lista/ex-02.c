/**
Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo).
*/
#include <stdio.h>

int main() {
    int valor;

    // Obter o valor do usuário
    printf("Digite um valor: ");
    scanf("%d", &valor);

    // Verificar se o valor é positivo ou negativo e exibir a mensagem correspondente
    if (valor >= 0) {
        printf("É positivo!\n");
    } else {
        printf("É negativo!\n");
    }

    return 0;
}
