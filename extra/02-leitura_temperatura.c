/**
Você foi contratado para desenvolver um programa em linguagem C que simule a 
leitura de um sensor de temperatura e grave as informações em um arquivo texto. 
O programa deverá solicitar ao usuário o nome do arquivo de destino onde as informações 
serão armazenadas. Em seguida, o programa realizará uma simulação de leitura de temperatura 
a cada segundo. A temperatura será gerada aleatoriamente no intervalo entre 20°C e 30°C. 
A cada leitura, o programa irá registrar a data, hora e temperatura no arquivo de destino 
no seguinte formato: "dd/mm/aaaa hh:mm:ss - Temperatura: xx°C". O programa deverá continuar 
executando até que seja interrompido manualmente pelo usuário.
*/
#include <stdio.h>
#include <time.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[50];
    float temperatura;
    time_t t;
    struct tm *info;
    char dataHora[20];

    printf("Digite o nome do arquivo de destino: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Simulação de leitura de temperatura.\n");
    printf("Pressione Ctrl + C para encerrar.\n");

    while (1) {
        // Simula a leitura de temperatura
        temperatura = 20 + rand() % 11; // Temperatura entre 20 e 30 graus

        // Obtém a data e hora atual
        t = time(NULL);
        info = localtime(&t);
        strftime(dataHora, sizeof(dataHora), "%d/%m/%Y %H:%M:%S", info);

        // Grava as informações no arquivo
        fprintf(arquivo, "%s - Temperatura: %.2f°C\n", dataHora, temperatura);

        // Aguarda 1 segundo antes de realizar a próxima leitura
        sleep(1);
    }

    fclose(arquivo);

    return 0;
}
