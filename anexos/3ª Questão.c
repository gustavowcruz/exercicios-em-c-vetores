/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>


#define QUANTIDADE 10


int main() {
    char nomes[QUANTIDADE][50];
    float notas[QUANTIDADE][4], medias[QUANTIDADE], somaMedias = 0.0, mediaGeral = 0.0;


    printf("Cálculo de médias de dez alunos(as):\n");


    for (int i = 0; i < QUANTIDADE; i++) {
        printf("\nAluno %d\n", i + 1);


        printf("Digite o nome do aluno(a): ");
        scanf("%s", nomes[i]);


        printf("Digite as 4 notas do aluno(a): ");
        scanf("%f %f %f %f", &notas[i][0], &notas[i][1], &notas[i][2], &notas[i][3]);


        medias[i] = (notas[i][0] + notas[i][1] + notas[i][2] + notas[i][3]) / 4.0;
        somaMedias += medias[i];
    }


    mediaGeral = somaMedias / QUANTIDADE;

    printf("Média Geral da turma: %.2f\n", mediaGeral);


    int acima = 0, abaixo = 0;


    for (int i = 0; i < QUANTIDADE; i++) {
        if (medias[i] >= mediaGeral) {
            printf("Aluno(a) %s ficou acima da média geral (%.2f)\n", nomes[i], medias[i]);
            acima++;
        } else {
            printf("Aluno(a) %s ficou abaixo da média geral (%.2f)\n", nomes[i], medias[i]);
            abaixo++;
        }
    }


    printf("\nTotal de alunos acima da média: %d\n", acima);
    printf("Total de alunos abaixo da média: %d\n", abaixo);


    return 0;
}

