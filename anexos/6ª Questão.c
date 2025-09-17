/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO], vetor2[TAMANHO], vetor3[TAMANHO];
    int i, j, k = 0;


    printf("Digite 10 números para o Primeiro vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Primeiro Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }


    printf("\nDigite 10 numeros para o segundo vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Segundo Vetor[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            if (vetor[i] == vetor2[j]) {
                int jaExiste = 0;
                for (int x = 0; x < k; x++) {
                    if (vetor3[x] == vetor[i]) {
                        jaExiste = 1;
                        break;
                    }
                }
                if (!jaExiste) {
                    vetor3[k] = vetor[i];
                    k++;
                }
            }
        }
    }


    printf("\nNúmeros repetidos nos dois vetores:\n");
    if (k == 0) {
        printf("Nenhum número repetido encontrado.\n");
    } else {
        for (i = 0; i < k; i++) {
            printf("%d ", vetor3[i]);
        }
        printf("\n");
    }


    return 0;
}
