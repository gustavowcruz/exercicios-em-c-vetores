/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>


#define MAX_ALUNOS 15


int main() {
    char nome;
    int matricula[MAX_ALUNOS], faltas[MAX_ALUNOS], periodo[MAX_ALUNOS];
    float media[MAX_ALUNOS];


    int quantidade = 0;
    int opcao;


    do {
        printf("1 - Inserir Aluno\n");
        printf("2 - Pesquisar Aluno\n");
        printf("3 - Remover Aluno\n");
        printf("4 - Alterar dados do Aluno\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcão: ");
        scanf("%d", &opcao);


        if (opcao == 1) {
            if (quantidade < MAX_ALUNOS) {
                printf("Digite o nome do Aluno(a): ");
                scanf("%s", &nome);
                printf("Digite a matrícula: ");
                scanf("%d", &matricula[quantidade]);
                printf("Digite a média: ");
                scanf("%f", &media[quantidade]);
                printf("Digite o período: ");
                scanf("%d", &periodo[quantidade]);
                printf("Digite o número de faltas: ");
                scanf("%d", &faltas[quantidade]);
                quantidade++;
                printf("Aluno inserido com sucesso!\n");
            } else {
                printf("Limite máximo de alunos atingido!\n");
            }


        } else if (opcao == 2) {
            int mat, i, encontrado = 0;
            printf("Digite a matrícula do aluno: ");
            scanf("%d", &mat);
            for (i = 0; i < quantidade; i++) {
                if (matricula[i] == mat) {
                    printf("Matrícula: %d\n", matricula[i]);
                    printf("Média: %.2f\n", media[i]);
                    printf("Período: %d\n", periodo[i]);
                    printf("Faltas: %d\n", faltas[i]);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado)
                printf("Aluno não encontrado!\n");


        } else if (opcao == 3) {
            int mat, i, j, encontrado = 0;
            printf("Digite a matrícula do aluno a remover: ");
            scanf("%d", &mat);
            for (i = 0; i < quantidade; i++) {
                if (matricula[i] == mat) {
                    for (j = i; j < quantidade - 1; j++) {
                        matricula[j] = matricula[j+1];
                        media[j] = media[j+1];
                        periodo[j] = periodo[j+1];
                        faltas[j] = faltas[j+1];
                    }
                    quantidade--;
                    encontrado = 1;
                    printf("Aluno removido com sucesso!\n");
                    break;
                }
            }
            if (!encontrado)
                printf("Aluno não encontrado!\n");


        } else if (opcao == 4) {
            int mat, i, encontrado = 0;
            printf("Digite a matricula do aluno a alterar: ");
            scanf("%d", &mat);
            for (i = 0; i < quantidade; i++) {
                if (matricula[i] == mat) {
                    printf("Nova média: ");
                    scanf("%f", &media[i]);
                    printf("Novo período: ");
                    scanf("%d", &periodo[i]);
                    printf("Novo número de faltas: ");
                    scanf("%d", &faltas[i]);
                    printf("Dados alterados com sucesso!\n");
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado)
                printf("Aluno não encontrado!\n");


        } else if (opcao == 5) {
            printf("Saindo...\n");
        } else {
            printf("Opcao inválida!\n");
        }


    } while (opcao != 5);


    return 0;
}

