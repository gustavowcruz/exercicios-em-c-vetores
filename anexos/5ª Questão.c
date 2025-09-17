/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define TAMANHO 5

int vetor1[5], vetor2[5], var_temporaria;
int main()
{
    printf("Digite os números para o primeiro vetor: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor1[i]);
    }
    
    printf("Digite os números para o segundo vetor: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor2[i]);
    }
    
    for(int i = 0; i < 5; i++){
        var_temporaria = vetor1[i];
        vetor1[i] = vetor2[i];
        vetor2[i] = var_temporaria;
    }
    
    printf("Valores do vetor 1: ");
    for(int i = 0; i < 5;i++){
        printf("%d", vetor1[i]);
    }
    
    printf("\nValores do vetor 2: ");
    for(int i = 0; i < 5; i++){
        printf("%d", vetor2[i]);
    }
    
}
