/* 5) Calcular a velocidade média para cada um de vários veículos que percorrem uma distância X em um
tempo Y. */



#include <stdio.h>


int main(){

    float distanciaX, tempoY, velocidadeM;

    printf("\nPrograma para calcular velocidade media de varios veiculo que vão do ponto X em um tempo Y\n\n");
    do
    {   
        printf("\nDigite a distancia percorrida em KM: ");
        scanf("%f", &distanciaX);
        printf("\nDigite o tempo gasto em horas: ");
        scanf("%f", &tempoY);

        velocidadeM = distanciaX / tempoY;

        printf("\nA sua velocidade media e de: %0.0fKm/h \n", velocidadeM);
            // PRINTF PARA ORGANIZAÇÃO //
        printf("\n=========================================\n");
    } while (1);


    return 0;
}