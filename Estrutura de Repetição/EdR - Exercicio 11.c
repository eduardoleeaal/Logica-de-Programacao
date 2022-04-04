/* 11) Obter um valor qualquer e perguntar ao usuário se este valor é em dólares ou em reais. Caso sejam
dólares, convertê-los para reais. Se forem reais, convertê-los para dólares. Repetir a operação até que a
soma dos valores informados seja maior do que 10.000,00.
 */



#include <stdio.h>
#include <stdlib.h>

int main(){

    int moeda;
    float valor, soma, cotacao, valorTotal;

    soma = 0;

    while (soma <= 10000){
        printf("\nDigite um valor para converte-lo para DOLAR ou REAL: ");
        scanf("%f", &valor);
        soma = soma + valor;
        do{
            printf("\nInforme o tipo da moeda 1-DOLAR ou 2-REAL: ");
            scanf("%d", &moeda);
        } while((moeda != 2) && (moeda != 1));
        printf("\nInforme a cotacao do dolar: ");
        scanf("%f", &cotacao);

        switch (moeda)
        {
        case 1:
            valorTotal = valor * cotacao;
            printf("\nUS$%.2f serao R$%.2f", valor, valorTotal);
            break;
        case 2:
            valorTotal = valor / cotacao;
            printf("\nR$%.2f serao R$%.2f", valor, valorTotal);
            break;
        }
    }            
    return 0;
}