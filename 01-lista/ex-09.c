/**
Escreva um programa que calcule a resistência equivalente de um 
circuito série com três resistores. O programa deve solicitar ao 
usuário os valores dos resistores e exibir o valor da resistência equivalente.
*/
#include <stdio.h>

int main() {
    float resistor1, resistor2, resistor3;
    float resistencia_equivalente;

    printf("Calculo da Resistencia Equivalente em um Circuito Serie\n");

    printf("Digite o valor do primeiro resistor: ");
    scanf("%f", &resistor1);

    printf("Digite o valor do segundo resistor: ");
    scanf("%f", &resistor2);

    printf("Digite o valor do terceiro resistor: ");
    scanf("%f", &resistor3);

    resistencia_equivalente = resistor1 + resistor2 + resistor3;

    printf("A resistencia equivalente do circuito e: %.2f\n", resistencia_equivalente);

    return 0;
}
