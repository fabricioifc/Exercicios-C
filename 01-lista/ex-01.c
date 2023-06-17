/*Faça um algoritmo para calcular a área de uma circunferência, 
considerando a  fórmula ÁREA = π * RAIO². 

Utilize as variáveis ÁREA e RAIO, a constante π (pi = 3,14159) 
e os operadores aritméticos de multiplicação.
*/

#include <stdio.h>

#define PI 3.14159

int main() {
    double raio, area;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;

    printf("A área da circunferência é: %.2lf\n", area);

    return 0;
}
