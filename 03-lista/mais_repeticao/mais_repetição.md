# Lista de Exercícios 4: Mais repetição com C

1. Faça um programa que exiba 20 vezes na tela a mensagem "Eu gosto de estudar Algoritmos!", usando a estrutura de repetição `for`.

2. Faça um programa que leia o nome do usuário e um número natural maior que zero. Escreva o nome do usuário N 
vezes na tela, onde N é o número lido. Use algum tipo de estrutura de repetição. Caso o usuário digite um número menor ou igual a zero, o programa deve pedir para que ele digite um número válido.

3. Faça um programa que leia uma sequência de números naturais. Caos o usuário digite um número negativo, o programa deve parar de ler os números e imprimir a soma dos números lidos até o momento.

4. Faça um programa que leia a idade de 5 pessoas. Calcule e imprime a soma, a média e a quantidade de pessoas com idade maior ou igual a 18 anos.

5. Faça um programa para a mega-sena. O programa deve sortear 6 números aleatórios entre 1 e 60 e armazená-los. Em seguida, deve pedir para o usuário digitar 6 números entre 1 e 60. O programa deve verificar quantos números o usuário acertou e imprimir o resultado. Dica: use o comando `rand()` para gerar números aleatórios. Para usar esse comando, você deve incluir a biblioteca `stdlib.h` no seu programa.

6. Faça um programa que leia um número n e mostre na tela os n primeiros números primos. Um número é primo se ele é divisível apenas por 1 e por ele mesmo. Caso o usuário digite um número menor ou igual a zero, o programa deve pedir para que ele digite um número válido.

Resposta: 
```c
#include <stdio.h>

int main(void) {
    int n, i, j, primo;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        primo = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
```

7. Faça um programa para gerar os n primeiros termos da seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ...

Resposta:
```c
#include <stdio.h>

int main(void) {
    int n, i, a, b, c;

    printf("Digite um número: ");
    scanf("%d", &n);

    a = 1;
    b = 1;
    printf("%d %d ", a, b);
    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
```