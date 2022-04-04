/* 
06) Para 2 números quaisquer, informar:
a) o maior
b) o menor
c) se são iguais

entrada de dados:
    dois numeros quaisquer
saida de dados:
    o maior
    o menor
    se são iguais
processamento:
    obter dois numeros quaisquer
    SE n1 > n2
        mostrar n1 é maior que n2
    SE n1 < n2
        mostrar n2 é maior que n1
    SE n1 = n2
        mostrar n1 é igual ao n2
*/

#include <stdio.h>

    int main (){

    float n1, n2;

    printf("\nDigite um numero qualquer: ");
    scanf("%f", &n1);

    printf("\nDigite outro numero: ");
    scanf("%f", &n2);

    if (n1 > n2)
        printf("\nO %.1f e maior que o %.1f\n", n1, n2);

    else
        if (n1 < n2)
            printf("\nO %.1f e maior que o %.1f\n", n2, n1);

    else
        printf("\nOs numeros %.1f e %.1f sao iguais\n", n1, n2);


    system("pause");
    return 0;
}