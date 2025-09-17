/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeroInicial, numeroFinal, soma = 0;
    
    printf("Digite o primeiro número do Intervalo: ");
    scanf("%d", &numeroInicial);
    
    printf("Digite o último número do intervalo: ");
    scanf("%d", &numeroFinal);
    
    if (numeroInicial > numeroFinal) {
        int temp = numeroInicial;
        numeroInicial = numeroFinal;
        numeroFinal = temp;
        
    }
    
    for (int i = numeroInicial; i <= numeroFinal; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    
    printf("A soma dos números pares entre %d e %d é: %d\n", numeroInicial, numeroFinal, soma);
    
    return 0;
}
