/* 8) Para cada um de 10 números fornecidos pelo usuário informar se este nº é par, ímpar, positivo ou
negativo.
 */




#include <stdio.h>


int main(){

    int n1, contador;



    for (contador = 1; contador <= 10; contador++)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &n1);

        if ((n1 % 2 == 0) && (n1 >= 0))
        {
            printf("\nO numero %d e: \n-POSITIVO \n-PAR\n\n", n1);
        }
        else
            if((n1 % 2 != 0) && (n1 >= 0)){
                printf("\nO numero %d e: \n-POSITIVO \n-IMPAR\n\n", n1);
            }
            else
                if((n1 % 2 == 0) && (n1 < 0)){
                    printf("\nO numero %d e: \n-NEGATIVO \n-PAR\n\n", n1);
                }
                else
                    if((n1 % 2 != 0) && (n1 < 0)){
                        printf("\nO numero %d e: \n-NEGATIVO \n-IMPAR\n\n", n1);
                    }
                    

            // PRINTF PARA ORGANIZAÇÃO //
        printf("=================================================");
    }
    
    return 0;
}