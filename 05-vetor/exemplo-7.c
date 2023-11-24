#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    // Solicitar o tamanho do vetor ao usuário
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Alocar memória para o vetor
    int *vetor = (int *)malloc(tamanho * sizeof(int));


    // Verificar se a alocação foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1; // Encerrar o programa com código de erro
    }

    // Preencher o vetor com valores (apenas um exemplo)
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i * 2;
    }

    // Imprimir os valores do vetor
    printf("Valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    // Liberar a memória alocada para o vetor
    free(vetor);

    return 0; // Programa executado com sucesso
}
