/* 10) Para um grupo indeterminado de 2 números quaisquer, informar para cada grupo:
a) o maior
b) o menor
c) se são iguais */



#include <stdio.h>


int main(){

    int n1, n2;

    do
    {
        printf("\nDigite um numero: ");
        scanf("%d", &n1);
        printf("\nDigite outro numero: ");
        scanf("%d", &n2);
        
        if (n1 > n2){
            printf("\n\nO maior numero e: %d\n", n1);
            printf("\n\nO menor numero e: %d\n", n2);
        }
        else 
            if(n1 < n2){
                printf("\nO maior numero e: %d\n", n2);
                printf("\nO menor numero e: %d\n", n1);
            }
            else{
                printf("\nOs numeros %d e %d sao iguais\n\n", n1, n2);
            }
            
            // PRINTF PARA ORGANIZAÇÃO //
            printf("\n=================================");
    } while (1);    // Quando é while(1), ele gera um loop infinito 
    

    return 0;
}