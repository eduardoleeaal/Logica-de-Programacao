/* 3) Calcular a média ponderada para um grupo de 22 alunos, para 2 notas bimestrais. */


#include <stdio.h>


int main(){

    int contador, vet;
    float p1, p2, n1, n2, media;
    printf("\nPrograma para calcular a media ponderada de 22 alunos");

    vet = 0;

    for (contador = 1; contador <= 22; contador++)
    {
        printf("\nDigite sua nota referente ao primeiro bimestre: ");
        scanf("%f", &n1);
        printf("\nDigite o peso do primeiro bimestre: ");
        scanf("%f", &p1);
        printf("\nDigite sua nota referente ao segundo bimestre: ");
        scanf("%f", &n2);
        printf("\nDigite o peso do segundo bimestre: ");
        scanf("%f", &p2);

        media = ((n1 * p1) + (n2 * p2)) / (p1 + p2);

        printf("\nSua media e: %.1f\n\n", media);
        vet++;
        printf("\nAluno No: %d\n\n", vet);

            // PRINTF PARA ORGANIZAÇÃO //
        printf("================================================");
    }
    




    return 0;
    }