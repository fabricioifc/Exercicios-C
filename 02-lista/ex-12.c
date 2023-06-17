/**
Escreva um programa que solicite ao usuário a resistência e a corrente de um circuito e 
calcule a tensão utilizando a fórmula V = R * I. Verifique se os valores informados são válidos.
*/
#include <stdio.h>

int main() {
    float resistencia, corrente, tensao;

    printf("Calculo da Tensao em um Circuito\n");

    printf("Digite o valor da resistencia (em ohms): ");
    scanf("%f", &resistencia);

    printf("Digite o valor da corrente (em amperes): ");
    scanf("%f", &corrente);

    if (resistencia >= 0 && corrente >= 0) {
        tensao = resistencia * corrente;
        printf("A tensao no circuito eh: %.2f volts\n", tensao);
    } else {
        printf("Valores invalidos. A resistencia e a corrente devem ser nao negativas.\n");
    }

    return 0;
}
