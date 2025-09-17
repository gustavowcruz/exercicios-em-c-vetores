/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define TAMANHO 5

int main() {
    int vetor[TAMANHO], vetor2[TAMANHO];
    int i, temp;

    printf("Digite 5 números para o primeiro vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Primeiro Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }


    printf("\nDigite 5 números para o segundo vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Segundo Vetor[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }


    for (i = 0; i < TAMANHO; i++) {
        temp = vetor[i];
        vetor[i] = vetor2[i];
        vetor2[i] = temp;
    }

    printf("\nPrimeiro Vetor após a troca:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }


    printf("\nSegundo Vetor após a troca:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor2[i]);
    }


    printf("\n");
    return 0;
}
