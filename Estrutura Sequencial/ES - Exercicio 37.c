/*
37. Calcular a diferença em horas, minutos e segundos para dois horários no mesmo dia, obtidos no
formato HH MM SS (HH = horas; MM = minutos; SS = segundos)

 */

#include <stdio.h>

int main (){

    int h1, m1, s1, h2, m2, s2, h3, m3, s3, dif;

    printf("\nDigite o horario mais recente no formato HH:MM:SS: ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("\nDigite a data mais antiga no formato HH:MM:SS: ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    dif = (h1 * 3600 + m1 * 60 + s1) - (h2 * 3600 + m2 * 60 + s2);

    h3 = dif / 3600;
    m3 = dif % 3600 / 60;
    s3 = dif % 3600 % 60;

    printf("\nA diferenca e de %d horas, %d minutos e %d segundos \n", h3, m3, s3);

    system("pause");
    return 0;
}