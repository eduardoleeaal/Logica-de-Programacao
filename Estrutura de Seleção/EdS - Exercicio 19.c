/*19) Calcular o dia da semana de uma data entre 1 de março de 1700 e 28 de fevereiro de 2100, utilizando
o seguinte método: 

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int d, m, a, ds, g, f, delta, n, sem;

    printf("\nDigite uma data entre 1 de marco de 1700 e 28 de fevereiro de 2100 no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &d, &m, &a);

    if(m <= 2){
        g = a - 1;
        f = m + 13;
}
    else
        if(m > 2){
            g = a;
            f = m + 1;
}

    n = (int)(365.25 * g) + (int)(30.6 * f) - 621049 + d;

    if (n < 36523){
        delta = 2;
    }
        else
            if((n >= 36523)&&(n < 73048)){
                delta = 1;
        }
        else{
            delta = 0;
        }
    ds = round(((n/7.0)-(n/7)) * 7) + delta + 1;
    sem = ds % 7;

    if (ds % 7 == 0){
        printf("\nSabado\n");
    }
        else
            if(ds % 7 == 1){
                printf("\nDomingo\n\n");
            }
        else
            if(ds % 7 == 2){
                printf("\nSegunda-Feira\n\n");
        }
        else
            if(ds % 7 == 3){
                printf("\nTerca-Feira\n\n");
        }
        else
            if(ds % 7 == 4){
                printf("\nQuarta-Feira\n\n");
        }
        else
            if(ds % 7 == 5){
                printf("\nQuinta-feira\n\n");
        }
        else{
            printf("\nSexta-feira\n\n");
        }


    return 0;
}