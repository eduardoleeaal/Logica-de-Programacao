/* 4) Calcular o volume de um cilindro. Perguntar ao usuário se há outros cálculos a serem realizados para
continuar ou não o programa.
 */

#include <stdio.h>
#include <math.h>

int main(){

    int calc;
    float area, raio, altura;
    printf("\nCalcular area de um ou mais cilindros\n\n");

    do
    {
            printf("\nDigite o valor da altura do cilindro: ");
            scanf("%f", &altura);
            printf("\nDigite o valor do raio do cilindro: ");
            scanf("%f", &raio);
            area = 2 * M_PI * pow(raio, 2.0) + altura * 2 * M_PI * raio;
            printf("\nA area do cilindro e %0.2f\n", area);
            printf("\nVoce pretende calcular a area de mais cilindros? (1 ou 2)");
            printf("\nSim --> 1 \nNao --> 2\n");
            scanf("%d", &calc);
    } while (calc == 1);
    
    return 0;
}