/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int ponto1, ponto2, soma=0;
int main()
{
    printf("Digite o números para o primeiro ponto: \n");
    scanf("%d", &ponto1);
    
    printf("digite o valor para o segundo ponto do intervalo: \n");
    scanf("%d", &ponto2);
    
    for(int i = ponto1; i <= ponto2; i++){
        if(i % 2 == 0){
            soma+=i;
        }
    }
    
    printf("Soma dos pares no intervalo: %d", soma);
    
    return 0;
}
