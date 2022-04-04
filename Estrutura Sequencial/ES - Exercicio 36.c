/*
36. Calcular a diferença em dias, meses e anos entre duas datas fornecidas no formato DD MM AAAA
(DD = dia; MM =mês; AAAA = ano com quatro dígitos)

 */

#include <stdio.h>

int main (){

    int d1, m1, a1, d2, m2, a2, d3, m3, a3, dif;
    
    printf("\nDigite a data mais recente no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &d1, &m1, &a1);
    
    printf("\nDigite a data mais antiga no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &d2, &m2, &a2);
    
    dif = (d1 * 365 + m1 * 30 + a1) - (d2 * 365 + m2 * 30 + a2);
    
    d3 = dif / 365;
    m3 = dif % 365 / 30;
    a3 = dif % 365 % 30;

    printf("\nA diferenca e de %d dias, %d meses e %d anos \n", d3, m3, a3);

    system("pause");
    return 0;
}