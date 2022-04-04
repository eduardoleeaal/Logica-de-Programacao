/*
09. Criar um programa que leia 2 números. Caso o primeiro número lido seja maior que o segundo,
imprima na tela o primeiro número menos o segundo, caso contrário mostre a soma dos dois números.

entrada de dados:
    numero1
    numero2
saida de dados:
    resultado da subtraçãp
    resultado da soma
processamento:
    obter n1
    obter n2
    SE n1 > n2
        calcular res
            res = n1 - n2
        mostrar res
    SENÃO
        calcular res
            res = n1 + n2
        mostrar res


 */
#include <stdio.h>
#include <stdlib.h>

int main (){

    int n1, n2, res;


    printf("\nDigite um numero: ");
    scanf("%d", &n1);

    printf("\nDigite outro numero: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        res = n1 - n2;
            printf("\nA subtracao dos dois numeros e: %d \n", res);
        

    }
    else{
        res = n1 + n2;
            printf("\nA soma dos dois numeros e: %d \n", res);
    }


    system("pause");
    return 0;
}