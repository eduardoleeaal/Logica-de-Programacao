/*
10) Escreva um programa que leia dois números. Caso a soma dos dois números apresente um número
par e seja maior que 100 mostre a metade da soma na tela, se a soma for um número par menor que
100, mostre a soma multiplicada por 2. Se a soma resultar em um número ímpar apenas apresente a
soma.
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int n1, n2;
    float res;

    printf("\nEscreva um numero: ");
    scanf("%d", &n1);

    printf("\nEscreva outro numero: ");
    scanf("%d", &n2);


    if ((n1 + n2 > 100)&&((n1 + n2) % 2 == 0 )){                // && representa "AND", ou seja, o codigo verifica as duas condições
        res = (n1 + n2) / (float)2;                             // Se AMBAS forem verdadeiras o comando será executado
        printf("\nO resultado e: %.1f \n", res);
}
    else
        if((n1 + n2 < 100)&&((n1 + n2) % 2 == 0 )){
            res = (n1 + n2) * (float)2;
            printf("\nO resultado e: %.1f\n", res);
}
    else{
        res = n1 + n2;
        printf("\nO resultado e: %.1f\n", res);
}

    system("pause");
    return 0;
}