/* 6) Obter vários grupos de dois números quaisquer, e informar (para cada grupo):
a) a soma destes números;
b) a subtração destes números;
 */

#include <stdio.h>

int main(){

    float n1, n2, soma, subt;

    printf("\nPrograma para obter grupos de dois numeros quaisquer e informar a soma e subtracao dos mesmos\n");

    do
    {
        printf("\nDigite um numero: ");
        scanf("%f", &n1);
        printf("\nDigite outro numero: ");
        scanf("%f", &n2);
        soma = n1 + n2;
        subt = n1 - n2;
        printf("\n\nA Soma dos numeros %.1f e %.1f resulta em: %.1f", n1, n2, soma);
        printf("\nA subtracao dos numeros %.1f e %.1f resulta em: %.1f", n1, n2, subt);

            // PRINTF PARA ORGANIZAÇÃO //
        printf("\n==================================================\n");
    } while (1);
    



    return 0;
}