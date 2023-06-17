/**
Ler dois valores e imprimir uma das três mensagens a seguir:

‘Números iguais’, caso os números sejam iguais
‘Primeiro é maior’, caso o primeiro seja maior que o segundo;
‘Segundo maior’, caso o segundo seja maior que o primeiro.
*/

#include <stdio.h>

int main() {
    int primeiro, segundo;

    printf("Comparacao de Dois Numeros\n");

    printf("Digite o primeiro valor: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo valor: ");
    scanf("%d", &segundo);

    if (primeiro == segundo) {
        printf("Numeros iguais\n");
    } else if (primeiro > segundo) {
        printf("Primeiro eh maior\n");
    } else {
        printf("Segundo eh maior\n");
    }

    return 0;
}
