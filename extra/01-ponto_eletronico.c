/**
Simulação de Registro de Ponto Eletrônico em C

Desenvolva um programa em linguagem C para simular o registro de ponto eletrônico 
de funcionários em uma empresa. O programa deve permitir que o usuário digite o nome 
de cada funcionário que deseja registrar o ponto, e o programa deve adicionar o registro 
de ponto em um arquivo texto chamado "registro_pontos.txt". O programa deve continuar 
registrando pontos até que o usuário digite a palavra "sair" como nome do funcionário.

Etapas do exercício:

1. Crie uma estrutura Horario que contenha os campos horas, minutos e segundos.
2. Implemente a função registrarPonto que recebe como parâmetro o nome do funcionário. 
Dentro da função, obtenha o horário atual utilizando a função localtime da biblioteca time.h e 
armazene as informações de horas, minutos e segundos na estrutura Horario. 
Em seguida, abra o arquivo "registro_pontos.txt" em modo de escrita (append) utilizando a função 
fopen e verifique se o arquivo foi aberto com sucesso. Caso contrário, exiba uma mensagem de erro. 
Escreva o registro de ponto no arquivo contendo o nome do funcionário e o horário atual. 
Por fim, feche o arquivo utilizando a função fclose.
3. No programa principal, crie uma variável nomeFuncionario para armazenar o nome do funcionário digitado pelo usuário.
4. Dentro de um loop infinito, solicite ao usuário que digite o nome do funcionário. 
Verifique se o nome digitado é igual a "sair". Se for igual, encerre o loop.
5. Caso contrário, chame a função registrarPonto passando o nome do funcionário como argumento.
6. Após encerrar o loop, exiba uma mensagem informando o encerramento do programa.

Exemplo de Saída:
```
Digite o nome do funcionário (ou 'sair' para encerrar): João
Registro de ponto realizado com sucesso!

Digite o nome do funcionário (ou 'sair' para encerrar): Maria
Registro de ponto realizado com sucesso!

Digite o nome do funcionário (ou 'sair' para encerrar): sair
Encerrando o programa...
```
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int horas;
    int minutos;
    int segundos;
} Horario;

void registrarPonto(char* nomeFuncionario) {
    // Obter o horário atual
    time_t rawTime;
    struct tm *infoTime;
    time(&rawTime);
    infoTime = localtime(&rawTime);

    // Extrair horas, minutos e segundos
    Horario horario;
    horario.horas = infoTime->tm_hour;
    horario.minutos = infoTime->tm_min;
    horario.segundos = infoTime->tm_sec;

    // Abrir o arquivo de registro de pontos em modo de escrita (append)
    FILE* arquivo = fopen("registro_pontos.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de registro de pontos.\n");
        return;
    }

    // Escrever o registro de ponto no arquivo
    fprintf(arquivo, "Funcionário: %s\n", nomeFuncionario);
    fprintf(arquivo, "Horário: %02d:%02d:%02d\n", horario.horas, horario.minutos, horario.segundos);
    fprintf(arquivo, "------------------------\n");

    // Fechar o arquivo
    fclose(arquivo);

    printf("Registro de ponto realizado com sucesso!\n\n");
}

int main() {
    char nomeFuncionario[100];

    while (1) {
        printf("Digite o nome do funcionário (ou 'sair' para encerrar): ");
        scanf("%s", nomeFuncionario);

        if (strcmp(nomeFuncionario, "sair") == 0) {
            break;
        }

        registrarPonto(nomeFuncionario);
    }

    printf("Encerrando o programa...\n");

    return 0;
}
