/*
19. Escreva um programa em linguagem C que pergunte para a pessoa informar dois números inteiros e
depois forneça o resultado da soma, subtração, multiplicação e divisão entre os números informados.
Mostre o resultado na tela de forma clara usando a formatação correta do comando printf.

entrada de dados:
    dois numeros inteiros
saida de dados:
    soma
    subtração
    multiplicação
    divisão
processamento:
    obter n1 e n2
        calcular n1 + n2
        calcular n1 - n2
        calcular n1 * n2
        calcular n1 / n2
    mostrar resultados
*/

#include <stdio.h>

int main(){

    int n1, n2, soma, subt, mult;
    float divs;
    

    printf("\nEscreva um numero inteiro: ");
    scanf("%d",&n1);

    printf("\nEscreva outro numero inteiro: ");
    scanf("%d",&n2);

        soma = n1 + n2;
        subt = n1 - n2;
        mult = n1 * n2;
        divs = (float)n1 / n2;



    printf("\nA soma dos numeros %d e %d resulta em: %d", n1, n2, soma);
    printf("\nA subtracao dos numeros %d e %d resulta em: %d", n1, n2, subt);
    printf("\nA multiplicacao dos numeros %d e %d resulta em: %d", n1, n2, mult);
    printf("\nA divisao dos numeros %d e %d resulta em: %0.1f \n", n1, n2, divs);



    system("pause");
    return 0;
}