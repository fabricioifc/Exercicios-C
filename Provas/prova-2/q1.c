#include <stdio.h>

int main() {

    int n;

    printf("Escreva um número natural: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i+=2) {
        printf("%d ");
    }

    return 0;
}