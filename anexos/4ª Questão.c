/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


#define TAMANHO 15


int main() {
    int numero[TAMANHO];
    int i, j, temp;

    printf("Digite 15 números inteiros:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero[i]);
    }

    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - 1 - i; j++) {
            if (numero[j] > numero[j + 1]) {
                temp = numero[j];
                numero[j] = numero[j + 1];
                numero[j + 1] = temp;
            }
        }
    }

    printf("\nNúmeros em ordem crescente:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", numero[i]);
    }
    printf("\n");


    return 0;
}
