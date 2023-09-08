# Prova de Algoritmos e Programação em C

> Nome do aluno: ____________________________________
> Nome do aluno: ____________________________________

Essa é a pimeira prova da disciplina de Algoritmos e Programação em C. A prova vai abordar os seguintes assuntos:

- Tipos de dados
- Operadores
- Estruturas de controle

Cada questão tem o mesmo peso.

## Questão 1

Escreva um programa que leia um número inteiro e imprima o seu antecessor e o seu sucessor. Por exemplo, se o número lido for 10, o programa deve imprimir:

```
O antecessor de 10 é 9
O sucessor de 10 é 11
```
Resposta:
```c
#include <stdio.h>

int main() {
    ________ numero;
    printf("Digite um número inteiro: ");
    scanf(_____________________________);

    printf("O antecessor de %d é %d\n", __________________________);
    printf("O sucessor de %d é %d\n", ____________________________);
    return 0;
}
```

## Questão 2

Escreva um programa em C que leia o nome, matrícula, idade e três notas de um aluno. Calcule a média ponderada do aluno, considerando que o peso para a primeira nota é 2, para a segunda nota é 3 e, para a terceira nota, 5. Imprima o nome, a matrícula, a idade e a média do aluno. Impima também a mensagem "Aprovado" se a média for maior ou igual a 7, "Recuperação" se a média for maior ou igual a 5 e menor que 7 e "Reprovado" se a média for menor que 5. Por exemplo, se o usuário digitar:

```
Nome: João
Matrícula: 123
Idade: 20
Nota 1: 5
Nota 2: 6
Nota 3: 7
Média: 6.2
Aluno em Recuperação
```

Resposta: 
```c
#include _________________________

______________ main() {
    __________ nome[100];
    __________ matricula;
    __________ idade;
    float nota1, nota2, nota3;
    __________ media;

    printf("Nome: ");
    scanf("%s", ________________);

    printf("Matrícula: ");
    scanf("%d", ________________);

    printf("Idade: ");
    scanf("%d", ________________);

    printf("Nota 1: ");
    scanf("%f", ________________);

    printf("Nota 2: ");
    scanf("%f", ________________);

    printf("Nota 3: ");
    scanf("%f", ________________);

    media = (_________________________________) / 10;

    printf("Média: %.2f\n", media);

    if (______________________) {
        printf("Aluno Aprovado\n");
    } else if (_______________________) {
        printf("Aluno em Recuperação\n");
    } else {
        printf("Aluno Reprovado\n");
    }

    return 0;
}
```

## Questão 3

Escreva um programa em C que solicita ao usuário um número inteiro e imprime se ele é par ou ímpar. Por exemplo, se o usuário digitar 10, o programa deve imprimir:

```
10 é par
```
Resposta: 
```c
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (______________________) {
        printf("%d é par\n", numero);
    } else {
        printf("%d é ímpar\n", numero);
    }
    return 0;
}
```

## Questão 4

Escreva um programa em C para verificar se um determinado ano é bissexto. Um ano é bissexto se ele for divisível por 4, mas não por 100. Também são bissextos os divisíveis por 400. Por exemplo, 1992, 1996 e 2000 são bissextos, mas 1993 e 1900 não são. O programa deve solicitar ao usuário um ano e imprimir se ele é bissexto ou não. Por exemplo, se o usuário digitar 1996, o programa deve imprimir:

```
1996 é bissexto
```
Resposta: 
```c
#include <stdio.h>

int main() {
    _______ ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    ________ (_________________________) {
        printf("%d é bissexto\n", ano);
    } _______ {
        printf("%d não é bissexto\n", ano);
    }
    return 0;
}
```


## Questão 5

Escreva um programa em C que solicita ao usuário um número inteiro e verifica se ele é divisível por 3 e por 5. Por exemplo, se o usuário digitar 15, o programa deve imprimir:

```
15 é divisível por 3 e por 5
```
Resposta: 
```c
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (__________________________) {
        printf(__________________________________________________);
    } else {
        printf("%d não é divisível por 3 e por 5\n", numero);
    }
    return 0;
}
```

## Questão 6

Escreva um programa em C para recebe trẽs números inteiros e verifica se eles podem ser os comprimentos dos lados de um triângulo. Se os lados formarem um triângulo, o programa deve imprimir se ele é equilátero, isósceles ou escaleno.

 - *Equilátero*: todos os lados são iguais
 - *Isósceles*: apenas dois lados são iguais
 - *Escaleno*: todos os lados são diferentes

Por exemplo, se o usuário digitar 3, 3 e 3, o programa deve imprimir:

```
3, 3 e 3 formam um triângulo equilátero
```
Resposta:
```c
#include <stdio.h>

_________________________ {
    ____________ a, b, c;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", _________________________________);

    if (__________________________) {
        printf("%d, %d e %d formam um triângulo equilátero\n", a, b, c);
    } else if (__________________________) {
        printf("%d, %d e %d formam um triângulo isósceles\n", a, b, c);
    } else if (__________________________) {
        printf("%d, %d e %d formam um triângulo escaleno\n", a, b, c);
    } else {
        printf("%d, %d e %d não formam um triângulo\n", a, b, c);
    }

    ______________ 0;
}
```

## Questão 7

Escreva um programa em C que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. Por exemplo, se o usuário digitar 10, 20, 30 e 40, o programa deve imprimir:

```
Maior valor = 40
Menor valor = 10
```
Resposta:
```c
#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Digite quatro valores: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int maior = a;
    int menor = a;

    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________
    _______________________________________________

    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d\n", menor);
    return 0;
}
```

## Questão 8

Escreva um programa em C que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite um número fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número. Por exemplo, se o usuário digitar 2, o programa deve imprimir:

```
Fevereiro
```
Resposta:
```c
#include <stdio.h>

int main() {

    int ______________________;
    printf("Digite um número entre 1 e 12: ");
    
    scanf(________________________________);

    switch (mes) {
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
        _________________________________________________
    }
    return 0;
}
```

Boa prova!