/*
13) Crie um programa que leia 3 números inteiros diferentes e imprima os números em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){


    int n1, n2, n3;


    printf("\nEscreva um numero: ");
    scanf("%d", &n1);
    printf("\nEscreva outro numero: ");
    scanf("%d", &n2);
    printf("\nEscreva outro numero: ");
    scanf("%d", &n3);


    if ((n2 > n3)&&(n1 > n2)){
        printf("\nOs numeros em sequencia: %d, %d, %d. \n", n3, n2, n1);
}
    else
        if ((n3 > n2)&&(n1 > n3)){
            printf("\nOs numeros em sequencia: %d, %d, %d. \n", n2, n3, n1);
}
    else
        if ((n1 > n3)&&(n2 > n1)){
            printf("\nOs numeros em sequencia: %d, %d, %d. \n", n3, n1, n2);
}
    else
        if ((n3 > n1)&&(n2 > n3)){
            printf("\nOs numeros em sequencia: %d, %d, %d. \n", n1, n3, n2);
}
    else
        if ((n1 > n2)&&(n3 > n1)){
            printf("\nOs numeros em sequencia: %d, %d, %d. \n", n2, n1, n3);
}
    else{
        printf("\nOs numeros em sequencia: %d, %d, %d. \n", n1, n2, n3);
}


    return 0;
}