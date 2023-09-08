/**
Um determinado clube de futebol pretende classificar seus atletas em categorias 
e para isto ele contratou um programador para criar um programa que executasse esta tarefa. 
Para isso o clube criou uma tabela que continha a faixa etária do atleta e sua categoria. 

A tabela está demonstrada abaixo: 

| IDADE 		| CATEGORIA 	|
| De 05 a 10 	| Infantil   	|
| De 11 a 15 	| Juvenil 		|
| De 16 a 20 	| Junior 		|
| De 21 a 25 	| Profissional 	|

Construa um programa que solicite o nome e a idade de um atleta e imprima a sua categoria.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int idade;

    // Solicitar o nome do atleta
    printf("Digite o nome do atleta: ");
    scanf("%s", nome);

    // Solicitar a idade do atleta
    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    // Determinar a categoria do atleta
    char categoria[15];

    if (idade >= 5 && idade <= 10) {
        strcpy(categoria, "Infantil");
    } else if (idade >= 11 && idade <= 15) {
        strcpy(categoria, "Juvenil");
    } else if (idade >= 16 && idade <= 20) {
        strcpy(categoria, "Junior");
    } else if (idade >= 21 && idade <= 25) {
        strcpy(categoria, "Profissional");
    } else {
        strcpy(categoria, "N/A"); // Categoria não encontrada
    }

    // Imprimir a categoria do atleta
    printf("Categoria do atleta %s: %s\n", nome, categoria);

    return 0;
}
