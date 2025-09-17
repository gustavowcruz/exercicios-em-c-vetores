/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define TAMANHO 10

int main() {
    int numero[TAMANHO];
    int contagem[11] = {0};
    int i;

    printf("Digite 10 números inteiros entre 1 e 10:\n");
    for (i = 0; i < TAMANHO; i++) {
        do {
            printf("Número %d: ", i + 1);
            scanf("%d", &numero[i]);
            if (numero[i] < 1 || numero[i] > 10) {
                printf("Valor inválido! Digite um número entre 1 e 10.\n");
            }
        } while (numero[i] < 1 || numero[i] > 10);


        contagem[numero[i]]++;
    }


    printf("\nQuantidade de vezes que cada número apareceu:\n");
    for (i = 1; i <= 10; i++) {
        if (contagem[i] > 0) {
            printf("Número %d: %d vezes\n", i, contagem[i]);
        }
    }


    return 0;
}
