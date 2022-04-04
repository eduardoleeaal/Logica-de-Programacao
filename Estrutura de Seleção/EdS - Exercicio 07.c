/* 
07) Obter um valor qualquer e perguntar ao usuário se este valor é em dólares ou em reais. Caso sejam
dólares, convertê-los para reais. Se forem reais, convertê-los para dólares.

entrada de dados:
    tipo da moeda
    valor monetario
    cotação do dolar
saida de dados:
    valor convertido para outra moeda
processamento:
    obter o tipo da moeda
    obter cotação do dolar
    obter a quantidade de dinheiro
        SE moeda = dolar
            mostrar valor / cotação
        SENÃO
            mostrar valor * cotação
    
*/

#include <stdio.h>


int main (){

    float valorM, qDolar, qReal, cota;
    int moeda;

    do{
        printf("\n[1] Dolar \n[2] Real\n");
        printf("\nDigite o numero que representa a sua moeda: ");
        scanf("%d", &moeda);
    }
    while ((moeda > 2) || (moeda <= 0));

    printf("\nDigite uma quantidade de valor monetario: ");
    scanf("%f", &valorM);

    printf("\nDigite a cotacao do dolar: ");
    scanf("%f", &cota);

    qReal = valorM * cota;
    qDolar = valorM / cota;


    switch(moeda){
        case 1:
        printf("\n$%0.2f Dolares convertidos em reais equivalem a R$%0.2f Reais \n", valorM, qReal);
        break;
        case 2:
        printf("\nR$%0.2f Reais convertidos em dolares equivalem a $%0.2f Dolares \n", valorM, qDolar);
        break;
    }
    /*
        if (moeda == 1){
            printf("\n%0.2f Dolares convertidos em reais equivalem a %0.2f Reais \n", valorM, qReal);
    }
        else{
            printf("\n%0.2f Reais convertidos em dolares equivalem a %0.2f Dolares \n", valorM, qDolar);
    }*/
    system("pause");
    return 0;
}