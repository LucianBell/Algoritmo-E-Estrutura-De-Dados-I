/*Faça um algoritmo que leia uma matriz 10 x 3 com as notas de dez alunos em três provas. O algoritmo deverá
mostrar um relatório com o número dos alunos (número da linha) e a prova em que cada aluno obteve a
menor nota. Ao final do relatório, deverá mostrar quantos alunos tiveram menor nota em cada uma das
provas: na prova 1, na prova 2 e na prova 3.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[10][3], atual, menorNota;
    int controle = 0, vetorMenorNota[10], controle1 = 0, menorNota1 = 0, menorNota2 = 0, menorNota3 = 0;

    while (controle < 10)
    {
        while (controle1 < 3)
        {
            printf("Insira a nota da prova %d para o aluno %d: ", controle1+1, controle+1);
            scanf("%f", &matriz[controle][controle1]);
            atual = matriz[controle][controle1];

            if (controle1 == 0) {
                menorNota = atual;
                vetorMenorNota[controle] = controle1;
            } else if (atual < menorNota) {
                menorNota = atual;
                vetorMenorNota[controle] = controle1;
            }
            
            controle1++;
        }
        printf("\n");
        controle++;
        controle1 = 0;
    }

    controle = 0;

    while (controle < 10)
    {
        printf("Aluno: %d # Menor nota: Prova %d\n", controle+1, vetorMenorNota[controle] + 1);
        
        if(vetorMenorNota[controle] == 0) {
            menorNota1++;
        } else if (vetorMenorNota[controle] == 1) {
            menorNota2++;
        } else {
            menorNota3++;
        }

        controle++;
    }

    printf("\n");
    printf("Quantidade de alunos com menor nota na prova 1: %d\n", menorNota1);
    printf("Quantidade de alunos com menor nota na prova 2: %d\n", menorNota2);
    printf("Quantidade de alunos com menor nota na prova 3: %d\n", menorNota3);

    return 0;
}
