/**
A jornada de trabalho semanal de um funcionário é de 40 horas. 
O funcionário que trabalhar mais de 40 horas receberá hora extra, 
cujo cálculo é o valor da hora regular com um acréscimo de 50%. 
Escreva um algoritmo que leia o número de horas trabalhadas em um mês, 
o salário por hora e escreva o salário total do funcionário, que deverá 
ser acrescido das horas extras, caso tenham sido trabalhadas 
(considere que o mês possua 4 semanas exatas).
*/
#include <stdio.h>

#define HORAS_SEMANAIS 40
#define SEMANAS_NO_MES 4
#define ACRESCIMO_HORA_EXTRA 0.5

int main() {
    float horasTrabalhadas, salarioHora, salarioTotal, salarioHoraExtra, horasExtras;

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor do salário por hora: ");
    scanf("%f", &salarioHora);

    if (horasTrabalhadas > HORAS_SEMANAIS * SEMANAS_NO_MES) {
        horasExtras = horasTrabalhadas - (HORAS_SEMANAIS * SEMANAS_NO_MES);
        salarioHoraExtra = salarioHora + (salarioHora * ACRESCIMO_HORA_EXTRA);
        salarioTotal = (HORAS_SEMANAIS * SEMANAS_NO_MES * salarioHora) + (horasExtras * salarioHoraExtra);
    } else {
        salarioTotal = horasTrabalhadas * salarioHora;
    }

    printf("Salário total do funcionário: %.2f\n", salarioTotal);

    return 0;
}
