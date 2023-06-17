/**
Em uma turma há 10 alunos. Cada aluno tem 2 notas. 
Um professor precisa calcular a média das duas notas de cada aluno. 
Crie um programa que resolva este problema.
*/
#include <stdio.h>

int main() {
    const int numAlunos = 10;

    // Calculando as médias dos alunos
    for (int i = 0; i < numAlunos; i++) {
        float nota1, nota2;
        printf("Digite as duas notas do aluno %d: ", i+1);
        scanf("%f %f", &nota1, &nota2);
        
        float media = (nota1 + nota2) / 2.0;
        printf("A media do aluno %d é: %.2f\n", i+1, media);
    }

    return 0;
}
