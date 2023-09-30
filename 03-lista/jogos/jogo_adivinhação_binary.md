# Jogo de Adivinhação - Busca Binária

Bem-vindo ao "Jogo de Adivinhação". Neste jogo, você terá a oportunidade de testar sua habilidade em adivinhar um número secreto entre 1 e 100. Sua tarefa é adivinhar o número correto com o menor número de tentativas possível. Nesta versão do jogo, você usará o algoritmo de busca binária para adivinhar o número secreto.

**Instruções:**

 - O computador selecionará aleatoriamente um número entre 1 e 100 e o manterá em segredo.
 - Sua missão é adivinhar o número secreto.
 - Você pode fazer quantas tentativas forem necessárias para acertar o número.
 - Após cada tentativa, o computador lhe dará uma dica se o número secreto é maior ou menor do que o seu palpite.
 - O jogo continuará até você adivinhar o número correto.
 - Quando você adivinhar corretamente, o jogo exibirá o número secreto e informará quantas tentativas você levou para acertar.
 - Você pode optar por jogar novamente se desejar.
 - Você deve implementar o algoritmo de busca binária para adivinhar o número secreto.

Comece criando um novo projeto em C no seu ambiente de desenvolvimento preferido (por exemplo, Code::Blocks, Dev-C++, Visual Studio Code com extensão C/C++, etc.).

## Passo 1: Inclua as bibliotecas necessárias

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```

## Passo 2: Defina as constantes

```c
#define MAX_TENTATIVAS 7
#define MIN 1
#define MAX 100
```

## Passo 3: Defina as variáveis globais

```c
int numeroSecreto;
int numeroTentativas;
```

## Passo 4: Defina os protótipos das funções

```c
void inicializarJogo();
void jogar();
void finalizarJogo();
```

## Passo 5: Implemente a função `main()`

```c
int main() {
    inicializarJogo();
    jogar();
    finalizarJogo();
    return 0;
}
```

## Passo 6: Implemente a função `inicializarJogo()`

```c
void inicializarJogo() {
    srand(time(NULL));
    numeroSecreto = rand() % MAX + MIN;
    numeroTentativas = 0;
}
```

## Passo 7: Implemente a função `jogar()`

```c
void jogar() {
    int palpite;
    do {
        printf("Digite um numero entre %d e %d: ", MIN, MAX);
        scanf("%d", &palpite);
        numeroTentativas++;
        if (palpite < numeroSecreto) {
            printf("O numero secreto e maior que %d\n", palpite);
        } else if (palpite > numeroSecreto) {
            printf("O numero secreto e menor que %d\n", palpite);
        }
    } while (palpite != numeroSecreto && numeroTentativas < MAX_TENTATIVAS);
}
```

## Passo 8: Implemente a função `finalizarJogo()`

```c
void finalizarJogo() {
    if (palpite == numeroSecreto) {
        printf("Parabens! Voce acertou o numero secreto %d em %d tentativas.\n", numeroSecreto, numeroTentativas);
    } else {
        printf("Que pena! Voce excedeu o numero maximo de tentativas.\n");
    }
}
```

## Passo 9: Execute e teste o programa

O programa deve funcionar como mostrado abaixo:

```
Digite um numero entre 1 e 100: 50
O numero secreto e maior que 50
Digite um numero entre 1 e 100: 75
O numero secreto e maior que 75
Digite um numero entre 1 e 100: 87
O numero secreto e menor que 87
Digite um numero entre 1 e 100: 81
O numero secreto e menor que 81
Digite um numero entre 1 e 100: 78
O numero secreto e maior que 78
Digite um numero entre 1 e 100: 79
Parabens! Voce acertou o numero secreto 79 em 6 tentativas.
```

## Passo 10: Implemente a função `jogar()` usando busca binária

```c
void jogar() {
    int palpite;
    int min = MIN;
    int max = MAX;
    do {
        palpite = (min + max) / 2;
        printf("Digite um numero entre %d e %d: ", min, max);
        scanf("%d", &palpite);
        numeroTentativas++;
        if (palpite < numeroSecreto) {
            printf("O numero secreto e maior que %d\n", palpite);
            min = palpite + 1;
        } else if (palpite > numeroSecreto) {
            printf("O numero secreto e menor que %d\n", palpite);
            max = palpite - 1;
        }
    } while (palpite != numeroSecreto && numeroTentativas < MAX_TENTATIVAS);
}
```

## Passo 11: Execute e teste o programa

O programa deve funcionar como mostrado abaixo:

```
Digite um numero entre 1 e 100: 50
O numero secreto e maior que 50
Digite um numero entre 51 e 100: 75
O numero secreto e maior que 75
Digite um numero entre 76 e 100: 87
O numero secreto e menor que 87
Digite um numero entre 76 e 86: 81
O numero secreto e menor que 81
Digite um numero entre 76 e 80: 78
O numero secreto e maior que 78
Digite um numero entre 79 e 80: 79
Parabens! Voce acertou o numero secreto 79 em 6 tentativas.
```

## Passo 12: Implemente a função `jogar()` usando busca binária recursiva

```c
void jogar() {
    int palpite;
    int min = MIN;
    int max = MAX;
    do {
        palpite = (min + max) / 2;
        printf("Digite um numero entre %d e %d: ", min, max);
        scanf("%d", &palpite);
        numeroTentativas++;
        if (palpite < numeroSecreto) {
            printf("O numero secreto e maior que %d\n", palpite);
            min = palpite + 1;
        } else if (palpite > numeroSecreto) {
            printf("O numero secreto e menor que %d\n", palpite);
            max = palpite - 1;
        }
    } while (palpite != numeroSecreto && numeroTentativas < MAX_TENTATIVAS);
}
```

## Passo 13: Execute e teste o programa

O programa deve funcionar como mostrado abaixo:

```
Digite um numero entre 1 e 100: 50
O numero secreto e maior que 50
Digite um numero entre 51 e 100: 75
O numero secreto e maior que 75
Digite um numero entre 76 e 100: 87
O numero secreto e menor que 87
